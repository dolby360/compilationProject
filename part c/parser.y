
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    void yyerror(const char *c);

    #define YYSTPARAN_CE struct node*

    #include "TAC/TAC.h"
    //#include "symb/symb.h"
    #include "definitions.h"
    
    
%}

%union{
	char ch;
	int num;			
    char* str;	

    node* n;
}

%token KEY_BOOLEAN,KEY_CHAR,KEY_VOID,KEY_INT,KEY_STRING,KEY_INTP,KEY_CHAPARAN_C
%token KEY_IF,KEY_ELSE
%token KEY_WHILE,KEY_DO,KEY_FOR
%token KEY_RETURN,KEY_NULL

%token OP_AND,OP_NOT,OP_OR
%token OP_DIV,ASSIGN,OP_MINUS,OP_PLUS,OP_MULTI,OP_ABS
%token OP_EQ,OP_GE,OP_GT,OP_LE,OP_LT,OP_NE
%token OP_ADDRESS_OF,OP_DEREFERENCE

%token SEMICOLON,COMMA
%token BRA_O,BRA_C,PARAN_O,PARAN_C,SQ_BRA_O,SQ_BRA_C

%token  IDENTIFIER STRING_LITERAL CHAR_LITERAL

%token TRUE_LITERAL FALSE_LITERAL INTEGER_LITERAL HEX_LITERAL OCTA_LITERAL BINARY_LITERAL 

%token APOSTROPHE KEY_CHARP COMMENT KET_FOR


%type <n> IDENTIFIER  STRING_LITERAL  AFTER_ATETMENT_NO_PARAN PROC_STATEMENT
%type <ch>  CHAR_LITERAL
%type <str> INTEGER_LITERAL HEX_LITERAL OCTA_LITERAL BINARY_LITERAL

%type <n> PROGRAM MULTI_PROC PROC ID MULT_PARAMS BLOCK_W_RETURN KEY_BOOLEAN PROC_CALL
%type <n> KEY_CHAR KEY_CHAPARAN_C KEY_INT KEY_INTP KEY_STRING KEY_VOID PROCEDURE
%type <n> MULT_STATEMENT RETURN_STATEMENT STATEMENT ASSIGN VARS FOR_STETMENT
%type <n> COND WHILE_STATEMENT BLOCK ASSIGNMENT BLOCK_W PROC_STETMENT PROC_STETMENT_MULT_PARAMS
%type <n> LHS EXP STR PTR STR_INDEX DEREF BOOL_TYPE PROC_CALL PAR_EXP SIZE_OF MULT_EXP ASS_OR_EXP

%type <str> COMMA       

%%
S: PROGRAM { /*printPreOrder($1,0);*/ /*printSymbTable($1);*/ makeButtomUp($1);  printTreeAddressCode($1); };

PROGRAM:  MULTI_PROC {$$=makeNode("",$1,NULL,NULL,NULL);};

MULTI_PROC : OPTIONAL_COMMENT  PROC MULTI_PROC OPTIONAL_COMMENT { $$ = makeNode("", $2, $3,NULL,NULL); }
           | OPTIONAL_COMMENT PROC OPTIONAL_COMMENT { $$ = $2; }
           ;

PROC :  PROCEDURE ID  PARAN_O MULT_PARAMS PARAN_C OPTIONAL_COMMENT BLOCK_W_RETURN { $$ = makeNodeWithDef(PROCEDURE_DEF,$1->token,$2,$4,$7,endOfBlock());}

        |PROCEDURE ID  PARAN_O PARAN_C OPTIONAL_COMMENT BLOCK_W_RETURN { $$ = makeNodeWithDef(PROCEDURE_DEF,$1->token,$2,$6,endOfBlock(),NULL);  }

        |PROCEDURE ID  PARAN_O MULT_PARAMS PARAN_C OPTIONAL_COMMENT BLOCK_W { $$ = makeNodeWithDef(PROCEDURE_DEF,$1->token,$2,$4,$7,endOfBlock()); }
                                            
        |PROCEDURE ID  PARAN_O PARAN_C OPTIONAL_COMMENT BLOCK_W { $$ = makeNodeWithDef(PROCEDURE_DEF,$1->token,$2,$6,endOfBlock(),NULL); }

        |BLOCK_W_RETURN { $$ = $1;}

        |BLOCK_W   {$$ = $1;}
        ;

PROC_STETMENT: ID PARAN_O PROC_STETMENT_MULT_PARAMS PARAN_C OPTIONAL_COMMENT{ $$ = makeNode($1->token,$3,NULL,NULL,NULL);}
                ;

PROC_STETMENT_MULT_PARAMS:  ID COMMA MULT_PARAMS { $$ = makeNode("",$1,$3,NULL,NULL); }
                            |ID {$$=$1;}
                            ;

PROCEDURE:  KEY_BOOLEAN { $$=makeNodeWithDef(BOOLEAN_DEF,"boolean",NULL,NULL,NULL,NULL); }
            |KEY_CHAR   { $$=makeNodeWithDef(CHAR_DEF,"char",NULL,NULL,NULL,NULL); }
            |KEY_CHARP  { $$=makeNodeWithDef(CHARP_DEF,"charp",NULL,NULL,NULL,NULL); }
            |KEY_INT    { $$=makeNodeWithDef(INT_DEF,"int",NULL,NULL,NULL,NULL); }
            |KEY_INTP   { $$=makeNodeWithDef(INTP_DEF,"intp",NULL,NULL,NULL,NULL); }
            |KEY_STRING { $$=makeNodeWithDef(STRING_DEF,"string",NULL,NULL,NULL,NULL); }
            |KEY_VOID   { $$=makeNodeWithDef(VOID_DEF,"void",NULL,NULL,NULL,NULL); }
            ;


MULT_PARAMS:    PROCEDURE ID COMMA MULT_PARAMS {  $$ = makeNodeWithDef(PARAMS_DEF,$1->token,$2,$4,NULL,NULL); }
                |PROCEDURE ID {  $$ = makeNodeWithDef(PARAMS_DEF,$1->token,$2,endOfParameter(),NULL,NULL);}
                ;

BLOCK_W:    BRA_O OPTIONAL_COMMENT MULT_STATEMENT BRA_C {$$ = $3;}
            | BRA_O BRA_C {$$=NULL;}
            ; 

BLOCK_W_RETURN : BRA_O OPTIONAL_COMMENT MULT_STATEMENT RETURN_STATEMENT BRA_C {$$ = makeNode("",$3,$4,NULL,NULL);}
               | BRA_O RETURN_STATEMENT BRA_C {$$ = $2;}
               ;

MULT_STATEMENT  : MULT_STATEMENT STATEMENT { $$ = makeNode("", $1,$2,NULL,NULL); }
                | STATEMENT { $$ = $1 ; }
                ;

STATEMENT   : ASSIGNMENT SEMICOLON  { $$ = $1; }
            | VARS SEMICOLON        { $$ = $1; }
            | COND                  { $$ = $1; }
            | WHILE_STATEMENT       { $$ = $1; }
            | BLOCK                 { $$ = $1; }
            | PROC                  { $$ = $1; }
            | PROC_CALL SEMICOLON   { $$ = $1; }
            | PROC_STATEMENT        { $$ = $1; }
            | COMMENT               { $$ = NULL;}
            | FOR_STETMENT          { $$ = $1; }
            ;

OPTIONAL_COMMENT:   COMMENT                     {}
                    |OPTIONAL_COMMENT COMMENT   {}
                    |                           {}
                    ;

RETURN_STATEMENT: KEY_RETURN EXP SEMICOLON { $$ = makeNode("return",$2,NULL,NULL,NULL); };

PROC_STATEMENT:      
            PROCEDURE ID PARAN_O MULT_PARAMS PARAN_C SEMICOLON{ $$ = makeNodeWithDef (PROC_STATEMENT,$1->token,$2,$4,NULL,NULL); }
            |PROCEDURE ID PARAN_O PARAN_C SEMICOLON{ $$ = makeNodeWithDef (PROC_STATEMENT,$1->token,$2,NULL,NULL,NULL); }
            ;  

PROC_CALL : ID PARAN_O MULT_EXP PARAN_C { $$ = makeNodeWithDef(PROC_CALL_DEF,$1->token,$1, $3,endOfParameter(),NULL); }
          | ID PARAN_O PARAN_C { $$ = makeNodeWithDef(PROC_CALL_DEF,$1->token,$1, NULL,NULL,NULL); }
          ;


VARS :  PROCEDURE EXP           { $$ = makeNodeWithDef (DECLARATION_DEF,"decleration",$1,$2,NULL,NULL); } 
        |PROCEDURE MULT_EXP      { $$ = makeNodeWithDef (DECLARATION_DEF,"decleration",$1,$2,NULL,NULL); } 
        |PROCEDURE ASSIGNMENT   { $$ = makeNodeWithDef (DECLARATION_DEF,"decleration",$1,$2,NULL,NULL); } 
        ;



ASSIGNMENT : LHS ASSIGN EXP         { $$ = makeNodeWithDef(ASSIGNMENT_DEF,"=", $1, $3,NULL,NULL); }
           | LHS ASSIGN STR         { $$ = makeNodeWithDef(ASSIGNMENT_DEF,"=", $1, $3,NULL,NULL);}
           | LHS ASSIGN PTR         { $$ = makeNodeWithDef(ASSIGNMENT_DEF,"=", $1, $3,NULL,NULL);}
           | LHS ASSIGN ID PARAN_O MULT_EXP PARAN_C     { $$ = makeNodeWithDef(ASSIGNMENT_DEF,"=", $1, $3,$5,NULL);   }
           | LHS ASSIGN ID PARAN_O PARAN_C              { $$ =makeNodeWithDef(ASSIGNMENT_DEF,"=", $1, $3,NULL,NULL); }
           | LHS ASSIGN KEY_NULL    {$$ = makeNodeWithDef(ASSIGNMENT_DEF,"=", $1, makeNodeWithDef(NULL_DEF,"null",NULL,NULL,NULL,NULL),NULL,NULL); }
           ;


LHS : ID { $$ = $1; }
    | STR_INDEX { $$ = $1; }
    | DEREF { $$ = $1; }
    ;

STR_INDEX : ID SQ_BRA_O EXP SQ_BRA_C { $$ = makeNodeWithDef(STRING_ARRAY,"STR_index", $1, $3,NULL,NULL); };

EXP : ID                    { $$ = $1; }
    | INTEGER_LITERAL       { $$ = makeNodeWithDef(INTEGER_LITERAL_DEF,yytext, NULL, NULL ,NULL,NULL); }
    | CHAR_LITERAL          { $$ = makeNode(yytext, NULL, NULL,NULL,NULL); }
    | STR_INDEX             { $$ = $1; }
    | BOOL_TYPE             { $$ = makeNodeWithDef(BOOL_DEF,"boolean", $1, NULL,NULL,NULL); }
    | OP_DEREFERENCE EXP    { $$ = makeNodeWithDef(POINTER_DEF,"^", $2, NULL,NULL,NULL); }
    | PROC_CALL             { $$ = $1; }
    | PAR_EXP               { $$ = $1; }
    | SIZE_OF               { $$ = $1; }
    | KEY_NULL              { $$ = makeNodeWithDef(NULL_DEF,"null",NULL,NULL,NULL,NULL);}
    | OP_NOT EXP            { $$ = makeNodeWithDef(NOT_DEF,"!", $2, NULL,NULL,NULL); }
    | EXP OP_PLUS EXP       { $$ = makeNodeWithDef(OP_DEF,"+",$1,$3,NULL,NULL); }
    | EXP OP_MINUS EXP      { $$ = makeNodeWithDef(OP_DEF,"-",$1,$3,NULL,NULL); }
    | EXP OP_MULTI EXP      { $$ = makeNodeWithDef(OP_DEF,"*",$1,$3,NULL,NULL); }
    | EXP OP_DIV EXP        { $$ = makeNodeWithDef(OP_DEF,"/",$1,$3,NULL,NULL); }
    | EXP OP_LT EXP         { $$ = makeNodeWithDef(LT_DEF,"<",$1,$3,NULL,NULL); }
    | EXP OP_GT EXP         { $$ = makeNodeWithDef(GT_DEF,">",$1,$3,NULL,NULL); }
    | EXP OP_LE EXP         { $$ = makeNodeWithDef(LE_DEF,"<=",$1,$3,NULL,NULL);}
    | EXP OP_GE EXP         { $$ = makeNodeWithDef(GE_DEF,">=",$1,$3,NULL,NULL);}
    | EXP OP_EQ EXP         { $$ = makeNodeWithDef(EQ_DEF,"==",$1,$3,NULL,NULL);}
    | EXP OP_NE EXP         { $$ = makeNodeWithDef(NE_DEF,"!=",$1,$3,NULL,NULL);}
    | EXP OP_AND EXP        { $$ = makeNodeWithDef(AND_DEF,"&&",$1,$3,NULL,NULL);}
    | EXP OP_OR EXP         { $$ = makeNodeWithDef(OR_DEF,"||",$1,$3,NULL,NULL);}
    | PTR OP_LT PTR         { $$ = makeNodeWithDef(LT_DEF,"<",$1,$3,NULL,NULL); }
    | PTR OP_GT PTR         { $$ = makeNodeWithDef(GT_DEF,">",$1,$3,NULL,NULL); }
    | PTR OP_LE PTR         { $$ = makeNodeWithDef(LE_DEF,"<=",$1,$3,NULL,NULL);}
    | PTR OP_GE PTR         { $$ = makeNodeWithDef(GE_DEF,">=",$1,$3,NULL,NULL); }
    | PTR OP_EQ PTR         { $$ = makeNodeWithDef(EQ_DEF,"==",$1,$3,NULL,NULL); }
    | PTR OP_NE PTR         { $$ = makeNodeWithDef(NE_DEF,"!=",$1,$3,NULL,NULL); }
    | PTR OP_AND PTR        { $$ = makeNodeWithDef(AND_DEF,"&&",$1,$3,NULL,NULL); }
    | PTR OP_OR PTR         { $$ = makeNodeWithDef(OR_DEF,"||",$1,$3,NULL,NULL); }
    | PROC_STETMENT         { $$ = $1; }
    ;

FOR_STETMENT: KEY_FOR PARAN_O ASS_OR_EXP SEMICOLON EXP SEMICOLON ASS_OR_EXP PARAN_C BLOCK { $$ = makeNodeWithDef(FOR_DEF,"for",$3,$5,$7,NULL); }
            ;

ASS_OR_EXP: ASSIGNMENT  {$$ = $1;}
            |EXP        {$$ = $1;}
            ;

WHILE_STATEMENT : KEY_WHILE PARAN_O EXP PARAN_C BLOCK { $$ = makeNode("while",$3,$5,NULL,NULL); }
                ;

BLOCK : BRA_O MULT_STATEMENT BRA_C {$$ = $2;}
      | BRA_O BRA_C {$$ = makeNode("{}",NULL,NULL,NULL,NULL);}
      ;

COND :  KEY_IF PARAN_O EXP PARAN_C BLOCK                                                     {$$ = makeNodeWithDef(IF_DEF,"if",$3,$5,NULL,NULL); }
        | KEY_IF PARAN_O EXP PARAN_C AFTER_ATETMENT_NO_PARAN                                   {$$ = makeNodeWithDef(IF_DEF,"if",$3,$5,NULL,NULL); }
        | KEY_IF PARAN_O EXP PARAN_C BLOCK KEY_ELSE BLOCK                                      { $$ = makeNodeWithDef(IF_DEF,"if", $3, makeNode("else", $5, $7,NULL,NULL),NULL,NULL);}
        | KEY_IF PARAN_O EXP PARAN_C AFTER_ATETMENT_NO_PARAN KEY_ELSE AFTER_ATETMENT_NO_PARAN  { $$ = makeNodeWithDef(IF_DEF,"if", $3, makeNode("else", $5, $7,NULL,NULL),NULL,NULL);}
        | KEY_IF PARAN_O EXP PARAN_C AFTER_ATETMENT_NO_PARAN KEY_ELSE BLOCK                    { $$ = makeNodeWithDef(IF_DEF,"if", $3, makeNode("else", $5, $7,NULL,NULL),NULL,NULL);}
        | KEY_IF PARAN_O EXP PARAN_C BLOCK KEY_ELSE AFTER_ATETMENT_NO_PARAN                    { $$ = makeNodeWithDef(IF_DEF,"if", $3, makeNode("else", $5, $7,NULL,NULL),NULL,NULL);}
        ;

AFTER_ATETMENT_NO_PARAN:    STATEMENT                               {$$ = $1;}
                            | PARAN_O PARAN_C SEMICOLON             {$$ = NULL;}
                            | PARAN_O ASSIGNMENT PARAN_C SEMICOLON  {$$ = $2;}
                            ;

BOOL_TYPE : TRUE_LITERAL { $$ = makeNode("true", NULL,NULL,NULL,NULL); }
          | FALSE_LITERAL { $$ = makeNode("false", NULL, NULL,NULL,NULL); }
          ;

PAR_EXP : PARAN_O EXP PARAN_C { $$ = makeNode("",$2,NULL,NULL,NULL); }
        ;

SIZE_OF : OP_ABS ID OP_ABS { $$ = makeNodeWithDef(ABS_DEF,"ABS",$2,NULL,NULL,NULL); }
        | OP_ABS INTEGER_LITERAL OP_ABS { $$ = makeNodeWithDef(ABS_DEF,"ABS",makeNode($2, NULL, NULL,NULL,NULL),NULL,NULL,NULL); }
        | OP_ABS STR OP_ABS { $$ = makeNodeWithDef(ABS_DEF,"ABS",$2,NULL,NULL,NULL); }
        ;

PTR : OP_ADDRESS_OF ID { $$ = makeNodeWithDef(OP_ADDRESS_OF_DEF,"&", $2, NULL,NULL,NULL); }
    | OP_ADDRESS_OF STR_INDEX { $$ = makeNodeWithDef(OP_ADDRESS_OF_DEF,"&", $2 ,NULL,NULL,NULL); }
    ;

DEREF : OP_DEREFERENCE ID { $$ = makeNodeWithDef(POINTER_DEF,"^", $2, NULL,NULL,NULL); }
      ;

MULT_EXP : EXP COMMA MULT_EXP{ $$ = makeNode(""/*Multiple Expressions*/,$1,$3,NULL,NULL); }
         | EXP { $$ = $1; }
         ;

STR : STRING_LITERAL { $$ = makeNodeWithDef(STRING_LITERAL_DEF,yytext,NULL,NULL,NULL,NULL); }
    ;

ID: IDENTIFIER {$$ = makeNodeWithDef(IDENTIFIER_DEF,yytext,NULL,NULL,NULL,NULL); };
%%



#include "lex.yy.c"
int main(){

    //printPreOrder(myProgram,0);
    
    return yyparse();
}

void yyerror(const char *msg){
	//fprintf(stderr,"line %d: %s\n",yylineno ,msg);
    /*
	fflush(stdout);
	fprintf(stderr, "Error: %s at line %d\n", msg,yylineno );
	fprintf(stderr, "Parser does not expect '%s'\n",yytext);
    */
    fprintf(stderr, "ERROR: compilation error somthing is wrong with me %d\n",yylineno );
}


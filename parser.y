
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    void yyerror(const char *c);

    #define YYSTPARAN_CE struct node*

    #include "print_ast.h"
    node* ouPARAN_Crogram;
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

%token NULL_LITERAL IDENTIFIER STRING_LITERAL CHAR_LITERAL

%token TRUE_LITERAL FALSE_LITERAL INTEGER_LITERAL HEX_LITERAL OCTA_LITERAL BINARY_LITERAL 

%token APOSTROPHE KEY_CHARP

%type <str> IDENTIFIER NULL_LITERAL STRING_LITERAL 
%type <ch> CHAR_LITERAL
%type <num> INTEGER_LITERAL HEX_LITERAL OCTA_LITERAL BINARY_LITERAL

%type <n> PROGRAM MULTI_PROC PROC ID MULT_PARAMS BLOCK_W_RETURN KEY_BOOLEAN
%type <n> KEY_CHAR KEY_CHAPARAN_C KEY_INT KEY_INTP KEY_STRING KEY_VOID PROCEDURE
%type <n> MULT_STATEMENT RETURN_STATEMENT STATEMENT ASSIGN VARS
%type <n> COND WHILE_STATEMENT BLOCK ASSIGNMENT 
%type <n> LHS EXP STR PTR STR_INDEX DEREF BOOL_TYPE PROC_CALL PAR_EXP SIZE_OF MULT_EXP

%type <str> COMMA       

%%
S: PROGRAM {printPreOrder($1,0);};

PROGRAM:  MULTI_PROC {$$=makeNode("Begin:",$1,NULL);};

MULTI_PROC : MULTI_PROC PROC { $$ = makeNode("", $1, $2); }
           | PROC { $$ = $1; }
           ;

PROC :  PROCEDURE ID PARAN_O MULT_PARAMS PARAN_C BLOCK_W_RETURN {
                                                                node* dec_proc = makeNode($1->token, $2, $4);
                                                                node* block_proc = makeNode("",NULL, $6);
                                                                $$ = makeNode("",dec_proc,block_proc);
                                                                }
        |PROCEDURE ID PARAN_O PARAN_C BLOCK_W_RETURN    {
                                                        node* dec_proc = makeNode("", $2, NULL);
                                                        node* block_proc = makeNode("", NULL, $5);
                                                        $$ = makeNode("",dec_proc,block_proc);
                                                        };

PROCEDURE:  KEY_BOOLEAN { $$=makeNode("boolean",NULL,NULL); }
            |KEY_CHAR   { $$=makeNode("char",NULL,NULL); }
            |KEY_CHARP  { $$=makeNode("charp",NULL,NULL); }
            |KEY_INT    { $$=makeNode("int",NULL,NULL); }
            |KEY_INTP   { $$=makeNode("intp",NULL,NULL); }
            |KEY_STRING { $$=makeNode("string",NULL,NULL); }
            |KEY_VOID   { $$=makeNode("void",NULL,NULL); }



MULT_PARAMS:    PROCEDURE ID COMMA MULT_PARAMS 
                                        {
                                        node* l = makeNode($1->token, $2, NULL);
                                        node* r = makeNode(",", $4,NULL );
                                        $$ = makeNode("",l,r);
                                        }
                |PROCEDURE ID {$$=makeNode($1->token,$2,NULL);};


BLOCK_W_RETURN : BRA_O MULT_STATEMENT RETURN_STATEMENT BRA_C {$$ = makeNode("",$2,$3);}
               | BRA_O RETURN_STATEMENT SEMICOLON BRA_C {$$ = $2;}
               ;

MULT_STATEMENT : MULT_STATEMENT STATEMENT { $$ = makeNode("", $1,$2); }
                | STATEMENT { $$ = $1 ; }

STATEMENT   : ASSIGNMENT SEMICOLON  { $$ = makeNode("", $1, NULL); }
            | VARS SEMICOLON        { $$ = $1; }
            | COND                  { $$ = makeNode("", $1, NULL); }
            | WHILE_STATEMENT       { $$ = makeNode("", $1, NULL); }
            | BLOCK                 { $$ = makeNode("", $1, NULL); }
            | PROC                  { $$ = makeNode("", $1, NULL); }
            ;

RETURN_STATEMENT: KEY_RETURN EXP { $$ = makeNode("return",$2,NULL); };

COND:               { $$ = makeNode("",NULL,NULL); };
WHILE_STATEMENT:    { $$ = makeNode("",NULL,NULL); };
BLOCK:              { $$ = makeNode("",NULL,NULL); };
PROC:               { $$ = makeNode("",NULL,NULL); };

VARS :  PROCEDURE EXP           { $$ = $2; } 
        |PROCEDURE ASSIGNMENT   { $$ = $2; } 
     ;

ASSIGNMENT : LHS ASSIGN EXP { $$ = makeNode("ASSIGNMENT", $1, $3); }
           | LHS ASSIGN STR { $$ = makeNode("STRING ASSIGNMENT", $1, $3);}
           | LHS ASSIGN PTR { $$ = makeNode("POINTER ASSIGNMENT", $1, $3);}
           | LHS ASSIGN KEY_NULL {$$ = makeNode("NULL POINTER ASSIGNMENT", $1, makeNode("NULL POINTER",NULL,NULL)); }
           ;


LHS : ID { $$ = makeNode("ASSIGNMENT TARGET: VARIABLE", $1, NULL); }
    | STR_INDEX { $$ = makeNode("ASSIGNMENT TARGET: STRING", $1, NULL); }
    | DEREF { $$ = makeNode("ASSIGNMENT TARGET: DEREFERENCE", $1, NULL); }
    ;

STR_INDEX : ID SQ_BRA_O EXP SQ_BRA_C { $$ = makeNode("STRING INDEX", $1, $3) ;};

EXP : ID                    { $$ = makeNode(yytext, $1, NULL); }
    | INTEGER_LITERAL       { $$ = makeNode(yytext, $1, NULL); }
    | CHAR_LITERAL          { $$ = makeNode(yytext, $1, NULL); }
    | STR_INDEX             { $$ = $1; }
    | BOOL_TYPE             { $$ = makeNode("BOOLEAN", $1, NULL); }
    | OP_DEREFERENCE EXP    { $$ = makeNode("DEREFERENCE", $2, NULL); }
    | PROC_CALL             { $$ = $1; }
    | PAR_EXP               { $$ = $1; }
    | SIZE_OF               { $$ = $1; }
    | OP_NOT EXP            { $$ = makeNode("!", $2, NULL); }
    | EXP OP_PLUS EXP       { $$ = makeNode("+",$1,$3); }
    | EXP OP_NOT EXP        { $$ = makeNode("-",$1,$3); }
    | EXP OP_MULTI EXP      { $$ = makeNode("*",$1,$3); }
    | EXP OP_DIV EXP        { $$ = makeNode("/",$1,$3); }
    | EXP OP_LT EXP         { $$ = makeNode("<",$1,$3); }
    | EXP OP_GT EXP         { $$ = makeNode(">",$1,$3); }
    | EXP OP_LE EXP         { $$ = makeNode("<=",$1,$3); }
    | EXP OP_GE EXP         { $$ = makeNode(">=",$1,$3); }
    | EXP OP_EQ EXP         { $$ = makeNode("==",$1,$3); }
    | EXP OP_NE EXP         { $$ = makeNode("!=",$1,$3); }
    | EXP OP_AND EXP        { $$ = makeNode("&&",$1,$3); }
    | EXP OP_OR EXP         { $$ = makeNode("||",$1,$3); }
    | PTR OP_LT PTR         { $$ = makeNode("<",$1,$3); }
    | PTR OP_GT PTR         { $$ = makeNode(">",$1,$3); }
    | PTR OP_LE PTR         { $$ = makeNode("<=",$1,$3); }
    | PTR OP_GE PTR         { $$ = makeNode(">=",$1,$3); }
    | PTR OP_EQ PTR         { $$ = makeNode("==",$1,$3); }
    | PTR OP_NE PTR         { $$ = makeNode("!=",$1,$3); }
    | PTR OP_AND PTR        { $$ = makeNode("&&",$1,$3); }
    | PTR OP_OR PTR         { $$ = makeNode("||",$1,$3); }
    ;


BOOL_TYPE : TRUE_LITERAL { $$ = makeNode("true", NULL, NULL); }
          | FALSE_LITERAL { $$ = makeNode("false", NULL, NULL); }
          ;

PROC_CALL : ID PARAN_O MULT_EXP PARAN_C SEMICOLON{ $$ = makeNode("Procedure Call",$1, $3); }
          | ID PARAN_O PARAN_C SEMICOLON{ $$ = makeNode("Procedure Call No Params",$1, NULL); }
          ;

PAR_EXP : PARAN_O EXP PARAN_C { $$ = makeNode("PARANTHESES EXPRESSION",$2,NULL); }
        ;

SIZE_OF : OP_ABS ID OP_ABS { $$ = makeNode("ABS",$2,NULL); }
        | OP_ABS STR OP_ABS { $$ = makeNode("ABS",$2,NULL); }
        ;

PTR : OP_ADDRESS_OF ID { $$ = makeNode("&", $2, NULL); }
    | OP_ADDRESS_OF STR_INDEX { $$ = makeNode("&", $2, NULL); }
    ;

DEREF : OP_DEREFERENCE ID { $$ = makeNode("^", $2, NULL); }
      ;

MULT_EXP : MULT_EXP COMMA EXP { $$ = makeNode(""/*Multiple Expressions*/,$1,$3); }
         | EXP { $$ = $1; }
         ;

STR : STRING_LITERAL { $$ = makeNode(yytext,NULL,NULL); }
    ;

ID: IDENTIFIER {$$=makeNode($1,NULL,NULL);};
%%


#include "lex.yy.c"
main(){

    //print_ast(ourProgram);

    return yyparse();
}

void yyerror(const char *c){
	fprintf(stderr,"line %d: %s\n",yylineno - 1,c);
	
}



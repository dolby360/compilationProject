
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    void yyerror(const char *c);

    #define YYSTRPE struct node*

    #include "print_ast.h"
    node* ourProgram;

%}

%union{
	char ch;
	int num;			
    char* str;	

    node* n;
}

%token KEY_BOOLEAN,KEY_CHAR,KEY_VOID,KEY_INT,KEY_STRING,KEY_INTP,KEY_CHARP
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

%type <str> IDENTIFIER NULL_LITERAL STRING_LITERAL
%type <ch> CHAR_LITERAL
%type <num> INTEGER_LITERAL HEX_LITERAL OCTA_LITERAL BINARY_LITERAL

%type <n> PROGRAM
%type <n> MULTI_PROC
%type <n> PROC
%type <n> ID
%type <n> MULT_PARAMS
%type <n> BLOCK_W_RETURN
%type <n> KEY_BOOLEAN 
%type <n> KEY_CHAR   
%type <n> KEY_CHARP  
%type <n> KEY_INT    
%type <n> KEY_INTP   
%type <n> KEY_STRING 
%type <n> KEY_VOID
%type <n> PROCEDURE

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
                                        node* l = makeNode($1->token, NULL, $2);
                                        node* r = makeNode(",", NULL,$4 );
                                        $$ = makeNode("",l,r);
                                        }
                |PROCEDURE ID {$$=makeNode($1->token,$2,NULL);};





BLOCK_W_RETURN: BRA_O KEY_RETURN SEMICOLON BRA_C {$$=makeNode("",NULL,NULL);};;
ID: IDENTIFIER {$$=makeNode(yytext,NULL,NULL);};
%%


#include "lex.yy.c"
main(){

    //print_ast(ourProgram);

    return yyparse();
}

void yyerror(const char *c){
	fprintf(stderr,"line %d: %s\n",yylineno - 1,c);
	
}



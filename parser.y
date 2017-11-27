
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



%%
S: block_grammer

block_grammer: PROCEDUR IDENTIFIER PARAN_O parameters_grammer PARAN_C;

PROCEDUR: KEY_INT|KEY_BOOLEAN|KEY_CHARP|KEY_INTP|KEY_STRING|KEY_VOID;

if_grammer:  KEY_IF PARAN_O expr PARAN_C BRA_O BRA_C{ printf("finished\n");$$=makeNode("IF",$3,NULL);};

expr_grammer:   INTEGER_LITERAL OP_EQ INTEGER_LITERAL {$$=makeNode("==",$1,$3);};
        
parameters_grammer: ;
;
%%


#include "lex.yy.c"
main(){

    print_ast(ourProgram);

    return yyparse();
}

void yyerror(const char *c){
	fprintf(stderr,"line %d: %s\n",yylineno - 1,c);
	
}



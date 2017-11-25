
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    void yyerror(const char *c);

    #include "ast.h"
    program* ourProgram;
%}

%union{
	char ch;
	int num;			
    char* str;	


    program* p;
    procedurList* procedurList_;
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

S:  KEY_IF PARAN_O expr PARAN_C BRA_O BRA_C{ printf("finished\n"); };
expr:   INTEGER_LITERAL OP_EQ INTEGER_LITERAL {printf("%d = %d\n",$1,$3);}
        
;
%%




#include "lex.yy.c"
main(){

    //printAst(ourProgram);

    return yyparse();
}

void yyerror(const char *c){
	fprintf(stderr,"line %d: %s\n",yylineno - 1,c);
	
}



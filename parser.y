
%{
    #include "print_ast.h";
    void yyerror(const char *c);
%}

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

%%
S:          PROCEDURES { printf("Syntax and Parsing: ok \n");
            print_ast($1);
            }
PROCEDURES: PROCEDURES OP_PLUS PROCEDURES { $$ = mknode('+',$1,$3); } 
            |KEY_INT { $$ = mknode(yytext,NULL,NULL); };

%%

#include "lex.yy.c"
main(){
    return yyparse();
}
int yyerror(){
    printf("ERROR\n");
    return 0;
}
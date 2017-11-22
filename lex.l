

%
option yylineo
%{
    #include <stdlib.h>
    #include <string.h>

    void yyerror(const char*);

%}


%%

boolean         {return KEY_BOOLEAN;}
char            {return KEY_CHAR;}
void            {return KEY_VOID}
int             {return KEY_INT;}
string          {return KEY_STRING;}
intp            {return KEY_INTP;}
charp           {return KEY_CHARP;}
if              {return KEY_IF;}
else            {return KEY_ELSE;}
while           {return KEY_WHILE;}
do              {return KEY_DO;}
for             {return KEY_FOR;}
return          {return KEY_RETURN;}
null            {return KEY_NULL;}

\&\&            {return OP_AND;}
\/              {return OP_DIV;;}
\=\=            {return OP_EQ;}
\=              {return ASSIGN;}
\>\=            {return OP_GE;}
\>              {return OP_GT;}
\<\=            {return OP_LE;}
\<              {return OP_LT;}
\-              {return OP_MINUS;}
\!              {return OP_NOT;}
\!\=            {return OP_NE;}
\|\|            {return OP_OR;}
\+              {return OP_PLUS;}
\*              {return OP_MULTI;}
\&              {return OP_ADDRESS_OF;}
\^              {return OP_DEREFERENCE;}

\;              {return SEMICOLON;}
\,              {return COMMA;}
\|              {return OP_ABS;}
\{              {return BRA_O;}
\}              {return BRA_C;}
\(              {return PARAN_O;}
\)              {return PARAN_C;}
\[              {return SQ_BRA_O;}
\]              {return SQ_BRA_C;}

true|TRUE {yylval.num = 1;return TRUE_LITERAL;}
false|FALSE {yylval.num = 0;return FALSE_LITERAL;}

'.'  {
        if(isprint(yytext[1]) != 0){
				yylval.ch = yytext[1];
                return CHAR_LITERAL;
		}
        else
                printf("NOT A PRINTABLE CHAR");
     }

0|[1-9][0-9]*       {yylval.num=convertInt(yytext,10);return INTEGER_LITERAL;}
0[x|X][0-9A-F]*     {yylval.num=convertInt(yytext,16);return HEX_LITERAL;}
0[1-7][0-7]*        {yylval.num=convertInt(yytext,8);return OCTA_LITERAL;}
[0-1]+b             {yylval.num=convertInt(yytext,2);return BINARY_LITERAL;}

\"[^\n\"]*\"        {yylval.str=strdup(yytext);return STRING_LITERAL;}
{ID}                {yylval.str=strdup(yytext);return IDENTIFIER;}
%%

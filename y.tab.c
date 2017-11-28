/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 3 "parser.y"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    void yyerror(const char *c);

    #define YYSTRPE struct node*

    #include "print_ast.h"
    node* ourProgram;

#line 16 "parser.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{
	char ch;
	int num;			
    char* str;	

    node* n;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 48 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define KEY_BOOLEAN 257
#define KEY_CHAR 258
#define KEY_VOID 259
#define KEY_INT 260
#define KEY_STRING 261
#define KEY_INTP 262
#define KEY_CHARP 263
#define KEY_IF 264
#define KEY_ELSE 265
#define KEY_WHILE 266
#define KEY_DO 267
#define KEY_FOR 268
#define KEY_RETURN 269
#define KEY_NULL 270
#define OP_AND 271
#define OP_NOT 272
#define OP_OR 273
#define OP_DIV 274
#define ASSIGN 275
#define OP_MINUS 276
#define OP_PLUS 277
#define OP_MULTI 278
#define OP_ABS 279
#define OP_EQ 280
#define OP_GE 281
#define OP_GT 282
#define OP_LE 283
#define OP_LT 284
#define OP_NE 285
#define OP_ADDRESS_OF 286
#define OP_DEREFERENCE 287
#define SEMICOLON 288
#define COMMA 289
#define BRA_O 290
#define BRA_C 291
#define PARAN_O 292
#define PARAN_C 293
#define SQ_BRA_O 294
#define SQ_BRA_C 295
#define NULL_LITERAL 296
#define IDENTIFIER 297
#define STRING_LITERAL 298
#define CHAR_LITERAL 299
#define TRUE_LITERAL 300
#define FALSE_LITERAL 301
#define INTEGER_LITERAL 302
#define HEX_LITERAL 303
#define OCTA_LITERAL 304
#define BINARY_LITERAL 305
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    2,    2,    3,    3,    7,    7,    7,    7,
    7,    7,    7,    5,    5,    6,    4,
};
static const YYINT yylen[] = {                            2,
    1,    1,    2,    1,    6,    5,    1,    1,    1,    1,
    1,    1,    1,    4,    2,    4,    1,
};
static const YYINT yydefred[] = {                         0,
    7,    8,   13,   10,   12,   11,    9,    0,    1,    0,
    4,    0,    3,   17,    0,    0,    0,    0,    0,    0,
    6,    0,    0,    0,    5,    0,    0,   14,   16,
};
static const YYINT yydgoto[] = {                          8,
    9,   10,   11,   15,   18,   21,   12,
};
static const YYINT yysindex[] = {                      -249,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -249,
    0, -282,    0,    0, -276, -257, -272, -274, -282, -248,
    0, -272, -269, -266,    0, -249, -268,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   24,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -267,    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,    0,   15,    8,    2,    7,   -9,
};
#define YYTABLESIZE 36
static const YYINT yytable[] = {                          1,
    2,    3,    4,    5,    6,    7,   19,    1,    2,    3,
    4,    5,    6,    7,   14,   16,   19,   20,   22,   26,
   24,   27,   29,    2,   13,   15,   23,   28,   25,    0,
    0,    0,    0,    0,    0,   17,
};
static const YYINT yycheck[] = {                        257,
  258,  259,  260,  261,  262,  263,   16,  257,  258,  259,
  260,  261,  262,  263,  297,  292,   26,  290,  293,  289,
  269,  288,  291,    0,   10,  293,   19,   26,   22,   -1,
   -1,   -1,   -1,   -1,   -1,  293,
};
#define YYFINAL 8
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 305
#define YYUNDFTOKEN 315
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"KEY_BOOLEAN","KEY_CHAR",
"KEY_VOID","KEY_INT","KEY_STRING","KEY_INTP","KEY_CHARP","KEY_IF","KEY_ELSE",
"KEY_WHILE","KEY_DO","KEY_FOR","KEY_RETURN","KEY_NULL","OP_AND","OP_NOT",
"OP_OR","OP_DIV","ASSIGN","OP_MINUS","OP_PLUS","OP_MULTI","OP_ABS","OP_EQ",
"OP_GE","OP_GT","OP_LE","OP_LT","OP_NE","OP_ADDRESS_OF","OP_DEREFERENCE",
"SEMICOLON","COMMA","BRA_O","BRA_C","PARAN_O","PARAN_C","SQ_BRA_O","SQ_BRA_C",
"NULL_LITERAL","IDENTIFIER","STRING_LITERAL","CHAR_LITERAL","TRUE_LITERAL",
"FALSE_LITERAL","INTEGER_LITERAL","HEX_LITERAL","OCTA_LITERAL","BINARY_LITERAL",
0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : S",
"S : PROGRAM",
"PROGRAM : MULTI_PROC",
"MULTI_PROC : MULTI_PROC PROC",
"MULTI_PROC : PROC",
"PROC : PROCEDURE ID PARAN_O MULT_PARAMS PARAN_C BLOCK_W_RETURN",
"PROC : PROCEDURE ID PARAN_O PARAN_C BLOCK_W_RETURN",
"PROCEDURE : KEY_BOOLEAN",
"PROCEDURE : KEY_CHAR",
"PROCEDURE : KEY_CHARP",
"PROCEDURE : KEY_INT",
"PROCEDURE : KEY_INTP",
"PROCEDURE : KEY_STRING",
"PROCEDURE : KEY_VOID",
"MULT_PARAMS : PROCEDURE ID COMMA MULT_PARAMS",
"MULT_PARAMS : PROCEDURE ID",
"BLOCK_W_RETURN : BRA_O KEY_RETURN SEMICOLON BRA_C",
"ID : IDENTIFIER",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 105 "parser.y"


#include "lex.yy.c"
main(){

    //print_ast(ourProgram);

    return yyparse();
}

void yyerror(const char *c){
	fprintf(stderr,"line %d: %s\n",yylineno - 1,c);
	
}


#line 273 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 63 "parser.y"
	{printPreOrder(yystack.l_mark[0].n,0);}
break;
case 2:
#line 65 "parser.y"
	{yyval.n=makeNode("Begin:",yystack.l_mark[0].n,NULL);}
break;
case 3:
#line 67 "parser.y"
	{ yyval.n = makeNode("", yystack.l_mark[-1].n, yystack.l_mark[0].n); }
break;
case 4:
#line 68 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 5:
#line 71 "parser.y"
	{
                                                                node* dec_proc = makeNode(yystack.l_mark[-5].n->token, yystack.l_mark[-4].n, yystack.l_mark[-2].n);
                                                                node* block_proc = makeNode("",NULL, yystack.l_mark[0].n);
                                                                yyval.n = makeNode("",dec_proc,block_proc);
                                                                }
break;
case 6:
#line 76 "parser.y"
	{
                                                        node* dec_proc = makeNode("", yystack.l_mark[-3].n, NULL);
                                                        node* block_proc = makeNode("", NULL, yystack.l_mark[0].n);
                                                        yyval.n = makeNode("",dec_proc,block_proc);
                                                        }
break;
case 7:
#line 82 "parser.y"
	{ yyval.n=makeNode("boolean",NULL,NULL); }
break;
case 8:
#line 83 "parser.y"
	{ yyval.n=makeNode("char",NULL,NULL); }
break;
case 9:
#line 84 "parser.y"
	{ yyval.n=makeNode("charp",NULL,NULL); }
break;
case 10:
#line 85 "parser.y"
	{ yyval.n=makeNode("int",NULL,NULL); }
break;
case 11:
#line 86 "parser.y"
	{ yyval.n=makeNode("intp",NULL,NULL); }
break;
case 12:
#line 87 "parser.y"
	{ yyval.n=makeNode("string",NULL,NULL); }
break;
case 13:
#line 88 "parser.y"
	{ yyval.n=makeNode("void",NULL,NULL); }
break;
case 14:
#line 94 "parser.y"
	{
                                        node* l = makeNode(yystack.l_mark[-3].n->token, NULL, yystack.l_mark[-2].n);
                                        node* r = makeNode(",", NULL,yystack.l_mark[0].n );
                                        yyval.n = makeNode("",l,r);
                                        }
break;
case 15:
#line 99 "parser.y"
	{yyval.n=makeNode(yystack.l_mark[-1].n->token,yystack.l_mark[0].n,NULL);}
break;
case 16:
#line 102 "parser.y"
	{yyval.n=makeNode("",NULL,NULL);}
break;
case 17:
#line 103 "parser.y"
	{yyval.n=makeNode(yytext,NULL,NULL);}
break;
#line 555 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}

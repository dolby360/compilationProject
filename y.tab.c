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

    #define YYSTPARAN_CE struct node*

    #include "print_ast.h"
    node* ouPARAN_Crogram;
#line 15 "parser.y"
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
#line 47 "y.tab.c"

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
#define KEY_CHAPARAN_C 263
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
#define APOSTROPHE 306
#define KEY_CHARP 307
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    2,    2,    3,    3,    3,    3,    7,    7,
    7,    7,    7,    7,    7,    5,    5,   16,   16,    6,
    6,    8,    8,   10,   10,   10,   10,   10,   10,    9,
   13,    3,   11,   11,   15,   15,   15,   15,   17,   17,
   17,   21,   18,   18,   18,   18,   18,   18,   18,   18,
   18,   18,   18,   18,   18,   18,   18,   18,   18,   18,
   18,   18,   18,   18,   18,   18,   18,   18,   18,   18,
   18,   18,   14,   14,   12,   12,   23,   23,   24,   24,
   25,   26,   26,   20,   20,   22,   27,   27,   19,    4,
};
static const YYINT yylen[] = {                            2,
    1,    1,    2,    1,    6,    5,    6,    5,    1,    1,
    1,    1,    1,    1,    1,    4,    2,    3,    2,    4,
    3,    2,    1,    2,    2,    1,    1,    1,    1,    3,
    0,    0,    2,    2,    3,    3,    3,    3,    1,    1,
    1,    4,    1,    1,    1,    1,    1,    2,    1,    1,
    1,    2,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    2,    5,    7,    1,    1,    5,    4,
    3,    3,    3,    2,    2,    2,    3,    1,    1,    1,
};
static const YYINT yydefred[] = {                         0,
    9,   10,   15,   12,   14,   13,   11,    0,    1,    0,
    4,    0,    3,   90,    0,    0,    0,    0,    0,    0,
    6,    8,    0,    0,    0,    0,    0,    0,   19,   29,
    0,    0,    0,    0,   23,    0,   26,   27,   28,    0,
    0,   40,   41,    5,    7,    0,    0,    0,    0,    0,
    0,    0,   45,   77,   78,   44,    0,    0,    0,   46,
   47,   49,   50,   51,   86,   74,    0,    0,    0,    0,
   34,    0,    0,   18,    0,   22,   21,   25,   24,    0,
   16,    0,    0,   89,    0,    0,    0,   85,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   30,    0,    0,    0,    0,    0,    0,
    0,    0,   73,    0,    0,    0,   20,   38,    0,   36,
    0,    0,   82,   83,   81,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   71,   72,   69,   68,   66,   67,   65,   70,   42,    0,
    0,   80,    0,    0,    0,    0,   79,   76,
};
static const YYINT yydgoto[] = {                          8,
    9,   10,   30,   57,   18,   21,   32,   33,   34,   35,
   36,   37,   38,   39,   40,   22,   41,   89,   86,   59,
   60,   43,   61,   62,   63,   64,  128,
};
static const YYINT yysindex[] = {                      -157,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -157,
    0, -293,    0,    0, -279, -175, -271, -252, -293, -113,
    0,    0, -271, -241, -233,   40, -293,  -46,    0,    0,
 -215,   57, -100, -228,    0, -207,    0,    0,    0, -200,
 -186,    0,    0,    0,    0, -157,   40,   40, -242, -293,
   40,   40,    0,    0,    0,    0, -267,  243,  276,    0,
    0,    0,    0,    0,    0,    0,  -38,   40,   40, -258,
    0,  261,    0,    0, -199,    0,    0,    0,    0,  -16,
    0,  155,  261,    0, -188, -180, -215,    0,  261,  172,
   23,   40,   40,   40,   40,   40,   40,   40,   40,   40,
   40,   40,   40,    0, -174, -174, -174, -174, -174, -174,
 -174, -174,    0,  139, -267, -164,    0,    0,  261,    0,
  276, -165,    0,    0,    0, -167,  261, -284,  261,  261,
  261,  261,  261,  261,  261,  261,  261,  261,  261,  261,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -237,
 -135,    0,   40, -154, -165,  261,    0,    0,
};
static const YYINT yyrindex[] = {                       131,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  140,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -152,    0,    0,    0,    0,    0,    0,
 -136,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   89,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  189,
    0, -146,  207,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -260,    0,    0,    0,  114,    0, -243,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  225,    0,    0,    0, -134,    0,
 -133,    0,    0,    0,    0,    0, -277,    0, -231, -182,
 -179, -169, -123, -107,  -53,  -21,   10,   18,   58,  274,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -59,    0,    0,    0,    0, -269,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,    0,    8,   11,  106,  130,    1,  135,  134,  -30,
    0,    0,    0, -115,  136,  148,    0,  -26,   93,  182,
  -18,    0,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 569
static const YYINT yytable[] = {                         58,
   12,   42,   76,   14,  153,   72,  151,   11,  154,   42,
   12,   88,   16,   73,   42,   88,   19,   13,   20,   87,
   82,   83,   15,   87,   91,   90,   68,   52,   52,   24,
   31,   88,   52,  116,   52,   68,   76,   65,   31,  158,
   23,  114,   70,   31,   48,   48,   19,   46,   42,   48,
  152,   48,   20,  119,   14,   84,   63,   63,   47,   85,
   87,   63,   77,   63,  127,  129,  130,  131,  132,  133,
  134,  135,  136,  137,  138,  139,  140,   31,   68,  115,
   78,    1,    2,    3,    4,    5,    6,   79,   80,  127,
  123,  117,    1,    2,    3,    4,    5,    6,  124,    1,
    2,    3,    4,    5,    6,   54,   54,   48,   64,   64,
   54,   50,   54,   64,   49,   64,   19,   17,   56,   56,
  152,   50,   51,   56,   28,   56,  156,   52,  150,  155,
   32,    7,   14,  157,   53,   54,   55,   56,   39,    2,
   17,   33,    7,    1,    2,    3,    4,    5,    6,    7,
   25,   81,   44,   35,   37,   26,    1,    2,    3,    4,
    5,    6,   67,   25,   53,   53,   75,   71,   26,   53,
   45,   53,  120,   27,    0,    0,   28,   29,    0,    0,
   55,   55,    0,   14,    0,   55,   27,   55,    0,   28,
   74,    0,    0,    7,    0,    0,   14,   75,   75,   75,
   75,   75,   75,    0,   75,    0,    7,    0,    0,   75,
    1,    2,    3,    4,    5,    6,    0,   25,    1,    2,
    3,    4,    5,    6,    0,   25,    0,   75,    0,    0,
   75,   75,    0,    0,   61,   61,    0,   75,    0,   61,
   27,   61,    0,   28,   66,    0,    0,   75,   27,    0,
   14,   28,  113,  118,    0,   48,    0,    0,   14,    0,
    7,  121,   49,    0,    0,    0,   60,   60,    7,   50,
   51,   60,    0,   60,    0,   52,    0,    0,    0,    0,
   14,   84,   53,   54,   55,   56,  141,  142,  143,  144,
  145,  146,  147,  148,   48,    0,    0,   58,   58,    0,
    0,   49,   58,    0,   58,   59,   59,    0,   50,   51,
   59,   48,   59,    0,   52,  126,    0,    0,   49,   14,
    0,   53,   54,   55,   56,   50,   51,    0,   48,    0,
    0,   52,    0,    0,    0,   49,   14,    0,   53,   54,
   55,   56,   50,   69,    0,   57,   57,    0,   52,    0,
   57,    0,   57,   14,    0,   53,   54,   55,   56,   43,
   43,   43,   43,    0,    0,   43,   43,    0,   43,   43,
   43,   43,   43,   43,    0,    0,   43,   43,    0,    0,
    0,   43,    0,   43,   84,   84,   84,   84,    0,    0,
   84,   84,    0,   84,   84,   84,   84,   84,   84,    0,
    0,   84,   84,    0,    0,    0,   84,    0,   84,   92,
   93,   94,   95,    0,    0,   96,   97,    0,   98,   99,
  100,  101,  102,  103,    0,   92,   93,   94,   95,    0,
    0,   96,   97,  149,   98,   99,  100,  101,  102,  103,
    0,    0,   92,   93,   94,   95,    0,  122,   96,   97,
    0,   98,   99,  100,  101,  102,  103,    0,    0,   43,
   43,   43,   43,   39,  125,   43,   43,    0,   43,   43,
   43,   43,   43,   43,    0,    0,   43,   46,   46,   46,
   46,   40,    0,   46,   46,    0,   46,   46,   46,   46,
   46,   46,    0,    0,   46,   43,   43,   43,   43,   86,
    0,   43,   43,    0,   43,   43,   43,   43,   43,   43,
    0,    0,   43,   92,   93,   94,   95,    0,    0,   96,
   97,    0,   98,   99,  100,  101,  102,  103,    0,    0,
  104,   92,   93,   94,   95,    0,    0,   96,   97,    0,
   98,   99,  100,  101,  102,  103,  105,    0,  106,    0,
    0,    0,    0,    0,    0,  107,  108,  109,  110,  111,
  112,   62,   62,    0,    0,    0,   62,    0,   62,
};
static const YYINT yycheck[] = {                         26,
    0,   20,   33,  297,  289,   32,  122,    0,  293,   28,
   10,  289,  292,   32,   33,  293,   16,   10,  290,  289,
   47,   48,   12,  293,  292,   52,  294,  288,  289,   19,
   20,   50,  293,  292,  295,  294,   67,   27,   28,  155,
  293,   68,   32,   33,  288,  289,   46,  289,   67,  293,
  288,  295,  290,   80,  297,  298,  288,  289,  292,   49,
   50,  293,  291,  295,   91,   92,   93,   94,   95,   96,
   97,   98,   99,  100,  101,  102,  103,   67,  294,   69,
  288,  257,  258,  259,  260,  261,  262,  288,  275,  116,
  279,  291,  257,  258,  259,  260,  261,  262,  279,  257,
  258,  259,  260,  261,  262,  288,  289,  272,  288,  289,
  293,  286,  295,  293,  279,  295,  116,  293,  288,  289,
  288,  286,  287,  293,  290,  295,  153,  292,  293,  265,
    0,  307,  297,  288,  299,  300,  301,  302,  275,    0,
  293,  288,  307,  257,  258,  259,  260,  261,  262,  307,
  264,   46,   23,  288,  288,  269,  257,  258,  259,  260,
  261,  262,   28,  264,  288,  289,   33,   32,  269,  293,
   23,  295,   80,  287,   -1,   -1,  290,  291,   -1,   -1,
  288,  289,   -1,  297,   -1,  293,  287,  295,   -1,  290,
  291,   -1,   -1,  307,   -1,   -1,  297,  257,  258,  259,
  260,  261,  262,   -1,  264,   -1,  307,   -1,   -1,  269,
  257,  258,  259,  260,  261,  262,   -1,  264,  257,  258,
  259,  260,  261,  262,   -1,  264,   -1,  287,   -1,   -1,
  290,  291,   -1,   -1,  288,  289,   -1,  297,   -1,  293,
  287,  295,   -1,  290,  291,   -1,   -1,  307,  287,   -1,
  297,  290,  291,  270,   -1,  272,   -1,   -1,  297,   -1,
  307,   80,  279,   -1,   -1,   -1,  288,  289,  307,  286,
  287,  293,   -1,  295,   -1,  292,   -1,   -1,   -1,   -1,
  297,  298,  299,  300,  301,  302,  105,  106,  107,  108,
  109,  110,  111,  112,  272,   -1,   -1,  288,  289,   -1,
   -1,  279,  293,   -1,  295,  288,  289,   -1,  286,  287,
  293,  272,  295,   -1,  292,  293,   -1,   -1,  279,  297,
   -1,  299,  300,  301,  302,  286,  287,   -1,  272,   -1,
   -1,  292,   -1,   -1,   -1,  279,  297,   -1,  299,  300,
  301,  302,  286,  287,   -1,  288,  289,   -1,  292,   -1,
  293,   -1,  295,  297,   -1,  299,  300,  301,  302,  271,
  272,  273,  274,   -1,   -1,  277,  278,   -1,  280,  281,
  282,  283,  284,  285,   -1,   -1,  288,  289,   -1,   -1,
   -1,  293,   -1,  295,  271,  272,  273,  274,   -1,   -1,
  277,  278,   -1,  280,  281,  282,  283,  284,  285,   -1,
   -1,  288,  289,   -1,   -1,   -1,  293,   -1,  295,  271,
  272,  273,  274,   -1,   -1,  277,  278,   -1,  280,  281,
  282,  283,  284,  285,   -1,  271,  272,  273,  274,   -1,
   -1,  277,  278,  295,  280,  281,  282,  283,  284,  285,
   -1,   -1,  271,  272,  273,  274,   -1,  293,  277,  278,
   -1,  280,  281,  282,  283,  284,  285,   -1,   -1,  271,
  272,  273,  274,  275,  293,  277,  278,   -1,  280,  281,
  282,  283,  284,  285,   -1,   -1,  288,  271,  272,  273,
  274,  275,   -1,  277,  278,   -1,  280,  281,  282,  283,
  284,  285,   -1,   -1,  288,  271,  272,  273,  274,  275,
   -1,  277,  278,   -1,  280,  281,  282,  283,  284,  285,
   -1,   -1,  288,  271,  272,  273,  274,   -1,   -1,  277,
  278,   -1,  280,  281,  282,  283,  284,  285,   -1,   -1,
  288,  271,  272,  273,  274,   -1,   -1,  277,  278,   -1,
  280,  281,  282,  283,  284,  285,  271,   -1,  273,   -1,
   -1,   -1,   -1,   -1,   -1,  280,  281,  282,  283,  284,
  285,  288,  289,   -1,   -1,   -1,  293,   -1,  295,
};
#define YYFINAL 8
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 307
#define YYUNDFTOKEN 337
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
"KEY_VOID","KEY_INT","KEY_STRING","KEY_INTP","KEY_CHAPARAN_C","KEY_IF",
"KEY_ELSE","KEY_WHILE","KEY_DO","KEY_FOR","KEY_RETURN","KEY_NULL","OP_AND",
"OP_NOT","OP_OR","OP_DIV","ASSIGN","OP_MINUS","OP_PLUS","OP_MULTI","OP_ABS",
"OP_EQ","OP_GE","OP_GT","OP_LE","OP_LT","OP_NE","OP_ADDRESS_OF",
"OP_DEREFERENCE","SEMICOLON","COMMA","BRA_O","BRA_C","PARAN_O","PARAN_C",
"SQ_BRA_O","SQ_BRA_C","NULL_LITERAL","IDENTIFIER","STRING_LITERAL",
"CHAR_LITERAL","TRUE_LITERAL","FALSE_LITERAL","INTEGER_LITERAL","HEX_LITERAL",
"OCTA_LITERAL","BINARY_LITERAL","APOSTROPHE","KEY_CHARP",0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : S",
"S : PROGRAM",
"PROGRAM : MULTI_PROC",
"MULTI_PROC : MULTI_PROC PROC",
"MULTI_PROC : PROC",
"PROC : PROCEDURE ID PARAN_O MULT_PARAMS PARAN_C BLOCK_W_RETURN",
"PROC : PROCEDURE ID PARAN_O PARAN_C BLOCK_W_RETURN",
"PROC : PROCEDURE ID PARAN_O MULT_PARAMS PARAN_C BLOCK_W",
"PROC : PROCEDURE ID PARAN_O PARAN_C BLOCK_W",
"PROCEDURE : KEY_BOOLEAN",
"PROCEDURE : KEY_CHAR",
"PROCEDURE : KEY_CHARP",
"PROCEDURE : KEY_INT",
"PROCEDURE : KEY_INTP",
"PROCEDURE : KEY_STRING",
"PROCEDURE : KEY_VOID",
"MULT_PARAMS : PROCEDURE ID COMMA MULT_PARAMS",
"MULT_PARAMS : PROCEDURE ID",
"BLOCK_W : BRA_O MULT_STATEMENT BRA_C",
"BLOCK_W : BRA_O BRA_C",
"BLOCK_W_RETURN : BRA_O MULT_STATEMENT RETURN_STATEMENT BRA_C",
"BLOCK_W_RETURN : BRA_O RETURN_STATEMENT BRA_C",
"MULT_STATEMENT : MULT_STATEMENT STATEMENT",
"MULT_STATEMENT : STATEMENT",
"STATEMENT : ASSIGNMENT SEMICOLON",
"STATEMENT : VARS SEMICOLON",
"STATEMENT : COND",
"STATEMENT : WHILE_STATEMENT",
"STATEMENT : BLOCK",
"STATEMENT : PROC",
"RETURN_STATEMENT : KEY_RETURN EXP SEMICOLON",
"WHILE_STATEMENT :",
"PROC :",
"VARS : PROCEDURE EXP",
"VARS : PROCEDURE ASSIGNMENT",
"ASSIGNMENT : LHS ASSIGN EXP",
"ASSIGNMENT : LHS ASSIGN STR",
"ASSIGNMENT : LHS ASSIGN PTR",
"ASSIGNMENT : LHS ASSIGN KEY_NULL",
"LHS : ID",
"LHS : STR_INDEX",
"LHS : DEREF",
"STR_INDEX : ID SQ_BRA_O EXP SQ_BRA_C",
"EXP : ID",
"EXP : INTEGER_LITERAL",
"EXP : CHAR_LITERAL",
"EXP : STR_INDEX",
"EXP : BOOL_TYPE",
"EXP : OP_DEREFERENCE EXP",
"EXP : PROC_CALL",
"EXP : PAR_EXP",
"EXP : SIZE_OF",
"EXP : OP_NOT EXP",
"EXP : EXP OP_PLUS EXP",
"EXP : EXP OP_NOT EXP",
"EXP : EXP OP_MULTI EXP",
"EXP : EXP OP_DIV EXP",
"EXP : EXP OP_LT EXP",
"EXP : EXP OP_GT EXP",
"EXP : EXP OP_LE EXP",
"EXP : EXP OP_GE EXP",
"EXP : EXP OP_EQ EXP",
"EXP : EXP OP_NE EXP",
"EXP : EXP OP_AND EXP",
"EXP : EXP OP_OR EXP",
"EXP : PTR OP_LT PTR",
"EXP : PTR OP_GT PTR",
"EXP : PTR OP_LE PTR",
"EXP : PTR OP_GE PTR",
"EXP : PTR OP_EQ PTR",
"EXP : PTR OP_NE PTR",
"EXP : PTR OP_AND PTR",
"EXP : PTR OP_OR PTR",
"BLOCK : BRA_O MULT_STATEMENT BRA_C",
"BLOCK : BRA_O BRA_C",
"COND : KEY_IF PARAN_O EXP PARAN_C BLOCK",
"COND : KEY_IF PARAN_O EXP PARAN_C BLOCK KEY_ELSE BLOCK",
"BOOL_TYPE : TRUE_LITERAL",
"BOOL_TYPE : FALSE_LITERAL",
"PROC_CALL : ID PARAN_O MULT_EXP PARAN_C SEMICOLON",
"PROC_CALL : ID PARAN_O PARAN_C SEMICOLON",
"PAR_EXP : PARAN_O EXP PARAN_C",
"SIZE_OF : OP_ABS ID OP_ABS",
"SIZE_OF : OP_ABS STR OP_ABS",
"PTR : OP_ADDRESS_OF ID",
"PTR : OP_ADDRESS_OF STR_INDEX",
"DEREF : OP_DEREFERENCE ID",
"MULT_EXP : MULT_EXP COMMA EXP",
"MULT_EXP : EXP",
"STR : STRING_LITERAL",
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
#line 212 "parser.y"


#include "lex.yy.c"
main(){

    //print_ast(ourProgram);

    return yyparse();
}

void yyerror(const char *c){
	fprintf(stderr,"line %d: %s\n",yylineno - 1,c);
	
}


#line 511 "y.tab.c"

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
#line 55 "parser.y"
	{printPreOrder(yystack.l_mark[0].n,0);}
break;
case 2:
#line 57 "parser.y"
	{yyval.n=makeNode("Begin:",yystack.l_mark[0].n,NULL);}
break;
case 3:
#line 59 "parser.y"
	{ yyval.n = makeNode("", yystack.l_mark[-1].n, yystack.l_mark[0].n); }
break;
case 4:
#line 60 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 5:
#line 63 "parser.y"
	{
                                                                node* dec_proc = makeNode(yystack.l_mark[-5].n->token, yystack.l_mark[-4].n, yystack.l_mark[-2].n);
                                                                node* block_proc = makeNode("",NULL, yystack.l_mark[0].n);
                                                                yyval.n = makeNode("",dec_proc,block_proc);
                                                                }
break;
case 6:
#line 69 "parser.y"
	{
                                                        node* dec_proc = makeNode("", yystack.l_mark[-3].n, NULL);
                                                        node* block_proc = makeNode("", NULL, yystack.l_mark[0].n);
                                                        yyval.n = makeNode("",dec_proc,block_proc);
                                                        }
break;
case 7:
#line 75 "parser.y"
	{yyval.n = makeNode("",yystack.l_mark[-4].n,yystack.l_mark[-2].n);}
break;
case 8:
#line 77 "parser.y"
	{yyval.n = makeNode("",yystack.l_mark[-3].n,yystack.l_mark[0].n);}
break;
case 9:
#line 79 "parser.y"
	{ yyval.n=makeNode("boolean",NULL,NULL); }
break;
case 10:
#line 80 "parser.y"
	{ yyval.n=makeNode("char",NULL,NULL); }
break;
case 11:
#line 81 "parser.y"
	{ yyval.n=makeNode("charp",NULL,NULL); }
break;
case 12:
#line 82 "parser.y"
	{ yyval.n=makeNode("int",NULL,NULL); }
break;
case 13:
#line 83 "parser.y"
	{ yyval.n=makeNode("intp",NULL,NULL); }
break;
case 14:
#line 84 "parser.y"
	{ yyval.n=makeNode("string",NULL,NULL); }
break;
case 15:
#line 85 "parser.y"
	{ yyval.n=makeNode("void",NULL,NULL); }
break;
case 16:
#line 90 "parser.y"
	{
                                        node* l = makeNode(yystack.l_mark[-3].n->token, yystack.l_mark[-2].n, NULL);
                                        node* r = makeNode(",", yystack.l_mark[0].n,NULL );
                                        yyval.n = makeNode("",l,r);
                                        }
break;
case 17:
#line 95 "parser.y"
	{yyval.n=makeNode(yystack.l_mark[-1].n->token,yystack.l_mark[0].n,NULL);}
break;
case 18:
#line 97 "parser.y"
	{yyval.n = makeNode("",yystack.l_mark[-1].n,NULL);}
break;
case 19:
#line 98 "parser.y"
	{}
break;
case 20:
#line 101 "parser.y"
	{yyval.n = makeNode("",yystack.l_mark[-2].n,yystack.l_mark[-1].n);}
break;
case 21:
#line 102 "parser.y"
	{yyval.n = yystack.l_mark[-1].n;}
break;
case 22:
#line 105 "parser.y"
	{ yyval.n = makeNode("", yystack.l_mark[-1].n,yystack.l_mark[0].n); }
break;
case 23:
#line 106 "parser.y"
	{ yyval.n = yystack.l_mark[0].n ; }
break;
case 24:
#line 108 "parser.y"
	{ yyval.n = makeNode("", yystack.l_mark[-1].n, NULL); }
break;
case 25:
#line 109 "parser.y"
	{ yyval.n = yystack.l_mark[-1].n; }
break;
case 26:
#line 110 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 27:
#line 111 "parser.y"
	{ yyval.n = makeNode("", yystack.l_mark[0].n, NULL); }
break;
case 28:
#line 112 "parser.y"
	{ yyval.n = makeNode("", yystack.l_mark[0].n, NULL); }
break;
case 29:
#line 113 "parser.y"
	{ yyval.n = makeNode("", yystack.l_mark[0].n, NULL); }
break;
case 30:
#line 116 "parser.y"
	{ yyval.n = makeNode("return",yystack.l_mark[-1].n,NULL); }
break;
case 31:
#line 119 "parser.y"
	{ yyval.n = makeNode("",NULL,NULL); }
break;
case 32:
#line 120 "parser.y"
	{ yyval.n = makeNode("",NULL,NULL); }
break;
case 33:
#line 122 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-1].n->token,yystack.l_mark[0].n,NULL); }
break;
case 34:
#line 123 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 35:
#line 126 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-2].n, yystack.l_mark[0].n); }
break;
case 36:
#line 127 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-2].n, yystack.l_mark[0].n);}
break;
case 37:
#line 128 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-2].n, yystack.l_mark[0].n);}
break;
case 38:
#line 129 "parser.y"
	{yyval.n = makeNode("=", yystack.l_mark[-2].n, makeNode("NULL POINTER",NULL,NULL)); }
break;
case 39:
#line 133 "parser.y"
	{ yyval.n = makeNode("", yystack.l_mark[0].n, NULL); }
break;
case 40:
#line 134 "parser.y"
	{ yyval.n = makeNode("", yystack.l_mark[0].n, NULL); }
break;
case 41:
#line 135 "parser.y"
	{ yyval.n = makeNode("", yystack.l_mark[0].n, NULL); }
break;
case 42:
#line 138 "parser.y"
	{ yyval.n = makeNode("STRING INDEX", yystack.l_mark[-3].n, yystack.l_mark[-1].n) ;}
break;
case 43:
#line 140 "parser.y"
	{ printf("\n\n%s\n\n",yytext);yyval.n = makeNode(yytext, yystack.l_mark[0].n, NULL); }
break;
case 44:
#line 141 "parser.y"
	{ yyval.n = makeNode(yytext, yystack.l_mark[0].num, NULL); }
break;
case 45:
#line 142 "parser.y"
	{ yyval.n = makeNode(yytext, yystack.l_mark[0].ch, NULL); }
break;
case 46:
#line 143 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 47:
#line 144 "parser.y"
	{ yyval.n = makeNode("BOOLEAN", yystack.l_mark[0].n, NULL); }
break;
case 48:
#line 145 "parser.y"
	{ yyval.n = makeNode("DEREFERENCE", yystack.l_mark[0].n, NULL); }
break;
case 49:
#line 146 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 50:
#line 147 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 51:
#line 148 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 52:
#line 149 "parser.y"
	{ yyval.n = makeNode("!", yystack.l_mark[0].n, NULL); }
break;
case 53:
#line 150 "parser.y"
	{ yyval.n = makeNode("+",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 54:
#line 151 "parser.y"
	{ yyval.n = makeNode("-",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 55:
#line 152 "parser.y"
	{ yyval.n = makeNode("*",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 56:
#line 153 "parser.y"
	{ yyval.n = makeNode("/",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 57:
#line 154 "parser.y"
	{ yyval.n = makeNode("<",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 58:
#line 155 "parser.y"
	{ yyval.n = makeNode(">",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 59:
#line 156 "parser.y"
	{ yyval.n = makeNode("<=",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 60:
#line 157 "parser.y"
	{ yyval.n = makeNode(">=",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 61:
#line 158 "parser.y"
	{ yyval.n = makeNode("==",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 62:
#line 159 "parser.y"
	{ yyval.n = makeNode("!=",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 63:
#line 160 "parser.y"
	{ yyval.n = makeNode("&&",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 64:
#line 161 "parser.y"
	{ yyval.n = makeNode("||",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 65:
#line 162 "parser.y"
	{ yyval.n = makeNode("<",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 66:
#line 163 "parser.y"
	{ yyval.n = makeNode(">",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 67:
#line 164 "parser.y"
	{ yyval.n = makeNode("<=",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 68:
#line 165 "parser.y"
	{ yyval.n = makeNode(">=",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 69:
#line 166 "parser.y"
	{ yyval.n = makeNode("==",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 70:
#line 167 "parser.y"
	{ yyval.n = makeNode("!=",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 71:
#line 168 "parser.y"
	{ yyval.n = makeNode("&&",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 72:
#line 169 "parser.y"
	{ yyval.n = makeNode("||",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 73:
#line 173 "parser.y"
	{yyval.n = yystack.l_mark[-1].n;}
break;
case 74:
#line 174 "parser.y"
	{yyval.n = makeNode("{}",NULL,NULL);}
break;
case 75:
#line 177 "parser.y"
	{yyval.n = makeNode("if",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 76:
#line 178 "parser.y"
	{ yyval.n = makeNode("if", yystack.l_mark[-4].n, makeNode("else", yystack.l_mark[-2].n, yystack.l_mark[0].n));}
break;
case 77:
#line 181 "parser.y"
	{ yyval.n = makeNode("true", NULL, NULL); }
break;
case 78:
#line 182 "parser.y"
	{ yyval.n = makeNode("false", NULL, NULL); }
break;
case 79:
#line 185 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-4].n->token,yystack.l_mark[-4].n, yystack.l_mark[-2].n); }
break;
case 80:
#line 186 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-3].n->token,yystack.l_mark[-3].n, NULL); }
break;
case 81:
#line 189 "parser.y"
	{ yyval.n = makeNode("",yystack.l_mark[-1].n,NULL); }
break;
case 82:
#line 192 "parser.y"
	{ yyval.n = makeNode("ABS",yystack.l_mark[-1].n,NULL); }
break;
case 83:
#line 193 "parser.y"
	{ yyval.n = makeNode("ABS",yystack.l_mark[-1].n,NULL); }
break;
case 84:
#line 196 "parser.y"
	{ yyval.n = makeNode("&", yystack.l_mark[0].n, NULL); }
break;
case 85:
#line 197 "parser.y"
	{ yyval.n = makeNode("&", yystack.l_mark[0].n, NULL); }
break;
case 86:
#line 200 "parser.y"
	{ yyval.n = makeNode("^", yystack.l_mark[0].n, NULL); }
break;
case 87:
#line 203 "parser.y"
	{ yyval.n = makeNode(""/*Multiple Expressions*/,yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 88:
#line 204 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 89:
#line 207 "parser.y"
	{ yyval.n = makeNode(yytext,NULL,NULL); }
break;
case 90:
#line 210 "parser.y"
	{yyval.n=makeNode(yystack.l_mark[0].str,NULL,NULL);}
break;
#line 1085 "y.tab.c"
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

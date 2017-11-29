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
    0,    1,    2,    2,    3,    3,    7,    7,    7,    7,
    7,    7,    7,    5,    5,    6,    6,    8,    8,   10,
   10,   10,   10,   10,   10,    9,   11,   12,   13,   14,
    3,   15,   15,   15,   15,   16,   16,   16,   20,   17,
   17,   17,   17,   17,   17,   17,   17,   17,   17,   17,
   17,   17,   17,   17,   17,   17,   17,   17,   17,   17,
   17,   17,   17,   17,   17,   17,   17,   17,   17,   22,
   22,   23,   23,   24,   25,   25,   19,   19,   21,   26,
   26,   18,    4,
};
static const YYINT yylen[] = {                            2,
    1,    1,    2,    1,    6,    5,    1,    1,    1,    1,
    1,    1,    1,    4,    2,    4,    4,    2,    1,    2,
    2,    1,    1,    1,    1,    2,    0,    0,    0,    0,
    0,    3,    3,    3,    3,    1,    1,    1,    4,    1,
    1,    1,    1,    1,    2,    1,    1,    1,    2,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    1,
    1,    5,    4,    3,    3,    3,    2,    2,    2,    3,
    1,    1,    1,
};
static const YYINT yydefred[] = {                         0,
    7,    8,   13,   10,   12,   11,    9,    0,    1,    0,
    4,    0,    3,   83,    0,    0,    0,    0,    0,    0,
    6,    0,    0,    0,    0,   25,    0,    0,    0,   19,
    0,   22,   23,   24,    0,    0,   37,   38,    5,    0,
    0,    0,    0,    0,    0,   42,   70,   71,   41,    0,
    0,    0,   43,   44,   46,   47,   48,   79,    0,    0,
   18,    0,   21,   20,    0,   14,    0,   82,    0,    0,
    0,   78,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   16,   17,   35,    0,
   33,    0,   75,   76,   74,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   68,   69,   66,   65,   63,   64,   62,   67,   39,   73,
    0,    0,    0,   72,
};
static const YYINT yydgoto[] = {                          8,
    9,   10,   26,   50,   18,   21,   12,   28,   29,   30,
   31,   32,   33,   34,   35,   36,   51,   70,   52,   53,
   38,   54,   55,   56,   57,  108,
};
static const YYINT yysindex[] = {                      -252,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -252,
    0, -295,    0,    0, -278, -232, -268, -240, -295, -210,
    0, -268, -222, -155, -295,    0, -225, -210, -215,    0,
 -209,    0,    0,    0, -208, -203,    0,    0,    0, -252,
 -155, -266, -295, -155, -155,    0,    0,    0,    0, -271,
  -31,  -16,    0,    0,    0,    0,    0,    0, -155, -213,
    0, -200,    0,    0, -216,    0,  -31,    0, -187, -186,
 -225,    0,  -31,  -48, -172, -155, -155, -155, -155, -155,
 -155, -155, -155, -155, -155, -155, -155, -192, -192, -192,
 -192, -192, -192, -192, -192,  -64,    0,    0,    0,  -31,
    0,  -16,    0,    0,    0, -190,  -31, -273,  -31,  -31,
  -31,  -31,  -31,  -31,  -31,  -31,  -31,  -31,  -31,  -31,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -155, -189,  -31,    0,
};
static const YYINT yyrindex[] = {                       102,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  103,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -179,
    0,    0, -182,    0,    0,    0, -162, -179,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -114,
 -223,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -276,    0,    0,    0,
  -89,    0, -183,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -166,
    0, -165,    0,    0,    0,    0, -231,    0,  -18,  -10,
   -2,    6,   14,   22,   30,   38,   47,   55,   63,   71,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -229,    0,
};
static const YYINT yygindex[] = {                         0,
    0,    0,    1,   76,   93,   94,   17,    0,  106,  107,
    0,    0,    0,    0,    0,    0,  -41,   73,   61,   46,
    0,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 366
static const YYINT yytable[] = {                         67,
   11,   14,   73,   74,    1,    2,    3,    4,    5,    6,
   13,   49,   49,   16,   49,  131,   49,   96,   49,  132,
   75,   20,   59,  100,    1,    2,    3,    4,    5,    6,
   14,   68,   19,  107,  109,  110,  111,  112,  113,  114,
  115,  116,  117,  118,  119,  120,    1,    2,    3,    4,
    5,    6,   22,   99,    7,   41,   19,   81,   24,   80,
   17,   81,   42,   80,   26,   37,   40,   26,   59,   43,
   44,   65,   62,   37,    7,   45,   25,   97,   63,   64,
   14,   68,   46,   47,   48,   49,   14,   15,   72,  133,
   98,  103,  104,   43,   23,   27,    7,  130,  134,   41,
   58,   31,    2,   27,   45,   45,   42,   45,   27,   45,
   15,   45,   36,   43,   44,   39,   41,   69,   71,   45,
  106,   32,   34,   42,   14,  102,   46,   47,   48,   49,
   43,   44,   66,   60,   61,    0,   45,  101,    0,    0,
    0,   14,    0,   46,   47,   48,   49,    0,  121,  122,
  123,  124,  125,  126,  127,  128,   40,   40,   40,   40,
    0,    0,   40,   40,    0,   40,   40,   40,   40,   40,
   40,    0,    0,   40,   40,    0,   40,    0,   40,    0,
   40,   77,   77,   77,   77,    0,    0,   77,   77,    0,
   77,   77,   77,   77,   77,   77,    0,    0,   77,   77,
    0,   77,    0,   77,    0,   77,   76,   77,   78,   79,
    0,    0,   80,   81,    0,   82,   83,   84,   85,   86,
   87,    0,   76,   77,   78,   79,    0,    0,   80,   81,
  129,   82,   83,   84,   85,   86,   87,    0,    0,   76,
   77,   78,   79,    0,  105,   80,   81,    0,   82,   83,
   84,   85,   86,   87,   88,    0,   89,    0,    0,    0,
    0,    0,    0,   90,   91,   92,   93,   94,   95,   60,
   60,    0,   60,    0,   60,    0,   60,   51,   51,    0,
   51,    0,   51,    0,   51,   61,   61,    0,   61,    0,
   61,    0,   61,   53,   53,    0,   53,    0,   53,    0,
   53,   50,   50,    0,   50,    0,   50,    0,   50,   52,
   52,    0,   52,    0,   52,    0,   52,   58,   58,    0,
   58,    0,   58,    0,   58,   57,   57,    0,   57,    0,
   57,    0,   57,    0,   55,   55,    0,   55,    0,   55,
    0,   55,   56,   56,    0,   56,    0,   56,    0,   56,
   54,   54,    0,   54,    0,   54,    0,   54,   59,   59,
    0,   59,    0,   59,    0,   59,
};
static const YYINT yycheck[] = {                         41,
    0,  297,   44,   45,  257,  258,  259,  260,  261,  262,
   10,  288,  289,  292,  291,  289,  293,   59,  295,  293,
  292,  290,  294,   65,  257,  258,  259,  260,  261,  262,
  297,  298,   16,   75,   76,   77,   78,   79,   80,   81,
   82,   83,   84,   85,   86,   87,  257,  258,  259,  260,
  261,  262,  293,  270,  307,  272,   40,  289,  269,  289,
  293,  293,  279,  293,  288,   20,  289,  291,  294,  286,
  287,  275,  288,   28,  307,  292,  287,  291,  288,  288,
  297,  298,  299,  300,  301,  302,  297,   12,   43,  131,
  291,  279,  279,  286,   19,   20,  307,  288,  288,  272,
   25,    0,    0,   28,  288,  289,  279,  291,  288,  293,
  293,  295,  275,  286,  287,   22,  272,   42,   43,  292,
  293,  288,  288,  279,  297,   65,  299,  300,  301,  302,
  286,  287,   40,   28,   28,   -1,  292,   65,   -1,   -1,
   -1,  297,   -1,  299,  300,  301,  302,   -1,   88,   89,
   90,   91,   92,   93,   94,   95,  271,  272,  273,  274,
   -1,   -1,  277,  278,   -1,  280,  281,  282,  283,  284,
  285,   -1,   -1,  288,  289,   -1,  291,   -1,  293,   -1,
  295,  271,  272,  273,  274,   -1,   -1,  277,  278,   -1,
  280,  281,  282,  283,  284,  285,   -1,   -1,  288,  289,
   -1,  291,   -1,  293,   -1,  295,  271,  272,  273,  274,
   -1,   -1,  277,  278,   -1,  280,  281,  282,  283,  284,
  285,   -1,  271,  272,  273,  274,   -1,   -1,  277,  278,
  295,  280,  281,  282,  283,  284,  285,   -1,   -1,  271,
  272,  273,  274,   -1,  293,  277,  278,   -1,  280,  281,
  282,  283,  284,  285,  271,   -1,  273,   -1,   -1,   -1,
   -1,   -1,   -1,  280,  281,  282,  283,  284,  285,  288,
  289,   -1,  291,   -1,  293,   -1,  295,  288,  289,   -1,
  291,   -1,  293,   -1,  295,  288,  289,   -1,  291,   -1,
  293,   -1,  295,  288,  289,   -1,  291,   -1,  293,   -1,
  295,  288,  289,   -1,  291,   -1,  293,   -1,  295,  288,
  289,   -1,  291,   -1,  293,   -1,  295,  288,  289,   -1,
  291,   -1,  293,   -1,  295,  288,  289,   -1,  291,   -1,
  293,   -1,  295,   -1,  288,  289,   -1,  291,   -1,  293,
   -1,  295,  288,  289,   -1,  291,   -1,  293,   -1,  295,
  288,  289,   -1,  291,   -1,  293,   -1,  295,  288,  289,
   -1,  291,   -1,  293,   -1,  295,
};
#define YYFINAL 8
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 307
#define YYUNDFTOKEN 336
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
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
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
"BLOCK_W_RETURN : BRA_O MULT_STATEMENT RETURN_STATEMENT BRA_C",
"BLOCK_W_RETURN : BRA_O RETURN_STATEMENT SEMICOLON BRA_C",
"MULT_STATEMENT : MULT_STATEMENT STATEMENT",
"MULT_STATEMENT : STATEMENT",
"STATEMENT : ASSIGNMENT SEMICOLON",
"STATEMENT : VARS SEMICOLON",
"STATEMENT : COND",
"STATEMENT : WHILE_STATEMENT",
"STATEMENT : BLOCK",
"STATEMENT : PROC",
"RETURN_STATEMENT : KEY_RETURN EXP",
"VARS :",
"COND :",
"WHILE_STATEMENT :",
"BLOCK :",
"PROC :",
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
#line 196 "parser.y"


#include "lex.yy.c"
main(){

    //print_ast(ourProgram);

    return yyparse();
}

void yyerror(const char *c){
	fprintf(stderr,"line %d: %s\n",yylineno - 1,c);
	
}


#line 458 "y.tab.c"

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
#line 68 "parser.y"
	{
                                                        node* dec_proc = makeNode("", yystack.l_mark[-3].n, NULL);
                                                        node* block_proc = makeNode("", NULL, yystack.l_mark[0].n);
                                                        yyval.n = makeNode("",dec_proc,block_proc);
                                                        }
break;
case 7:
#line 74 "parser.y"
	{ yyval.n=makeNode("boolean",NULL,NULL); }
break;
case 8:
#line 75 "parser.y"
	{ yyval.n=makeNode("char",NULL,NULL); }
break;
case 9:
#line 76 "parser.y"
	{ yyval.n=makeNode("charp",NULL,NULL); }
break;
case 10:
#line 77 "parser.y"
	{ yyval.n=makeNode("int",NULL,NULL); }
break;
case 11:
#line 78 "parser.y"
	{ yyval.n=makeNode("intp",NULL,NULL); }
break;
case 12:
#line 79 "parser.y"
	{ yyval.n=makeNode("string",NULL,NULL); }
break;
case 13:
#line 80 "parser.y"
	{ yyval.n=makeNode("void",NULL,NULL); }
break;
case 14:
#line 85 "parser.y"
	{
                                        node* l = makeNode(yystack.l_mark[-3].n->token, yystack.l_mark[-2].n, NULL);
                                        node* r = makeNode(",", yystack.l_mark[0].n,NULL );
                                        yyval.n = makeNode("",l,r);
                                        }
break;
case 15:
#line 90 "parser.y"
	{yyval.n=makeNode(yystack.l_mark[-1].n->token,yystack.l_mark[0].n,NULL);}
break;
case 16:
#line 93 "parser.y"
	{yyval.n = makeNode("",yystack.l_mark[-2].n,yystack.l_mark[-1].n);}
break;
case 17:
#line 94 "parser.y"
	{yyval.n = makeNode("",NULL,yystack.l_mark[-2].n);}
break;
case 18:
#line 97 "parser.y"
	{ yyval.n = makeNode("", yystack.l_mark[-1].n,yystack.l_mark[0].n); }
break;
case 19:
#line 98 "parser.y"
	{ yyval.n = yystack.l_mark[0].n ; }
break;
case 20:
#line 100 "parser.y"
	{ yyval.n = makeNode("STATEMENT", yystack.l_mark[-1].n, NULL); }
break;
case 21:
#line 101 "parser.y"
	{ yyval.n = makeNode("STATEMENT", yystack.l_mark[-1].n, NULL); }
break;
case 22:
#line 102 "parser.y"
	{ yyval.n = makeNode("STATEMENT", yystack.l_mark[0].n, NULL); }
break;
case 23:
#line 103 "parser.y"
	{ yyval.n = makeNode("STATEMENT", yystack.l_mark[0].n, NULL); }
break;
case 24:
#line 104 "parser.y"
	{ yyval.n = makeNode("STATEMENT", yystack.l_mark[0].n, NULL); }
break;
case 25:
#line 105 "parser.y"
	{ yyval.n = makeNode("STATEMENT", yystack.l_mark[0].n, NULL); }
break;
case 26:
#line 108 "parser.y"
	{ yyval.n = makeNode("return",yystack.l_mark[0].n,NULL); }
break;
case 27:
#line 111 "parser.y"
	{ yyval.n = makeNode("",NULL,NULL); }
break;
case 28:
#line 112 "parser.y"
	{ yyval.n = makeNode("",NULL,NULL); }
break;
case 29:
#line 113 "parser.y"
	{ yyval.n = makeNode("",NULL,NULL); }
break;
case 30:
#line 114 "parser.y"
	{ yyval.n = makeNode("",NULL,NULL); }
break;
case 31:
#line 115 "parser.y"
	{ yyval.n = makeNode("",NULL,NULL); }
break;
case 32:
#line 118 "parser.y"
	{ yyval.n = makeNode("ASSIGNMENT", yystack.l_mark[-2].n, yystack.l_mark[0].n); }
break;
case 33:
#line 119 "parser.y"
	{ yyval.n = makeNode("STRING ASSIGNMENT", yystack.l_mark[-2].n, yystack.l_mark[0].n);}
break;
case 34:
#line 120 "parser.y"
	{ yyval.n = makeNode("POINTER ASSIGNMENT", yystack.l_mark[-2].n, yystack.l_mark[0].n);}
break;
case 35:
#line 121 "parser.y"
	{yyval.n = makeNode("NULL POINTER ASSIGNMENT", yystack.l_mark[-2].n, makeNode("NULL POINTER",NULL,NULL)); }
break;
case 36:
#line 125 "parser.y"
	{ yyval.n = makeNode("ASSIGNMENT TARGET: VARIABLE", yystack.l_mark[0].n, NULL); }
break;
case 37:
#line 126 "parser.y"
	{ yyval.n = makeNode("ASSIGNMENT TARGET: STRING", yystack.l_mark[0].n, NULL); }
break;
case 38:
#line 127 "parser.y"
	{ yyval.n = makeNode("ASSIGNMENT TARGET: DEREFERENCE", yystack.l_mark[0].n, NULL); }
break;
case 39:
#line 130 "parser.y"
	{ yyval.n = makeNode("STRING INDEX", yystack.l_mark[-3].n, yystack.l_mark[-1].n) ;}
break;
case 40:
#line 132 "parser.y"
	{ yyval.n = makeNode(yytext, yystack.l_mark[0].n, NULL); }
break;
case 41:
#line 133 "parser.y"
	{ yyval.n = makeNode("INTEGER", yystack.l_mark[0].num, NULL); }
break;
case 42:
#line 134 "parser.y"
	{ yyval.n = makeNode(yytext, yystack.l_mark[0].ch, NULL); }
break;
case 43:
#line 135 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 44:
#line 136 "parser.y"
	{ yyval.n = makeNode("BOOLEAN", yystack.l_mark[0].n, NULL); }
break;
case 45:
#line 137 "parser.y"
	{ yyval.n = makeNode("DEREFERENCE", yystack.l_mark[0].n, NULL); }
break;
case 46:
#line 138 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 47:
#line 139 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 48:
#line 140 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 49:
#line 141 "parser.y"
	{ yyval.n = makeNode("!", yystack.l_mark[0].n, NULL); }
break;
case 50:
#line 142 "parser.y"
	{ yyval.n = makeNode("+",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 51:
#line 143 "parser.y"
	{ yyval.n = makeNode("-",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 52:
#line 144 "parser.y"
	{ yyval.n = makeNode("*",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 53:
#line 145 "parser.y"
	{ yyval.n = makeNode("/",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 54:
#line 146 "parser.y"
	{ yyval.n = makeNode("<",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 55:
#line 147 "parser.y"
	{ yyval.n = makeNode(">",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 56:
#line 148 "parser.y"
	{ yyval.n = makeNode("<=",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 57:
#line 149 "parser.y"
	{ yyval.n = makeNode(">=",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 58:
#line 150 "parser.y"
	{ yyval.n = makeNode("==",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 59:
#line 151 "parser.y"
	{ yyval.n = makeNode("!=",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 60:
#line 152 "parser.y"
	{ yyval.n = makeNode("&&",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 61:
#line 153 "parser.y"
	{ yyval.n = makeNode("||",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 62:
#line 154 "parser.y"
	{ yyval.n = makeNode("<",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 63:
#line 155 "parser.y"
	{ yyval.n = makeNode(">",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 64:
#line 156 "parser.y"
	{ yyval.n = makeNode("<=",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 65:
#line 157 "parser.y"
	{ yyval.n = makeNode(">=",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 66:
#line 158 "parser.y"
	{ yyval.n = makeNode("==",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 67:
#line 159 "parser.y"
	{ yyval.n = makeNode("!=",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 68:
#line 160 "parser.y"
	{ yyval.n = makeNode("&&",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 69:
#line 161 "parser.y"
	{ yyval.n = makeNode("||",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 70:
#line 165 "parser.y"
	{ yyval.n = makeNode("true", NULL, NULL); }
break;
case 71:
#line 166 "parser.y"
	{ yyval.n = makeNode("false", NULL, NULL); }
break;
case 72:
#line 169 "parser.y"
	{ yyval.n = makeNode("Procedure Call",yystack.l_mark[-4].n, yystack.l_mark[-2].n); }
break;
case 73:
#line 170 "parser.y"
	{ yyval.n = makeNode("Procedure Call No Params",yystack.l_mark[-3].n, NULL); }
break;
case 74:
#line 173 "parser.y"
	{ yyval.n = makeNode("PARANTHESES EXPRESSION",yystack.l_mark[-1].n,NULL); }
break;
case 75:
#line 176 "parser.y"
	{ yyval.n = makeNode("ABS",yystack.l_mark[-1].n,NULL); }
break;
case 76:
#line 177 "parser.y"
	{ yyval.n = makeNode("ABS",yystack.l_mark[-1].n,NULL); }
break;
case 77:
#line 180 "parser.y"
	{ yyval.n = makeNode("&", yystack.l_mark[0].n, NULL); }
break;
case 78:
#line 181 "parser.y"
	{ yyval.n = makeNode("&", yystack.l_mark[0].n, NULL); }
break;
case 79:
#line 184 "parser.y"
	{ yyval.n = makeNode("^", yystack.l_mark[0].n, NULL); }
break;
case 80:
#line 187 "parser.y"
	{ yyval.n = makeNode(""/*Multiple Expressions*/,yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 81:
#line 188 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 82:
#line 191 "parser.y"
	{ yyval.n = makeNode(yytext,NULL,NULL); }
break;
case 83:
#line 194 "parser.y"
	{yyval.n=makeNode(yytext,NULL,NULL);}
break;
#line 1004 "y.tab.c"
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

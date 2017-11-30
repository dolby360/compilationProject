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
   10,   10,   10,   10,   10,    9,   12,   13,   14,    3,
   11,   11,   15,   15,   15,   15,   16,   16,   16,   20,
   17,   17,   17,   17,   17,   17,   17,   17,   17,   17,
   17,   17,   17,   17,   17,   17,   17,   17,   17,   17,
   17,   17,   17,   17,   17,   17,   17,   17,   17,   17,
   22,   22,   23,   23,   24,   25,   25,   19,   19,   21,
   26,   26,   18,    4,
};
static const YYINT yylen[] = {                            2,
    1,    1,    2,    1,    6,    5,    1,    1,    1,    1,
    1,    1,    1,    4,    2,    4,    3,    2,    1,    2,
    2,    1,    1,    1,    1,    3,    0,    0,    0,    0,
    2,    2,    3,    3,    3,    3,    1,    1,    1,    4,
    1,    1,    1,    1,    1,    2,    1,    1,    1,    2,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    1,    1,    5,    4,    3,    3,    3,    2,    2,    2,
    3,    1,    1,    1,
};
static const YYINT yydefred[] = {                         0,
    7,    8,   13,   10,   12,   11,    9,    0,    1,    0,
    4,    0,    3,   84,    0,    0,    0,    0,    0,    0,
    6,    0,    0,    0,    0,   25,    0,    0,    0,    0,
   19,    0,   22,   23,   24,    0,    0,   38,   39,    5,
    0,    0,    0,    0,    0,    0,   43,   71,   72,   42,
    0,    0,    0,   44,   45,   47,   48,   49,   80,    0,
    0,    0,   32,    0,    0,    0,   18,   17,   21,   20,
    0,   14,    0,   83,    0,    0,    0,   79,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   26,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   16,   36,    0,   34,    0,
   76,   77,   75,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   69,   70,
   67,   66,   64,   65,   63,   68,   40,    0,   74,    0,
    0,    0,   73,
};
static const YYINT yydgoto[] = {                          8,
    9,   10,   26,   51,   18,   21,   19,   29,   30,   31,
   32,   33,   34,   35,   36,   37,   79,   76,   53,   54,
   39,   55,   56,   57,   58,  116,
};
static const YYINT yysindex[] = {                      -231,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -231,
    0, -264,    0,    0, -246, -209, -213, -211, -264, -252,
    0, -213, -199, -106, -264,    0, -214,  -89, -252, -197,
    0, -192,    0,    0,    0, -185, -184,    0,    0,    0,
 -231, -106, -295, -264, -106, -106,    0,    0,    0,    0,
 -260,   80,  113,    0,    0,    0,    0,    0,    0, -106,
 -106, -238,    0,   98,    0, -190,    0,    0,    0,    0,
 -147,    0,   98,    0, -175, -171, -214,    0,   98,    9,
 -123, -106, -106, -106, -106, -106, -106, -106, -106, -106,
 -106, -106, -106,    0, -177, -177, -177, -177, -177, -177,
 -177, -177,   -7, -260, -187,    0,    0,   98,    0,  113,
    0,    0,    0, -167,   98, -277,   98,   98,   98,   98,
   98,   98,   98,   98,   98,   98,   98,   98,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -265,    0, -106,
 -166,   98,    0,
};
static const YYINT yyrindex[] = {                       131,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  135,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -160,    0,    0,    0, -138,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -57,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   26,    0, -150,   44,    0,    0,    0,    0,    0,
    0,    0, -274,    0,    0,    0,  -32,    0, -200,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   62,    0,    0,    0, -144,    0, -142,
    0,    0,    0,    0, -269,    0, -159,  -88,  111,  114,
  122,  125,  133,  136,  144,  147,  155,  158,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -210,    0,
};
static const YYINT yygindex[] = {                         0,
    0,    0,    1,   99,  100,  126,   97,    0,  118,  128,
    0,    0,    0,    0,  130,    0,  -24,   88,  -58,   58,
    0,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 453
static const YYINT yytable[] = {                         52,
   11,   14,   74,   64,    1,    2,    3,    4,    5,    6,
   13,  140,  110,   50,   50,  141,   24,   73,   50,   82,
   50,   80,  139,   82,   20,    1,    2,    3,    4,    5,
    6,   81,   14,   60,   25,  103,  129,  130,  131,  132,
  133,  134,  135,  136,   14,   16,  108,    1,    2,    3,
    4,    5,    6,  105,    7,   60,  115,  117,  118,  119,
  120,  121,  122,  123,  124,  125,  126,  127,  128,    1,
    2,    3,    4,    5,    6,    7,   20,   38,   81,   60,
  115,   22,   81,   17,   42,   65,   38,   46,   46,   41,
   71,   43,   46,   68,   46,   69,   12,    7,   44,   45,
  106,   78,   70,  111,   46,  138,   12,  112,   44,   14,
   15,   47,   48,   49,   50,  142,   28,   23,   27,    7,
  139,  143,  107,   59,   42,   28,   62,   27,   61,   61,
   30,   43,   15,   61,    2,   61,   37,   31,   44,   45,
   72,   75,   77,   33,   46,   35,   66,   40,   42,   14,
   74,   47,   48,   49,   50,   43,   67,   63,  109,  104,
    0,    0,   44,   45,    0,   42,    0,    0,   46,  114,
    0,    0,   43,   14,    0,   47,   48,   49,   50,   44,
   45,    0,   42,    0,    0,   46,    0,    0,    0,   43,
   14,    0,   47,   48,   49,   50,   44,   61,    0,   52,
   52,    0,   46,    0,   52,    0,   52,   14,    0,   47,
   48,   49,   50,   41,   41,   41,   41,    0,    0,   41,
   41,    0,   41,   41,   41,   41,   41,   41,    0,    0,
   41,   41,    0,    0,    0,   41,    0,   41,   78,   78,
   78,   78,    0,    0,   78,   78,    0,   78,   78,   78,
   78,   78,   78,    0,    0,   78,   78,    0,    0,    0,
   78,    0,   78,   82,   83,   84,   85,    0,    0,   86,
   87,    0,   88,   89,   90,   91,   92,   93,    0,   82,
   83,   84,   85,    0,    0,   86,   87,  137,   88,   89,
   90,   91,   92,   93,    0,    0,   41,   41,   41,   41,
   37,  113,   41,   41,    0,   41,   41,   41,   41,   41,
   41,    0,    0,   41,   44,   44,   44,   44,   38,    0,
   44,   44,    0,   44,   44,   44,   44,   44,   44,    0,
    0,   44,   41,   41,   41,   41,   80,    0,   41,   41,
    0,   41,   41,   41,   41,   41,   41,    0,    0,   41,
   82,   83,   84,   85,    0,    0,   86,   87,    0,   88,
   89,   90,   91,   92,   93,    0,    0,   94,   82,   83,
   84,   85,    0,    0,   86,   87,    0,   88,   89,   90,
   91,   92,   93,   95,    0,   96,    0,    0,    0,    0,
    0,    0,   97,   98,   99,  100,  101,  102,   62,   62,
    0,   54,   54,   62,    0,   62,   54,    0,   54,   51,
   51,    0,   53,   53,   51,    0,   51,   53,    0,   53,
   59,   59,    0,   58,   58,   59,    0,   59,   58,    0,
   58,   56,   56,    0,   57,   57,   56,    0,   56,   57,
    0,   57,   55,   55,    0,   60,   60,   55,    0,   55,
   60,    0,   60,
};
static const YYINT yycheck[] = {                         24,
    0,  297,  298,   28,  257,  258,  259,  260,  261,  262,
   10,  289,   71,  288,  289,  293,  269,   42,  293,  289,
  295,   46,  288,  293,  290,  257,  258,  259,  260,  261,
  262,  292,  297,  294,  287,   60,   95,   96,   97,   98,
   99,  100,  101,  102,  297,  292,   71,  257,  258,  259,
  260,  261,  262,  292,  307,  294,   81,   82,   83,   84,
   85,   86,   87,   88,   89,   90,   91,   92,   93,  257,
  258,  259,  260,  261,  262,  307,  290,   20,  289,  294,
  105,  293,  293,  293,  272,   28,   29,  288,  289,  289,
  275,  279,  293,  291,  295,  288,    0,  307,  286,  287,
  291,   44,  288,  279,  292,  293,   10,  279,  286,  297,
   12,  299,  300,  301,  302,  140,   20,   19,   20,  307,
  288,  288,  270,   25,  272,   29,   28,   29,  288,  289,
    0,  279,  293,  293,    0,  295,  275,  288,  286,  287,
   41,   43,   44,  288,  292,  288,   29,   22,  272,  297,
  298,  299,  300,  301,  302,  279,   29,   28,   71,   61,
   -1,   -1,  286,  287,   -1,  272,   -1,   -1,  292,  293,
   -1,   -1,  279,  297,   -1,  299,  300,  301,  302,  286,
  287,   -1,  272,   -1,   -1,  292,   -1,   -1,   -1,  279,
  297,   -1,  299,  300,  301,  302,  286,  287,   -1,  288,
  289,   -1,  292,   -1,  293,   -1,  295,  297,   -1,  299,
  300,  301,  302,  271,  272,  273,  274,   -1,   -1,  277,
  278,   -1,  280,  281,  282,  283,  284,  285,   -1,   -1,
  288,  289,   -1,   -1,   -1,  293,   -1,  295,  271,  272,
  273,  274,   -1,   -1,  277,  278,   -1,  280,  281,  282,
  283,  284,  285,   -1,   -1,  288,  289,   -1,   -1,   -1,
  293,   -1,  295,  271,  272,  273,  274,   -1,   -1,  277,
  278,   -1,  280,  281,  282,  283,  284,  285,   -1,  271,
  272,  273,  274,   -1,   -1,  277,  278,  295,  280,  281,
  282,  283,  284,  285,   -1,   -1,  271,  272,  273,  274,
  275,  293,  277,  278,   -1,  280,  281,  282,  283,  284,
  285,   -1,   -1,  288,  271,  272,  273,  274,  275,   -1,
  277,  278,   -1,  280,  281,  282,  283,  284,  285,   -1,
   -1,  288,  271,  272,  273,  274,  275,   -1,  277,  278,
   -1,  280,  281,  282,  283,  284,  285,   -1,   -1,  288,
  271,  272,  273,  274,   -1,   -1,  277,  278,   -1,  280,
  281,  282,  283,  284,  285,   -1,   -1,  288,  271,  272,
  273,  274,   -1,   -1,  277,  278,   -1,  280,  281,  282,
  283,  284,  285,  271,   -1,  273,   -1,   -1,   -1,   -1,
   -1,   -1,  280,  281,  282,  283,  284,  285,  288,  289,
   -1,  288,  289,  293,   -1,  295,  293,   -1,  295,  288,
  289,   -1,  288,  289,  293,   -1,  295,  293,   -1,  295,
  288,  289,   -1,  288,  289,  293,   -1,  295,  293,   -1,
  295,  288,  289,   -1,  288,  289,  293,   -1,  295,  293,
   -1,  295,  288,  289,   -1,  288,  289,  293,   -1,  295,
  293,   -1,  295,
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
"COND :",
"WHILE_STATEMENT :",
"BLOCK :",
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
#line 197 "parser.y"


#include "lex.yy.c"
main(){

    //print_ast(ourProgram);

    return yyparse();
}

void yyerror(const char *c){
	fprintf(stderr,"line %d: %s\n",yylineno - 1,c);
	
}


#line 480 "y.tab.c"

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
	{yyval.n = yystack.l_mark[-1].n;}
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
	{ yyval.n = makeNode("", yystack.l_mark[-1].n, NULL); }
break;
case 21:
#line 101 "parser.y"
	{ yyval.n = yystack.l_mark[-1].n; }
break;
case 22:
#line 102 "parser.y"
	{ yyval.n = makeNode("", yystack.l_mark[0].n, NULL); }
break;
case 23:
#line 103 "parser.y"
	{ yyval.n = makeNode("", yystack.l_mark[0].n, NULL); }
break;
case 24:
#line 104 "parser.y"
	{ yyval.n = makeNode("", yystack.l_mark[0].n, NULL); }
break;
case 25:
#line 105 "parser.y"
	{ yyval.n = makeNode("", yystack.l_mark[0].n, NULL); }
break;
case 26:
#line 108 "parser.y"
	{ yyval.n = makeNode("return",yystack.l_mark[-1].n,NULL); }
break;
case 27:
#line 110 "parser.y"
	{ yyval.n = makeNode("",NULL,NULL); }
break;
case 28:
#line 111 "parser.y"
	{ yyval.n = makeNode("",NULL,NULL); }
break;
case 29:
#line 112 "parser.y"
	{ yyval.n = makeNode("",NULL,NULL); }
break;
case 30:
#line 113 "parser.y"
	{ yyval.n = makeNode("",NULL,NULL); }
break;
case 31:
#line 115 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 32:
#line 116 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 33:
#line 119 "parser.y"
	{ yyval.n = makeNode("ASSIGNMENT", yystack.l_mark[-2].n, yystack.l_mark[0].n); }
break;
case 34:
#line 120 "parser.y"
	{ yyval.n = makeNode("STRING ASSIGNMENT", yystack.l_mark[-2].n, yystack.l_mark[0].n);}
break;
case 35:
#line 121 "parser.y"
	{ yyval.n = makeNode("POINTER ASSIGNMENT", yystack.l_mark[-2].n, yystack.l_mark[0].n);}
break;
case 36:
#line 122 "parser.y"
	{yyval.n = makeNode("NULL POINTER ASSIGNMENT", yystack.l_mark[-2].n, makeNode("NULL POINTER",NULL,NULL)); }
break;
case 37:
#line 126 "parser.y"
	{ yyval.n = makeNode("ASSIGNMENT TARGET: VARIABLE", yystack.l_mark[0].n, NULL); }
break;
case 38:
#line 127 "parser.y"
	{ yyval.n = makeNode("ASSIGNMENT TARGET: STRING", yystack.l_mark[0].n, NULL); }
break;
case 39:
#line 128 "parser.y"
	{ yyval.n = makeNode("ASSIGNMENT TARGET: DEREFERENCE", yystack.l_mark[0].n, NULL); }
break;
case 40:
#line 131 "parser.y"
	{ yyval.n = makeNode("STRING INDEX", yystack.l_mark[-3].n, yystack.l_mark[-1].n) ;}
break;
case 41:
#line 133 "parser.y"
	{ yyval.n = makeNode(yytext, yystack.l_mark[0].n, NULL); }
break;
case 42:
#line 134 "parser.y"
	{ yyval.n = makeNode(yytext, yystack.l_mark[0].num, NULL); }
break;
case 43:
#line 135 "parser.y"
	{ yyval.n = makeNode(yytext, yystack.l_mark[0].ch, NULL); }
break;
case 44:
#line 136 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 45:
#line 137 "parser.y"
	{ yyval.n = makeNode("BOOLEAN", yystack.l_mark[0].n, NULL); }
break;
case 46:
#line 138 "parser.y"
	{ yyval.n = makeNode("DEREFERENCE", yystack.l_mark[0].n, NULL); }
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
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 50:
#line 142 "parser.y"
	{ yyval.n = makeNode("!", yystack.l_mark[0].n, NULL); }
break;
case 51:
#line 143 "parser.y"
	{ yyval.n = makeNode("+",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 52:
#line 144 "parser.y"
	{ yyval.n = makeNode("-",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 53:
#line 145 "parser.y"
	{ yyval.n = makeNode("*",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 54:
#line 146 "parser.y"
	{ yyval.n = makeNode("/",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 55:
#line 147 "parser.y"
	{ yyval.n = makeNode("<",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 56:
#line 148 "parser.y"
	{ yyval.n = makeNode(">",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 57:
#line 149 "parser.y"
	{ yyval.n = makeNode("<=",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 58:
#line 150 "parser.y"
	{ yyval.n = makeNode(">=",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 59:
#line 151 "parser.y"
	{ yyval.n = makeNode("==",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 60:
#line 152 "parser.y"
	{ yyval.n = makeNode("!=",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 61:
#line 153 "parser.y"
	{ yyval.n = makeNode("&&",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 62:
#line 154 "parser.y"
	{ yyval.n = makeNode("||",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 63:
#line 155 "parser.y"
	{ yyval.n = makeNode("<",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 64:
#line 156 "parser.y"
	{ yyval.n = makeNode(">",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 65:
#line 157 "parser.y"
	{ yyval.n = makeNode("<=",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 66:
#line 158 "parser.y"
	{ yyval.n = makeNode(">=",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 67:
#line 159 "parser.y"
	{ yyval.n = makeNode("==",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 68:
#line 160 "parser.y"
	{ yyval.n = makeNode("!=",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 69:
#line 161 "parser.y"
	{ yyval.n = makeNode("&&",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 70:
#line 162 "parser.y"
	{ yyval.n = makeNode("||",yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 71:
#line 166 "parser.y"
	{ yyval.n = makeNode("true", NULL, NULL); }
break;
case 72:
#line 167 "parser.y"
	{ yyval.n = makeNode("false", NULL, NULL); }
break;
case 73:
#line 170 "parser.y"
	{ yyval.n = makeNode("Procedure Call",yystack.l_mark[-4].n, yystack.l_mark[-2].n); }
break;
case 74:
#line 171 "parser.y"
	{ yyval.n = makeNode("Procedure Call No Params",yystack.l_mark[-3].n, NULL); }
break;
case 75:
#line 174 "parser.y"
	{ yyval.n = makeNode("PARANTHESES EXPRESSION",yystack.l_mark[-1].n,NULL); }
break;
case 76:
#line 177 "parser.y"
	{ yyval.n = makeNode("ABS",yystack.l_mark[-1].n,NULL); }
break;
case 77:
#line 178 "parser.y"
	{ yyval.n = makeNode("ABS",yystack.l_mark[-1].n,NULL); }
break;
case 78:
#line 181 "parser.y"
	{ yyval.n = makeNode("&", yystack.l_mark[0].n, NULL); }
break;
case 79:
#line 182 "parser.y"
	{ yyval.n = makeNode("&", yystack.l_mark[0].n, NULL); }
break;
case 80:
#line 185 "parser.y"
	{ yyval.n = makeNode("^", yystack.l_mark[0].n, NULL); }
break;
case 81:
#line 188 "parser.y"
	{ yyval.n = makeNode(""/*Multiple Expressions*/,yystack.l_mark[-2].n,yystack.l_mark[0].n); }
break;
case 82:
#line 189 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 83:
#line 192 "parser.y"
	{ yyval.n = makeNode(yytext,NULL,NULL); }
break;
case 84:
#line 195 "parser.y"
	{yyval.n=makeNode(yystack.l_mark[0].str,NULL,NULL);}
break;
#line 1030 "y.tab.c"
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

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
    3,    3,   11,   11,   15,   15,   15,   15,   17,   17,
   17,   21,   18,   18,   18,   18,   18,   18,   18,   18,
   18,   18,   18,   18,   18,   18,   18,   18,   18,   18,
   18,   18,   18,   18,   18,   18,   18,   18,   18,   18,
   18,   18,   13,   14,   14,   12,   12,   23,   23,   24,
   24,   25,   26,   26,   20,   20,   22,   27,   27,   19,
    4,
};
static const YYINT yylen[] = {                            2,
    1,    1,    2,    1,    6,    5,    6,    5,    1,    1,
    1,    1,    1,    1,    1,    4,    2,    3,    2,    4,
    3,    2,    1,    2,    2,    1,    1,    1,    1,    3,
    6,    6,    2,    2,    3,    3,    3,    3,    1,    1,
    1,    4,    1,    1,    1,    1,    1,    2,    1,    1,
    1,    2,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    5,    3,    2,    5,    7,    1,    1,    5,
    4,    3,    3,    3,    2,    2,    2,    3,    1,    1,
    1,
};
static const YYINT yydefred[] = {                         0,
    9,   10,   15,   12,   14,   13,   11,    0,    1,    0,
    4,    0,    3,   91,    0,    0,    0,    0,    0,    0,
    6,    8,    0,    0,    0,    0,    0,    0,    0,   19,
   29,    0,    0,    0,    0,   23,    0,   26,   27,   28,
    0,    0,   40,   41,    5,    7,    0,    0,    0,    0,
    0,    0,    0,    0,   45,   78,   79,   44,    0,    0,
    0,   46,   47,   49,   50,   51,   87,   75,    0,    0,
    0,    0,   34,    0,    0,   18,    0,   22,   21,   25,
   24,    0,   16,    0,    0,    0,   90,    0,    0,    0,
   86,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   30,    0,    0,    0,
    0,    0,    0,    0,    0,   74,    0,    0,    0,   20,
   38,    0,   36,    0,    0,    0,   83,   84,   82,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   71,   72,   69,   68,   66,   67,
   65,   70,   42,    0,    0,   73,   81,    0,    0,    0,
    0,   80,   77,
};
static const YYINT yydgoto[] = {                          8,
    9,   10,   31,   59,   18,   21,   33,   34,   35,   36,
   37,   38,   39,   40,   41,   22,   42,   92,   89,   61,
   62,   44,   63,   64,   65,   66,  132,
};
static const YYINT yysindex[] = {                      -223,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -223,
    0, -293,    0,    0, -282, -208, -262, -277, -293, -113,
    0,    0, -262, -256, -245, -230,   44, -293,  -45,    0,
    0, -229,   61, -100, -225,    0, -206,    0,    0,    0,
 -202, -195,    0,    0,    0,    0, -223,   44,   44,   44,
 -237, -293,   44,   44,    0,    0,    0,    0, -289,  248,
  281,    0,    0,    0,    0,    0,    0,    0,   -3,   44,
   44, -236,    0,  266,    0,    0, -204,    0,    0,    0,
    0,   10,    0,  143,  160,  266,    0, -191, -190, -229,
    0,  266,  177,   27,   44,   44,   44,   44,   44,   44,
   44,   44,   44,   44,   44,   44,    0, -196, -196, -196,
 -196, -196, -196, -196, -196,    0, -171, -289, -164,    0,
    0,  266,    0,  281, -199, -199,    0,    0,    0, -184,
  266, -274,  266,  266,  266,  266,  266,  266,  266,  266,
  266,  266,  266,  266,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -231, -160,    0,    0,   44, -172, -199,
  266,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  117,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -175,    0,    0,    0,    0,    0,    0,
    0, -156,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   93,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  194,    0, -167,  212,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -275,    0,    0,    0,  118,
    0, -163,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  230,    0,    0,
    0, -161,    0, -154,    0,    0,    0,    0,    0,    0,
 -264,    0, -107,  -65,   62,  279,  282,  290,  293,  301,
  304,  312,  315,  323,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -58,    0,    0,    0,    0,    0,
 -263,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,    0,    2,   12,   92,  119,    1,  111,  107,  -25,
    0,    0,    0, -118,  121,  127,    0,  -27,   70,  159,
  214,    0,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 618
static const YYINT yytable[] = {                         60,
   12,   11,   94,   14,   70,   74,  155,  156,   78,   16,
   12,   13,   52,   52,  158,   23,   19,   52,  159,   52,
   84,   85,   86,   15,   89,   88,   93,   20,   89,   88,
   24,   32,   47,    1,    2,    3,    4,    5,    6,   67,
   32,  163,  117,   78,   72,   32,   48,   19,    1,    2,
    3,    4,    5,    6,  122,  119,  157,   70,   20,   14,
   87,   49,   88,   90,   70,   79,  131,  133,  134,  135,
  136,  137,  138,  139,  140,  141,  142,  143,  144,   82,
   32,   80,  118,    7,   17,   81,  120,  127,  128,   52,
   29,  131,    1,    2,    3,    4,    5,    6,    7,   95,
   96,   97,   98,  157,  160,   99,  100,   50,  101,  102,
  103,  104,  105,  106,   51,  162,    2,   17,   39,   19,
   33,   52,   53,  153,   48,   48,   35,   54,  154,   48,
  161,   48,   14,   37,   55,   56,   57,   58,   83,   69,
   77,   45,    7,    1,    2,    3,    4,    5,    6,   46,
   25,  123,   26,   73,    0,   27,    1,    2,    3,    4,
    5,    6,    0,   25,    0,   26,    0,    0,   27,    0,
    0,    0,    0,   28,    0,    0,   29,   30,    0,    0,
   63,   63,    0,   14,    0,   63,   28,   63,    0,   29,
   76,    0,    0,    7,    0,    0,   14,    0,   76,   76,
   76,   76,   76,   76,    0,   76,    7,   76,    0,    0,
   76,    1,    2,    3,    4,    5,    6,    0,   25,    0,
   26,    0,   54,   54,    0,    0,    0,   54,   76,   54,
    0,   76,   76,   43,    0,    0,    0,    0,   76,    0,
  124,   28,   43,    0,   29,   68,   75,   43,   76,    0,
    0,   14,    0,    1,    2,    3,    4,    5,    6,    0,
   25,    7,   26,    0,    0,   91,  145,  146,  147,  148,
  149,  150,  151,  152,    0,    0,    0,    0,    0,  121,
    0,   50,   43,   28,    0,    0,   29,  116,   51,    0,
    0,    0,    0,   14,    0,   52,   53,    0,   50,    0,
    0,   54,    0,    7,    0,   51,   14,   87,   55,   56,
   57,   58,   52,   53,    0,   50,    0,    0,   54,  130,
    0,    0,   51,   14,    0,   55,   56,   57,   58,   52,
   53,    0,   50,    0,    0,   54,    0,    0,    0,   51,
   14,    0,   55,   56,   57,   58,   52,   71,    0,   64,
   64,    0,   54,    0,   64,    0,   64,   14,    0,   55,
   56,   57,   58,   43,   43,   43,   43,    0,    0,   43,
   43,    0,   43,   43,   43,   43,   43,   43,    0,    0,
   43,   43,    0,    0,    0,   43,    0,   43,   85,   85,
   85,   85,    0,    0,   85,   85,    0,   85,   85,   85,
   85,   85,   85,    0,    0,   85,   85,    0,    0,    0,
   85,    0,   85,   95,   96,   97,   98,    0,    0,   99,
  100,    0,  101,  102,  103,  104,  105,  106,    0,    0,
   95,   96,   97,   98,    0,  125,   99,  100,    0,  101,
  102,  103,  104,  105,  106,    0,    0,   95,   96,   97,
   98,    0,  126,   99,  100,    0,  101,  102,  103,  104,
  105,  106,    0,    0,   43,   43,   43,   43,   39,  129,
   43,   43,    0,   43,   43,   43,   43,   43,   43,    0,
    0,   43,   46,   46,   46,   46,   40,    0,   46,   46,
    0,   46,   46,   46,   46,   46,   46,    0,    0,   46,
   43,   43,   43,   43,   87,    0,   43,   43,    0,   43,
   43,   43,   43,   43,   43,    0,    0,   43,   95,   96,
   97,   98,    0,    0,   99,  100,    0,  101,  102,  103,
  104,  105,  106,    0,    0,  107,   95,   96,   97,   98,
    0,    0,   99,  100,    0,  101,  102,  103,  104,  105,
  106,  108,    0,  109,    0,    0,    0,    0,    0,    0,
  110,  111,  112,  113,  114,  115,   56,   56,    0,   53,
   53,   56,    0,   56,   53,    0,   53,   55,   55,    0,
   61,   61,   55,    0,   55,   61,    0,   61,   60,   60,
    0,   58,   58,   60,    0,   60,   58,    0,   58,   59,
   59,    0,   57,   57,   59,    0,   59,   57,    0,   57,
   62,   62,    0,    0,    0,   62,    0,   62,
};
static const YYINT yycheck[] = {                         27,
    0,    0,  292,  297,  294,   33,  125,  126,   34,  292,
   10,   10,  288,  289,  289,  293,   16,  293,  293,  295,
   48,   49,   50,   12,  289,  289,   54,  290,  293,  293,
   19,   20,  289,  257,  258,  259,  260,  261,  262,   28,
   29,  160,   70,   69,   33,   34,  292,   47,  257,  258,
  259,  260,  261,  262,   82,  292,  288,  294,  290,  297,
  298,  292,   51,   52,  294,  291,   94,   95,   96,   97,
   98,   99,  100,  101,  102,  103,  104,  105,  106,  275,
   69,  288,   71,  307,  293,  288,  291,  279,  279,  286,
  290,  119,  257,  258,  259,  260,  261,  262,  307,  271,
  272,  273,  274,  288,  265,  277,  278,  272,  280,  281,
  282,  283,  284,  285,  279,  288,    0,  293,  275,  119,
  288,  286,  287,  295,  288,  289,  288,  292,  293,  293,
  158,  295,  297,  288,  299,  300,  301,  302,   47,   29,
   34,   23,  307,  257,  258,  259,  260,  261,  262,   23,
  264,   82,  266,   33,   -1,  269,  257,  258,  259,  260,
  261,  262,   -1,  264,   -1,  266,   -1,   -1,  269,   -1,
   -1,   -1,   -1,  287,   -1,   -1,  290,  291,   -1,   -1,
  288,  289,   -1,  297,   -1,  293,  287,  295,   -1,  290,
  291,   -1,   -1,  307,   -1,   -1,  297,   -1,  257,  258,
  259,  260,  261,  262,   -1,  264,  307,  266,   -1,   -1,
  269,  257,  258,  259,  260,  261,  262,   -1,  264,   -1,
  266,   -1,  288,  289,   -1,   -1,   -1,  293,  287,  295,
   -1,  290,  291,   20,   -1,   -1,   -1,   -1,  297,   -1,
   82,  287,   29,   -1,  290,  291,   33,   34,  307,   -1,
   -1,  297,   -1,  257,  258,  259,  260,  261,  262,   -1,
  264,  307,  266,   -1,   -1,   52,  108,  109,  110,  111,
  112,  113,  114,  115,   -1,   -1,   -1,   -1,   -1,  270,
   -1,  272,   69,  287,   -1,   -1,  290,  291,  279,   -1,
   -1,   -1,   -1,  297,   -1,  286,  287,   -1,  272,   -1,
   -1,  292,   -1,  307,   -1,  279,  297,  298,  299,  300,
  301,  302,  286,  287,   -1,  272,   -1,   -1,  292,  293,
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
  278,   -1,  280,  281,  282,  283,  284,  285,   -1,   -1,
  271,  272,  273,  274,   -1,  293,  277,  278,   -1,  280,
  281,  282,  283,  284,  285,   -1,   -1,  271,  272,  273,
  274,   -1,  293,  277,  278,   -1,  280,  281,  282,  283,
  284,  285,   -1,   -1,  271,  272,  273,  274,  275,  293,
  277,  278,   -1,  280,  281,  282,  283,  284,  285,   -1,
   -1,  288,  271,  272,  273,  274,  275,   -1,  277,  278,
   -1,  280,  281,  282,  283,  284,  285,   -1,   -1,  288,
  271,  272,  273,  274,  275,   -1,  277,  278,   -1,  280,
  281,  282,  283,  284,  285,   -1,   -1,  288,  271,  272,
  273,  274,   -1,   -1,  277,  278,   -1,  280,  281,  282,
  283,  284,  285,   -1,   -1,  288,  271,  272,  273,  274,
   -1,   -1,  277,  278,   -1,  280,  281,  282,  283,  284,
  285,  271,   -1,  273,   -1,   -1,   -1,   -1,   -1,   -1,
  280,  281,  282,  283,  284,  285,  288,  289,   -1,  288,
  289,  293,   -1,  295,  293,   -1,  295,  288,  289,   -1,
  288,  289,  293,   -1,  295,  293,   -1,  295,  288,  289,
   -1,  288,  289,  293,   -1,  295,  293,   -1,  295,  288,
  289,   -1,  288,  289,  293,   -1,  295,  293,   -1,  295,
  288,  289,   -1,   -1,   -1,  293,   -1,  295,
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
"PROC : PROCEDURE ID PARAN_O MULT_PARAMS PARAN_C BLOCK_W_RETURN",
"PROC : PROCEDURE ID PARAN_O MULT_PARAMS PARAN_C BLOCK_W",
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
"WHILE_STATEMENT : KEY_WHILE PARAN_O EXP PARAN_C BLOCK",
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
#line 209 "parser.y"


#include "lex.yy.c"
main(){

    //print_ast(ourProgram);

    return yyparse();
}

void yyerror(const char *c){
	fprintf(stderr,"line %d: %s\n",yylineno - 1,c);
	
}


#line 527 "y.tab.c"

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
	{yyval.n=makeNode("Begin:",yystack.l_mark[0].n,NULL,NULL,NULL);}
break;
case 3:
#line 59 "parser.y"
	{ yyval.n = makeNode("", yystack.l_mark[-1].n, yystack.l_mark[0].n,NULL,NULL); }
break;
case 4:
#line 60 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 5:
#line 63 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-5].n->token,yystack.l_mark[-4].n,yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL);}
break;
case 6:
#line 65 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-4].n->token,yystack.l_mark[-3].n,yystack.l_mark[0].n,NULL,NULL);  }
break;
case 7:
#line 67 "parser.y"
	{yyval.n = makeNode(yystack.l_mark[-5].n->token,yystack.l_mark[-4].n,yystack.l_mark[-2].n,NULL,NULL);}
break;
case 8:
#line 69 "parser.y"
	{yyval.n = makeNode(yystack.l_mark[-4].n->token,yystack.l_mark[-3].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 9:
#line 72 "parser.y"
	{ yyval.n=makeNode("boolean",NULL,NULL,NULL,NULL); }
break;
case 10:
#line 73 "parser.y"
	{ yyval.n=makeNode("char",NULL,NULL,NULL,NULL); }
break;
case 11:
#line 74 "parser.y"
	{ yyval.n=makeNode("charp",NULL,NULL,NULL,NULL); }
break;
case 12:
#line 75 "parser.y"
	{ yyval.n=makeNode("int",NULL,NULL,NULL,NULL); }
break;
case 13:
#line 76 "parser.y"
	{ yyval.n=makeNode("intp",NULL,NULL,NULL,NULL); }
break;
case 14:
#line 77 "parser.y"
	{ yyval.n=makeNode("string",NULL,NULL,NULL,NULL); }
break;
case 15:
#line 78 "parser.y"
	{ yyval.n=makeNode("void",NULL,NULL,NULL,NULL); }
break;
case 16:
#line 83 "parser.y"
	{ yyval.n = makeNode("",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 17:
#line 84 "parser.y"
	{yyval.n=yystack.l_mark[0].n;}
break;
case 18:
#line 87 "parser.y"
	{yyval.n = yystack.l_mark[-1].n;}
break;
case 19:
#line 88 "parser.y"
	{}
break;
case 20:
#line 91 "parser.y"
	{yyval.n = makeNode("",yystack.l_mark[-2].n,yystack.l_mark[-1].n,NULL,NULL);}
break;
case 21:
#line 92 "parser.y"
	{yyval.n = yystack.l_mark[-1].n;}
break;
case 22:
#line 95 "parser.y"
	{ yyval.n = makeNode("", yystack.l_mark[-1].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 23:
#line 96 "parser.y"
	{ yyval.n = yystack.l_mark[0].n ; }
break;
case 24:
#line 98 "parser.y"
	{ yyval.n = yystack.l_mark[-1].n; }
break;
case 25:
#line 99 "parser.y"
	{ yyval.n = yystack.l_mark[-1].n; }
break;
case 26:
#line 100 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 27:
#line 101 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 28:
#line 102 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 29:
#line 103 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 30:
#line 106 "parser.y"
	{ yyval.n = makeNode("return",yystack.l_mark[-1].n,NULL,NULL,NULL); }
break;
case 31:
#line 109 "parser.y"
	{ 
        yyval.n = makeNode (yystack.l_mark[-5].n->token,yystack.l_mark[-4].n,yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL); 
        }
break;
case 32:
#line 113 "parser.y"
	{
        yyval.n = makeNode (yystack.l_mark[-5].n->token,yystack.l_mark[-4].n,yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL);
        }
break;
case 33:
#line 117 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 34:
#line 118 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 35:
#line 121 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL); }
break;
case 36:
#line 122 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL);}
break;
case 37:
#line 123 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL);}
break;
case 38:
#line 124 "parser.y"
	{yyval.n = makeNode("=", yystack.l_mark[-2].n, makeNode("NULL POINTER",NULL,NULL,NULL,NULL),NULL,NULL); }
break;
case 39:
#line 128 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 40:
#line 129 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 41:
#line 130 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 42:
#line 133 "parser.y"
	{ yyval.n = makeNode("STRING INDEX", yystack.l_mark[-3].n, yystack.l_mark[-1].n,NULL,NULL) ;}
break;
case 43:
#line 135 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 44:
#line 136 "parser.y"
	{ yyval.n = makeNode(yytext, yystack.l_mark[0].num, NULL,NULL,NULL); }
break;
case 45:
#line 137 "parser.y"
	{ yyval.n = makeNode(yytext, yystack.l_mark[0].ch, NULL,NULL,NULL); }
break;
case 46:
#line 138 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 47:
#line 139 "parser.y"
	{ yyval.n = makeNode("boolean", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 48:
#line 140 "parser.y"
	{ yyval.n = makeNode("dereference", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 49:
#line 141 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 50:
#line 142 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 51:
#line 143 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 52:
#line 144 "parser.y"
	{ yyval.n = makeNode("!", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 53:
#line 145 "parser.y"
	{ yyval.n = makeNode("+",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 54:
#line 146 "parser.y"
	{ yyval.n = makeNode("-",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 55:
#line 147 "parser.y"
	{ yyval.n = makeNode("*",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 56:
#line 148 "parser.y"
	{ yyval.n = makeNode("/",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 57:
#line 149 "parser.y"
	{ yyval.n = makeNode("<",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 58:
#line 150 "parser.y"
	{ yyval.n = makeNode(">",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 59:
#line 151 "parser.y"
	{ yyval.n = makeNode("<=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 60:
#line 152 "parser.y"
	{ yyval.n = makeNode(">=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 61:
#line 153 "parser.y"
	{ yyval.n = makeNode("==",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 62:
#line 154 "parser.y"
	{ yyval.n = makeNode("!=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 63:
#line 155 "parser.y"
	{ yyval.n = makeNode("&&",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 64:
#line 156 "parser.y"
	{ yyval.n = makeNode("||",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 65:
#line 157 "parser.y"
	{ yyval.n = makeNode("<",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 66:
#line 158 "parser.y"
	{ yyval.n = makeNode(">",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 67:
#line 159 "parser.y"
	{ yyval.n = makeNode("<=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 68:
#line 160 "parser.y"
	{ yyval.n = makeNode(">=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 69:
#line 161 "parser.y"
	{ yyval.n = makeNode("==",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 70:
#line 162 "parser.y"
	{ yyval.n = makeNode("!=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 71:
#line 163 "parser.y"
	{ yyval.n = makeNode("&&",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 72:
#line 164 "parser.y"
	{ yyval.n = makeNode("||",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 73:
#line 167 "parser.y"
	{yyval.n = makeNode("while",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 74:
#line 170 "parser.y"
	{yyval.n = yystack.l_mark[-1].n;}
break;
case 75:
#line 171 "parser.y"
	{yyval.n = makeNode("{}",NULL,NULL,NULL,NULL);}
break;
case 76:
#line 174 "parser.y"
	{yyval.n = makeNode("if",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 77:
#line 175 "parser.y"
	{ yyval.n = makeNode("if", yystack.l_mark[-4].n, makeNode("else", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL),NULL,NULL);}
break;
case 78:
#line 178 "parser.y"
	{ yyval.n = makeNode("true", NULL,NULL,NULL,NULL); }
break;
case 79:
#line 179 "parser.y"
	{ yyval.n = makeNode("false", NULL, NULL,NULL,NULL); }
break;
case 80:
#line 182 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-4].n->token,yystack.l_mark[-4].n, yystack.l_mark[-2].n,NULL,NULL); }
break;
case 81:
#line 183 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-3].n->token,yystack.l_mark[-3].n, NULL,NULL,NULL); }
break;
case 82:
#line 186 "parser.y"
	{ yyval.n = makeNode("",yystack.l_mark[-1].n,NULL,NULL,NULL); }
break;
case 83:
#line 189 "parser.y"
	{ yyval.n = makeNode("ABS",yystack.l_mark[-1].n,NULL,NULL,NULL); }
break;
case 84:
#line 190 "parser.y"
	{ yyval.n = makeNode("ABS",yystack.l_mark[-1].n,NULL,NULL,NULL); }
break;
case 85:
#line 193 "parser.y"
	{ yyval.n = makeNode("&", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 86:
#line 194 "parser.y"
	{ yyval.n = makeNode("&", yystack.l_mark[0].n ,NULL,NULL,NULL); }
break;
case 87:
#line 197 "parser.y"
	{ yyval.n = makeNode("^", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 88:
#line 200 "parser.y"
	{ yyval.n = makeNode(""/*Multiple Expressions*/,yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 89:
#line 201 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 90:
#line 204 "parser.y"
	{ yyval.n = makeNode(yytext,NULL,NULL,NULL,NULL); }
break;
case 91:
#line 207 "parser.y"
	{yyval.n=makeNode(yystack.l_mark[0].str,NULL,NULL,NULL,NULL);}
break;
#line 1097 "y.tab.c"
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

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
#define COMMENT 308
#define KET_FOR 309
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    2,    3,    3,    4,    4,    4,    4,    4,    4,
   20,   21,   21,    9,    9,    9,    9,    9,    9,    9,
    6,    6,   19,   19,    7,    7,   10,   10,   12,   12,
   12,   12,   12,   12,   12,   12,   12,   32,   32,   32,
   11,    8,    8,   13,   13,   13,   18,   18,   18,   18,
   18,   18,   22,   22,   22,   26,   23,   23,   23,   23,
   23,   23,   23,   23,   23,   23,   23,   23,   23,   23,
   23,   23,   23,   23,   23,   23,   23,   23,   23,   23,
   23,   23,   23,   23,   23,   23,   23,   23,   14,   16,
   17,   17,   15,   15,   15,   15,   15,   15,    1,    1,
    1,   28,   28,    8,    8,   29,   30,   30,   25,   25,
   27,   31,   31,   24,    5,
};
static const YYINT yylen[] = {                            2,
    1,    1,    4,    3,    7,    6,    7,    6,    1,    1,
    5,    3,    1,    1,    1,    1,    1,    1,    1,    1,
    4,    2,    3,    2,    4,    3,    2,    1,    2,    2,
    1,    1,    1,    1,    2,    1,    1,    1,    2,    0,
    3,    5,    5,    2,    2,    2,    3,    3,    3,    6,
    5,    3,    1,    1,    1,    4,    1,    1,    1,    1,
    1,    2,    1,    1,    1,    1,    2,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    1,    9,    5,
    3,    2,    5,    5,    7,    7,    7,    7,    1,    3,
    4,    1,    1,    5,    4,    3,    3,    3,    2,    2,
    2,    3,    1,    1,    1,
};
static const YYINT yydefred[] = {                         0,
   38,    0,    1,    2,    0,   14,   15,   20,   17,   19,
   18,    0,   16,   38,    0,    0,    9,    0,   10,    0,
    0,    0,    0,    0,    0,   24,  115,   36,   34,    0,
    0,    0,    0,    0,   28,    0,   37,   31,   32,   33,
    0,    0,   54,   55,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   66,   59,  102,  103,   58,
    0,   63,    0,   88,    0,    0,   60,   61,   64,   65,
  111,   24,    0,    0,    0,   35,    0,    0,   46,    0,
    0,    0,   23,    0,   27,   26,   30,   29,    0,    0,
   39,    0,    0,    0,    0,    0,    0,  114,    0,    0,
    0,  110,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   41,    0,
    0,    0,    0,    0,    0,    0,    0,   23,    0,    0,
    0,    0,    0,    0,    0,   25,   52,    0,    0,   48,
    0,    0,    0,    0,    0,    0,    0,  107,  108,  106,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   86,   87,   84,   83,   81,
   82,   80,   85,  105,    0,   56,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   99,    0,    0,   90,
    0,    0,    0,    0,  104,    0,    0,   51,    0,    6,
    8,    0,    0,    0,    0,    0,    0,   92,    0,    0,
   12,    0,   42,   50,    5,    7,   21,  100,    0,   96,
   33,   98,   33,   91,    0,  101,    0,   89,
};
static const YYINT yydgoto[] = {                          2,
  186,    3,    4,   29,   61,  143,   17,   62,   63,   33,
   34,   35,   36,   37,   38,   39,   40,   41,   19,   64,
  152,   42,  130,  100,   66,   67,   44,   68,   69,   70,
  131,    5,
};
static const YYINT yysindex[] = {                      -302,
    0,    0,    0,    0, -200,    0,    0,    0,    0,    0,
    0,   89,    0,    0,  -14, -302,    0, -266,    0, -240,
 -228, -214,  508, -266,  147,    0,    0,    0,    0, -183,
 -216,  559,  160, -209,    0, -189,    0,    0,    0,    0,
 -160, -136,    0,    0, -302, -176, -148,  508,  508, -250,
  508, -184, -266,  508,  508,    0,    0,    0,    0,    0,
 -170,    0, -266,    0,  797, -179,    0,    0,    0,    0,
    0,    0,  212,  406,  508,    0,  508, -151,    0,  829,
    0, -137,    0, -131,    0,    0,    0,    0,  355, -176,
    0,   -7,  707,  725, -132, -120,  829,    0, -122, -104,
 -132,    0,  829,  743,  406, -113,  508,  508,  508,  508,
  508,  508,  508,  508,  508,  508,  508,  508,    0, -114,
 -114, -114, -114, -114, -114, -114, -114,    0, -106,  829,
 -239,  399, -170,  457,  508,    0,    0, -108,  829,    0,
 -179, -302, -100, -266, -141, -105,  508,    0,    0,    0,
 -226,  -99,  -30,  829,  829,  829,  829,  829,  829,  829,
  829,  829,  829,  829,  829,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -93,    0, -274,  -97, -266,  829,
   23, -269, -302,  -87, -220,  -60,    0,  -58,  290,    0,
  813,  -30, -302,  -85,    0, -302, -194,    0,  -82,    0,
    0, -269,  -30,  -75,  -77, -141, -141,    0,  342,  508,
    0, -176,    0,    0,    0,    0,    0,    0,  -62,    0,
    0,    0,    0,    0,  761,    0, -105,    0,
};
static const YYINT yyrindex[] = {                       269,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    1,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -40,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    1,    7,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  591,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  450,    0, -134,
  501,  -52,    0,    0,    0,    0,    0,    0,    0,   13,
    0,    0,    0,    0,  -40,    0, -202,    0,    0,    0,
  614,    0, -155,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -218,
    0,    0,  552,    0,    0,    0,    0,  683, -178,    0,
 -158,  -53,    0,    0,    0,    0,    0,    0,    0,    0,
  779,    0,    0, -130,  -55,    6,   24,   34,   46,   49,
   94,  105,  153,  170,  218,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  -53,    0,    0, -205,
    0,    0,  -53,  -54,    0,  225,    0,  277,    0,    0,
    0,    0,  637,    0,    0, -143,  -54,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  660,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
  -16,    0,  236,   33,   -8, -107, -159,    8,   -3,  -20,
  -22,  -33,    0,    0,    0,    0, -127,  -24, -153,    0,
    0,    0,  256,  167,   98,    3,    0,    0,    0,    0,
  210,  -13,
};
#define YYTABLESIZE 1114
static const YYINT yytable[] = {                         85,
   40,   18,   46,   30,   73,    1,    4,   79,   32,   47,
   84,   18,    3,  174,   43,   71,   30,  188,  190,   31,
   12,   32,  200,   78,   30,   96,  178,   43,  201,   32,
   27,   90,   31,    1,   81,   43,   24,   16,   91,   85,
   31,   95,  215,   99,  101,  194,   27,   45,  216,  135,
   84,   48,   43,  175,  106,  102,    6,    7,    8,    9,
   10,   11,  192,   49,   30,  105,   24,   75,  133,   32,
  113,   76,  204,  199,  113,   43,   27,   50,  221,  223,
   31,   86,  112,  112,  211,   67,   67,  112,  144,   12,
   67,  120,   67,  121,  203,  217,  151,  153,   87,  228,
  122,  123,  124,  125,  126,  127,   13,   14,   74,   47,
   75,  187,   27,   98,   47,    6,    7,    8,    9,   10,
   11,  105,   20,   75,   21,  151,   22,   88,  182,   49,
  179,   91,   62,   62,   49,  184,   30,   62,   89,   62,
  134,   32,   75,   92,   42,   24,   40,   43,   25,  144,
  185,  135,   31,   44,  113,   27,  148,   78,   78,  136,
  205,   75,   78,  182,   78,   13,   28,  147,  209,  202,
  197,   53,  187,  187,  149,   85,   95,  144,  153,  212,
   30,  174,  202,  181,  189,   32,  141,   43,  144,  220,
  222,   43,  183,  193,  195,  196,   31,   30,   30,  144,
   30,  203,   32,   32,  206,   32,  207,  213,   43,   43,
  214,   43,  218,   31,   31,  219,   31,  166,  167,  168,
  169,  170,  171,  172,  173,  226,    6,    7,    8,    9,
   10,   11,   79,   79,   53,   45,   40,   79,   22,   79,
   15,   82,    6,    7,    8,    9,   10,   11,    0,    6,
    7,    8,    9,   10,   11,  140,    0,   40,   40,   40,
   40,   40,   40,    4,    4,    4,    4,    4,    4,    3,
    3,    3,    3,    3,    3,   12,   13,    0,   65,    6,
    7,    8,    9,   10,   11,  142,    0,   80,    0,    0,
   40,    0,   13,   71,   71,    0,    4,    0,   71,   13,
   71,    0,    3,   93,   94,    0,   97,   40,    0,  103,
  104,   69,   69,    4,    0,  198,   69,    0,   69,    3,
    0,   68,   68,    0,    0,    0,   68,    0,   68,   13,
  132,    0,  103,   70,   70,    0,   76,   76,   70,    0,
   70,   76,    0,   76,  139,    6,    7,    8,    9,   10,
   11,    0,   20,    0,   21,    0,   22,   23,    0,    0,
    0,    0,  154,  155,  156,  157,  158,  159,  160,  161,
  162,  163,  164,  165,    0,   24,    0,    0,   25,   26,
    0,   75,   75,    0,    0,   27,   75,    0,   75,    0,
  180,    0,   73,   73,    0,   13,   28,   73,    0,   73,
    0,    0,  191,    6,    7,    8,    9,   10,   11,    0,
   20,    0,   21,    0,   22,   23,    6,    7,    8,    9,
   10,   11,    0,   20,    0,   21,    0,   22,   23,    0,
    0,    0,    0,   24,    0,    0,   25,   72,    0,    0,
   74,   74,    0,   27,    0,   74,   24,   74,    0,   25,
   83,    0,    0,   13,   28,    0,   27,   72,   72,    0,
    0,    0,   72,    0,   72,  225,   13,   28,    6,    7,
    8,    9,   10,   11,    0,   20,    0,   21,    0,   22,
   23,   94,   94,   94,   94,   94,   94,    0,   94,    0,
   94,    0,   94,   94,    0,    0,    0,    0,   24,    0,
    0,   25,  128,    0,    0,   77,   77,    0,   27,    0,
   77,   94,   77,    0,   94,   94,    0,    0,   13,   28,
    0,   94,    0,    0,    0,   40,   40,   40,   40,   40,
   40,   94,   94,   33,   33,   33,   33,   33,   33,    0,
   33,    0,   33,    0,   33,   33,    6,    7,    8,    9,
   10,   11,    0,   20,    0,   21,    0,   22,   40,    0,
    0,    0,    0,   33,    0,    0,   33,   33,    0,    0,
    0,    0,    0,   33,    0,   40,   24,    0,    0,   25,
  208,    0,    0,   33,   33,    0,   27,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   13,   28,    6,    7,
    8,    9,   10,   11,    0,   20,    0,   21,    0,   22,
    0,    6,    7,    8,    9,   10,   11,    0,    0,    0,
    0,    0,    0,    0,  137,    0,   51,    0,   24,    0,
    0,   25,  224,   52,    0,    0,    0,    0,   27,    0,
   53,   54,    0,    0,    0,    0,   55,    0,   13,   28,
   56,  138,   98,   57,   58,   59,   60,    0,    0,    0,
    0,   13,    6,    7,    8,    9,   10,   11,    0,  107,
    0,  108,  109,    0,  110,  111,  112,   51,  113,  114,
  115,  116,  117,  118,   52,    0,    0,    0,    0,    0,
    0,   53,   54,  176,    0,    0,    0,   55,  129,    0,
    0,   56,   27,    0,   57,   58,   59,   60,    0,    0,
    0,    0,   13,    6,    7,    8,    9,   10,   11,    0,
   57,    0,   57,   57,   53,   57,   57,   57,   51,   57,
   57,   57,   57,   57,   57,   52,    0,   57,   57,    0,
    0,    0,   53,   54,    0,    0,    0,    0,   55,  177,
    0,    0,   56,   27,    0,   57,   58,   59,   60,    0,
    0,    0,    0,   13,    6,    7,    8,    9,   10,   11,
    0,   60,    0,   60,   60,   54,   60,   60,   60,   51,
   60,   60,   60,   60,   60,   60,   52,    0,   60,   60,
    0,    0,    0,   53,   54,    0,    0,    0,    0,   55,
    0,    0,    0,   56,   27,    0,   57,   58,   59,   60,
    0,    0,    0,    0,   13,    6,    7,    8,    9,   10,
   11,    0,   57,    0,   57,   57,  111,   57,   57,   57,
   51,   57,   57,   57,   57,   57,   57,   52,    0,   57,
   57,    0,    0,    0,   53,   77,    0,    0,    0,    0,
   55,    0,    0,    0,   56,   27,    0,   57,   58,   59,
   60,   57,    0,   57,   57,   13,   57,   57,   57,    0,
   57,   57,   57,   57,   57,   57,    0,    0,   57,   57,
    0,    0,    0,   57,  109,   57,  109,  109,    0,  109,
  109,  109,    0,  109,  109,  109,  109,  109,  109,    0,
    0,  109,  109,    0,    0,    0,  109,   40,  109,   40,
   40,    0,   40,   40,   40,    0,   40,   40,   40,   40,
   40,   40,    0,    0,   40,   40,    0,    0,    0,   40,
   11,   40,   11,   11,    0,   11,   11,   11,    0,   11,
   11,   11,   11,   11,   11,    0,    0,   11,   11,    0,
    0,    0,   11,  115,   11,  115,  115,    0,  115,  115,
  115,    0,  115,  115,  115,  115,  115,  115,    0,    0,
  115,    0,    0,    0,    0,  115,  115,  107,    0,  108,
  109,    0,  110,  111,  112,    0,  113,  114,  115,  116,
  117,  118,    0,    0,    0,  107,    0,  108,  109,  145,
  110,  111,  112,    0,  113,  114,  115,  116,  117,  118,
    0,    0,    0,  107,    0,  108,  109,  146,  110,  111,
  112,    0,  113,  114,  115,  116,  117,  118,    0,    0,
    0,  107,    0,  108,  109,  150,  110,  111,  112,    0,
  113,  114,  115,  116,  117,  118,    0,    0,    0,   57,
    0,   57,   57,  227,   57,   57,   57,    0,   57,   57,
   57,   57,   57,   57,    0,    0,    0,  107,    0,  108,
  109,   13,  110,  111,  112,    0,  113,  114,  115,  116,
  117,  118,    0,  107,  119,  108,  109,    0,  110,  111,
  112,    0,  113,  114,  115,  116,  117,  118,    0,  107,
  210,  108,  109,    0,  110,  111,  112,    0,  113,  114,
  115,  116,  117,  118,
};
static const YYINT yycheck[] = {                         33,
    0,    5,   16,   12,   25,  308,    0,   32,   12,   18,
   33,   15,    0,  288,   12,   24,   25,  145,  146,   12,
  290,   25,  182,   32,   33,   50,  134,   25,  182,   33,
  297,   45,   25,  308,   32,   33,  287,    5,  308,   73,
   33,   50,  202,   52,   53,  153,  297,   15,  202,  289,
   73,  292,   50,  293,   63,   53,  257,  258,  259,  260,
  261,  262,  289,  292,   73,  292,  287,  294,   77,   73,
  289,  288,  293,  181,  293,   73,  297,  292,  206,  207,
   73,  291,  288,  289,  192,  288,  289,  293,   92,  290,
  293,  271,  295,  273,  289,  203,  105,  292,  288,  227,
  280,  281,  282,  283,  284,  285,  307,  308,  292,  288,
  294,  145,  297,  298,  293,  257,  258,  259,  260,  261,
  262,  292,  264,  294,  266,  134,  268,  288,  142,  288,
  134,  308,  288,  289,  293,  144,  145,  293,  275,  295,
  292,  145,  294,  292,  288,  287,  290,  145,  290,  153,
  292,  289,  145,  288,  289,  297,  279,  288,  289,  291,
  185,  294,  293,  177,  295,  307,  308,  288,  189,  183,
  179,  286,  206,  207,  279,  209,  185,  181,  292,  193,
  189,  288,  196,  292,  290,  189,   89,  185,  192,  206,
  207,  189,  293,  293,  288,  293,  189,  206,  207,  203,
  209,  289,  206,  207,  265,  209,  265,  293,  206,  207,
  293,  209,  288,  206,  207,  293,  209,  120,  121,  122,
  123,  124,  125,  126,  127,  288,  257,  258,  259,  260,
  261,  262,  288,  289,  275,  288,  290,  293,  293,  295,
    5,   32,  257,  258,  259,  260,  261,  262,   -1,  257,
  258,  259,  260,  261,  262,   89,   -1,  257,  258,  259,
  260,  261,  262,  257,  258,  259,  260,  261,  262,  257,
  258,  259,  260,  261,  262,  290,  307,   -1,   23,  257,
  258,  259,  260,  261,  262,  293,   -1,   32,   -1,   -1,
  290,   -1,  307,  288,  289,   -1,  290,   -1,  293,  307,
  295,   -1,  290,   48,   49,   -1,   51,  307,   -1,   54,
   55,  288,  289,  307,   -1,  293,  293,   -1,  295,  307,
   -1,  288,  289,   -1,   -1,   -1,  293,   -1,  295,  307,
   75,   -1,   77,  288,  289,   -1,  288,  289,  293,   -1,
  295,  293,   -1,  295,   89,  257,  258,  259,  260,  261,
  262,   -1,  264,   -1,  266,   -1,  268,  269,   -1,   -1,
   -1,   -1,  107,  108,  109,  110,  111,  112,  113,  114,
  115,  116,  117,  118,   -1,  287,   -1,   -1,  290,  291,
   -1,  288,  289,   -1,   -1,  297,  293,   -1,  295,   -1,
  135,   -1,  288,  289,   -1,  307,  308,  293,   -1,  295,
   -1,   -1,  147,  257,  258,  259,  260,  261,  262,   -1,
  264,   -1,  266,   -1,  268,  269,  257,  258,  259,  260,
  261,  262,   -1,  264,   -1,  266,   -1,  268,  269,   -1,
   -1,   -1,   -1,  287,   -1,   -1,  290,  291,   -1,   -1,
  288,  289,   -1,  297,   -1,  293,  287,  295,   -1,  290,
  291,   -1,   -1,  307,  308,   -1,  297,  288,  289,   -1,
   -1,   -1,  293,   -1,  295,  210,  307,  308,  257,  258,
  259,  260,  261,  262,   -1,  264,   -1,  266,   -1,  268,
  269,  257,  258,  259,  260,  261,  262,   -1,  264,   -1,
  266,   -1,  268,  269,   -1,   -1,   -1,   -1,  287,   -1,
   -1,  290,  291,   -1,   -1,  288,  289,   -1,  297,   -1,
  293,  287,  295,   -1,  290,  291,   -1,   -1,  307,  308,
   -1,  297,   -1,   -1,   -1,  257,  258,  259,  260,  261,
  262,  307,  308,  257,  258,  259,  260,  261,  262,   -1,
  264,   -1,  266,   -1,  268,  269,  257,  258,  259,  260,
  261,  262,   -1,  264,   -1,  266,   -1,  268,  290,   -1,
   -1,   -1,   -1,  287,   -1,   -1,  290,  291,   -1,   -1,
   -1,   -1,   -1,  297,   -1,  307,  287,   -1,   -1,  290,
  291,   -1,   -1,  307,  308,   -1,  297,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  307,  308,  257,  258,
  259,  260,  261,  262,   -1,  264,   -1,  266,   -1,  268,
   -1,  257,  258,  259,  260,  261,  262,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  270,   -1,  272,   -1,  287,   -1,
   -1,  290,  291,  279,   -1,   -1,   -1,   -1,  297,   -1,
  286,  287,   -1,   -1,   -1,   -1,  292,   -1,  307,  308,
  296,  297,  298,  299,  300,  301,  302,   -1,   -1,   -1,
   -1,  307,  257,  258,  259,  260,  261,  262,   -1,  271,
   -1,  273,  274,   -1,  276,  277,  278,  272,  280,  281,
  282,  283,  284,  285,  279,   -1,   -1,   -1,   -1,   -1,
   -1,  286,  287,  295,   -1,   -1,   -1,  292,  293,   -1,
   -1,  296,  297,   -1,  299,  300,  301,  302,   -1,   -1,
   -1,   -1,  307,  257,  258,  259,  260,  261,  262,   -1,
  271,   -1,  273,  274,  275,  276,  277,  278,  272,  280,
  281,  282,  283,  284,  285,  279,   -1,  288,  289,   -1,
   -1,   -1,  286,  287,   -1,   -1,   -1,   -1,  292,  293,
   -1,   -1,  296,  297,   -1,  299,  300,  301,  302,   -1,
   -1,   -1,   -1,  307,  257,  258,  259,  260,  261,  262,
   -1,  271,   -1,  273,  274,  275,  276,  277,  278,  272,
  280,  281,  282,  283,  284,  285,  279,   -1,  288,  289,
   -1,   -1,   -1,  286,  287,   -1,   -1,   -1,   -1,  292,
   -1,   -1,   -1,  296,  297,   -1,  299,  300,  301,  302,
   -1,   -1,   -1,   -1,  307,  257,  258,  259,  260,  261,
  262,   -1,  271,   -1,  273,  274,  275,  276,  277,  278,
  272,  280,  281,  282,  283,  284,  285,  279,   -1,  288,
  289,   -1,   -1,   -1,  286,  287,   -1,   -1,   -1,   -1,
  292,   -1,   -1,   -1,  296,  297,   -1,  299,  300,  301,
  302,  271,   -1,  273,  274,  307,  276,  277,  278,   -1,
  280,  281,  282,  283,  284,  285,   -1,   -1,  288,  289,
   -1,   -1,   -1,  293,  271,  295,  273,  274,   -1,  276,
  277,  278,   -1,  280,  281,  282,  283,  284,  285,   -1,
   -1,  288,  289,   -1,   -1,   -1,  293,  271,  295,  273,
  274,   -1,  276,  277,  278,   -1,  280,  281,  282,  283,
  284,  285,   -1,   -1,  288,  289,   -1,   -1,   -1,  293,
  271,  295,  273,  274,   -1,  276,  277,  278,   -1,  280,
  281,  282,  283,  284,  285,   -1,   -1,  288,  289,   -1,
   -1,   -1,  293,  271,  295,  273,  274,   -1,  276,  277,
  278,   -1,  280,  281,  282,  283,  284,  285,   -1,   -1,
  288,   -1,   -1,   -1,   -1,  293,  294,  271,   -1,  273,
  274,   -1,  276,  277,  278,   -1,  280,  281,  282,  283,
  284,  285,   -1,   -1,   -1,  271,   -1,  273,  274,  293,
  276,  277,  278,   -1,  280,  281,  282,  283,  284,  285,
   -1,   -1,   -1,  271,   -1,  273,  274,  293,  276,  277,
  278,   -1,  280,  281,  282,  283,  284,  285,   -1,   -1,
   -1,  271,   -1,  273,  274,  293,  276,  277,  278,   -1,
  280,  281,  282,  283,  284,  285,   -1,   -1,   -1,  271,
   -1,  273,  274,  293,  276,  277,  278,   -1,  280,  281,
  282,  283,  284,  285,   -1,   -1,   -1,  271,   -1,  273,
  274,  293,  276,  277,  278,   -1,  280,  281,  282,  283,
  284,  285,   -1,  271,  288,  273,  274,   -1,  276,  277,
  278,   -1,  280,  281,  282,  283,  284,  285,   -1,  271,
  288,  273,  274,   -1,  276,  277,  278,   -1,  280,  281,
  282,  283,  284,  285,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 309
#define YYUNDFTOKEN 344
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
"OCTA_LITERAL","BINARY_LITERAL","APOSTROPHE","KEY_CHARP","COMMENT","KET_FOR",0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : S",
"S : PROGRAM",
"PROGRAM : MULTI_PROC",
"MULTI_PROC : OPTIONAL_COMMENT MULTI_PROC PROC OPTIONAL_COMMENT",
"MULTI_PROC : OPTIONAL_COMMENT PROC OPTIONAL_COMMENT",
"PROC : PROCEDURE ID PARAN_O MULT_PARAMS PARAN_C OPTIONAL_COMMENT BLOCK_W_RETURN",
"PROC : PROCEDURE ID PARAN_O PARAN_C OPTIONAL_COMMENT BLOCK_W_RETURN",
"PROC : PROCEDURE ID PARAN_O MULT_PARAMS PARAN_C OPTIONAL_COMMENT BLOCK_W",
"PROC : PROCEDURE ID PARAN_O PARAN_C OPTIONAL_COMMENT BLOCK_W",
"PROC : BLOCK_W_RETURN",
"PROC : BLOCK_W",
"PROC_STETMENT : ID PARAN_O PROC_STETMENT_MULT_PARAMS PARAN_C OPTIONAL_COMMENT",
"PROC_STETMENT_MULT_PARAMS : ID COMMA MULT_PARAMS",
"PROC_STETMENT_MULT_PARAMS : ID",
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
"STATEMENT : PROC_CALL SEMICOLON",
"STATEMENT : COMMENT",
"STATEMENT : FOR_STETMENT",
"OPTIONAL_COMMENT : COMMENT",
"OPTIONAL_COMMENT : OPTIONAL_COMMENT COMMENT",
"OPTIONAL_COMMENT :",
"RETURN_STATEMENT : KEY_RETURN EXP SEMICOLON",
"PROC_CALL : PROCEDURE ID PARAN_O MULT_PARAMS PARAN_C",
"PROC_CALL : PROCEDURE ID PARAN_O MULT_PARAMS PARAN_C",
"VARS : PROCEDURE EXP",
"VARS : PROCEDURE MULT_EXP",
"VARS : PROCEDURE ASSIGNMENT",
"ASSIGNMENT : LHS ASSIGN EXP",
"ASSIGNMENT : LHS ASSIGN STR",
"ASSIGNMENT : LHS ASSIGN PTR",
"ASSIGNMENT : LHS ASSIGN IDENTIFIER PARAN_O MULT_PARAMS PARAN_C",
"ASSIGNMENT : LHS ASSIGN IDENTIFIER PARAN_O PARAN_C",
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
"EXP : NULL_LITERAL",
"EXP : OP_NOT EXP",
"EXP : EXP OP_PLUS EXP",
"EXP : EXP OP_MINUS EXP",
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
"EXP : PROC_STETMENT",
"FOR_STETMENT : KEY_FOR PARAN_O ASSIGNMENT SEMICOLON EXP SEMICOLON EXP PARAN_C BLOCK",
"WHILE_STATEMENT : KEY_WHILE PARAN_O EXP PARAN_C BLOCK",
"BLOCK : BRA_O MULT_STATEMENT BRA_C",
"BLOCK : BRA_O BRA_C",
"COND : KEY_IF PARAN_O EXP PARAN_C BLOCK",
"COND : KEY_IF PARAN_O EXP PARAN_C AFTER_ATETMENT_NO_PARAN",
"COND : KEY_IF PARAN_O EXP PARAN_C BLOCK KEY_ELSE BLOCK",
"COND : KEY_IF PARAN_O EXP PARAN_C AFTER_ATETMENT_NO_PARAN KEY_ELSE AFTER_ATETMENT_NO_PARAN",
"COND : KEY_IF PARAN_O EXP PARAN_C AFTER_ATETMENT_NO_PARAN KEY_ELSE BLOCK",
"COND : KEY_IF PARAN_O EXP PARAN_C BLOCK KEY_ELSE AFTER_ATETMENT_NO_PARAN",
"AFTER_ATETMENT_NO_PARAN : STATEMENT",
"AFTER_ATETMENT_NO_PARAN : PARAN_O PARAN_C SEMICOLON",
"AFTER_ATETMENT_NO_PARAN : PARAN_O ASSIGNMENT PARAN_C SEMICOLON",
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
#line 243 "parser.y"


#include "lex.yy.c"
main(){

    //print_ast(ourProgram);

    return yyparse();
}

void yyerror(const char *msg){
	//fprintf(stderr,"line %d: %s\n",yylineno ,msg);
	fflush(stdout);
	fprintf(stderr, "Error: %s at line %d\n", msg,yylineno );
	fprintf(stderr, "Parser does not expect '%s'\n",yytext);
}


#line 680 "y.tab.c"

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
#line 56 "parser.y"
	{printPreOrder(yystack.l_mark[0].n,0);}
break;
case 2:
#line 58 "parser.y"
	{yyval.n=makeNode("Begin:",yystack.l_mark[0].n,NULL,NULL,NULL);}
break;
case 3:
#line 60 "parser.y"
	{ yyval.n = makeNode("", yystack.l_mark[-2].n, yystack.l_mark[-1].n,NULL,NULL); }
break;
case 4:
#line 61 "parser.y"
	{ yyval.n = yystack.l_mark[-1].n; }
break;
case 5:
#line 64 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-6].n->token,yystack.l_mark[-5].n,yystack.l_mark[-3].n,yystack.l_mark[0].n,NULL);}
break;
case 6:
#line 66 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-5].n->token,yystack.l_mark[-4].n,yystack.l_mark[0].n,NULL,NULL);  }
break;
case 7:
#line 68 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-6].n->token,yystack.l_mark[-5].n,yystack.l_mark[-3].n,yystack.l_mark[0].n,NULL); }
break;
case 8:
#line 70 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-5].n->token,yystack.l_mark[-4].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 9:
#line 72 "parser.y"
	{ yyval.n = yystack.l_mark[0].n;}
break;
case 10:
#line 74 "parser.y"
	{yyval.n = yystack.l_mark[0].n;}
break;
case 11:
#line 77 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-4].n->token,yystack.l_mark[-2].n,NULL,NULL,NULL);}
break;
case 12:
#line 80 "parser.y"
	{ yyval.n = makeNode("",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 13:
#line 81 "parser.y"
	{yyval.n=yystack.l_mark[0].n;}
break;
case 14:
#line 84 "parser.y"
	{ yyval.n=makeNode("boolean",NULL,NULL,NULL,NULL); }
break;
case 15:
#line 85 "parser.y"
	{ yyval.n=makeNode("char",NULL,NULL,NULL,NULL); }
break;
case 16:
#line 86 "parser.y"
	{ yyval.n=makeNode("charp",NULL,NULL,NULL,NULL); }
break;
case 17:
#line 87 "parser.y"
	{ yyval.n=makeNode("int",NULL,NULL,NULL,NULL); }
break;
case 18:
#line 88 "parser.y"
	{ yyval.n=makeNode("intp",NULL,NULL,NULL,NULL); }
break;
case 19:
#line 89 "parser.y"
	{ yyval.n=makeNode("string",NULL,NULL,NULL,NULL); }
break;
case 20:
#line 90 "parser.y"
	{ yyval.n=makeNode("void",NULL,NULL,NULL,NULL); }
break;
case 21:
#line 94 "parser.y"
	{ yyval.n = makeNode("",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 22:
#line 95 "parser.y"
	{yyval.n=yystack.l_mark[0].n;}
break;
case 23:
#line 98 "parser.y"
	{yyval.n = yystack.l_mark[-1].n;}
break;
case 24:
#line 99 "parser.y"
	{}
break;
case 25:
#line 102 "parser.y"
	{printf("ddddd\n");yyval.n = makeNode("",yystack.l_mark[-2].n,yystack.l_mark[-1].n,NULL,NULL);}
break;
case 26:
#line 103 "parser.y"
	{yyval.n = yystack.l_mark[-1].n;}
break;
case 27:
#line 106 "parser.y"
	{ yyval.n = makeNode("", yystack.l_mark[-1].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 28:
#line 107 "parser.y"
	{ yyval.n = yystack.l_mark[0].n ; }
break;
case 29:
#line 110 "parser.y"
	{ yyval.n = yystack.l_mark[-1].n; }
break;
case 30:
#line 111 "parser.y"
	{ yyval.n = yystack.l_mark[-1].n; }
break;
case 31:
#line 112 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 32:
#line 113 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 33:
#line 114 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 34:
#line 115 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 35:
#line 116 "parser.y"
	{ yyval.n = yystack.l_mark[-1].n; }
break;
case 36:
#line 117 "parser.y"
	{ yyval.n = NULL;}
break;
case 37:
#line 118 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 38:
#line 121 "parser.y"
	{}
break;
case 39:
#line 122 "parser.y"
	{}
break;
case 40:
#line 123 "parser.y"
	{}
break;
case 41:
#line 126 "parser.y"
	{ yyval.n = makeNode("return",yystack.l_mark[-1].n,NULL,NULL,NULL); }
break;
case 42:
#line 128 "parser.y"
	{ yyval.n = makeNode (yystack.l_mark[-4].n->token,yystack.l_mark[-3].n,yystack.l_mark[-1].n,NULL,NULL); }
break;
case 43:
#line 129 "parser.y"
	{ yyval.n = makeNode (yystack.l_mark[-4].n->token,yystack.l_mark[-3].n,yystack.l_mark[-1].n,NULL,NULL); }
break;
case 44:
#line 132 "parser.y"
	{ yyval.n = makeNode ("",yystack.l_mark[-1].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 45:
#line 133 "parser.y"
	{ yyval.n = makeNode ("",yystack.l_mark[-1].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 46:
#line 134 "parser.y"
	{ yyval.n = makeNode ("",yystack.l_mark[-1].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 47:
#line 139 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL); }
break;
case 48:
#line 140 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL);}
break;
case 49:
#line 141 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL);}
break;
case 50:
#line 142 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-5].n, yystack.l_mark[-3].n,yystack.l_mark[-1].n,NULL);}
break;
case 51:
#line 143 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-4].n, yystack.l_mark[-2].n,NULL,NULL);}
break;
case 52:
#line 144 "parser.y"
	{yyval.n = makeNode("=", yystack.l_mark[-2].n, makeNode("NULL POINTER",NULL,NULL,NULL,NULL),NULL,NULL); }
break;
case 53:
#line 148 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 54:
#line 149 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 55:
#line 150 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 56:
#line 153 "parser.y"
	{ yyval.n = makeNode("STRING INDEX", yystack.l_mark[-3].n, yystack.l_mark[-1].n,NULL,NULL) ;}
break;
case 57:
#line 155 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 58:
#line 156 "parser.y"
	{ yyval.n = makeNode(yytext, NULL, NULL,NULL,NULL); }
break;
case 59:
#line 157 "parser.y"
	{ yyval.n = makeNode(yytext, NULL, NULL,NULL,NULL); }
break;
case 60:
#line 158 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 61:
#line 159 "parser.y"
	{ yyval.n = makeNode("boolean", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 62:
#line 160 "parser.y"
	{ yyval.n = makeNode("dereference", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 63:
#line 161 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 64:
#line 162 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 65:
#line 163 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 66:
#line 164 "parser.y"
	{ yyval.n = makeNode("null",NULL,NULL,NULL,NULL);}
break;
case 67:
#line 165 "parser.y"
	{ yyval.n = makeNode("!", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 68:
#line 166 "parser.y"
	{ yyval.n = makeNode("+",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 69:
#line 167 "parser.y"
	{ yyval.n = makeNode("-",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 70:
#line 168 "parser.y"
	{ yyval.n = makeNode("*",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 71:
#line 169 "parser.y"
	{ yyval.n = makeNode("/",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 72:
#line 170 "parser.y"
	{ yyval.n = makeNode("<",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 73:
#line 171 "parser.y"
	{ yyval.n = makeNode(">",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 74:
#line 172 "parser.y"
	{ yyval.n = makeNode("<=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 75:
#line 173 "parser.y"
	{ yyval.n = makeNode(">=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 76:
#line 174 "parser.y"
	{ yyval.n = makeNode("==",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 77:
#line 175 "parser.y"
	{ yyval.n = makeNode("!=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 78:
#line 176 "parser.y"
	{ yyval.n = makeNode("&&",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 79:
#line 177 "parser.y"
	{ yyval.n = makeNode("||",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 80:
#line 178 "parser.y"
	{ yyval.n = makeNode("<",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 81:
#line 179 "parser.y"
	{ yyval.n = makeNode(">",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 82:
#line 180 "parser.y"
	{ yyval.n = makeNode("<=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 83:
#line 181 "parser.y"
	{ yyval.n = makeNode(">=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 84:
#line 182 "parser.y"
	{ yyval.n = makeNode("==",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 85:
#line 183 "parser.y"
	{ yyval.n = makeNode("!=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 86:
#line 184 "parser.y"
	{ yyval.n = makeNode("&&",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 87:
#line 185 "parser.y"
	{ yyval.n = makeNode("||",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 88:
#line 186 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 89:
#line 189 "parser.y"
	{ yyval.n = makeNode("while",yystack.l_mark[-6].n,yystack.l_mark[-4].n,NULL,NULL); }
break;
case 90:
#line 192 "parser.y"
	{ yyval.n = makeNode("while",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 91:
#line 195 "parser.y"
	{yyval.n = yystack.l_mark[-1].n;}
break;
case 92:
#line 196 "parser.y"
	{yyval.n = makeNode("{}",NULL,NULL,NULL,NULL);}
break;
case 93:
#line 199 "parser.y"
	{yyval.n = makeNode("if",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 94:
#line 200 "parser.y"
	{yyval.n = makeNode("if",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 95:
#line 201 "parser.y"
	{ yyval.n = makeNode("if", yystack.l_mark[-4].n, makeNode("else", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL),NULL,NULL);}
break;
case 96:
#line 202 "parser.y"
	{ yyval.n = makeNode("if", yystack.l_mark[-4].n, makeNode("else", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL),NULL,NULL);}
break;
case 97:
#line 203 "parser.y"
	{ yyval.n = makeNode("if", yystack.l_mark[-4].n, makeNode("else", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL),NULL,NULL);}
break;
case 98:
#line 204 "parser.y"
	{ yyval.n = makeNode("if", yystack.l_mark[-4].n, makeNode("else", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL),NULL,NULL);}
break;
case 99:
#line 207 "parser.y"
	{yyval.n = yystack.l_mark[0].n;}
break;
case 100:
#line 208 "parser.y"
	{yyval.n = NULL;}
break;
case 101:
#line 209 "parser.y"
	{yyval.n = yystack.l_mark[-2].n;}
break;
case 102:
#line 212 "parser.y"
	{ yyval.n = makeNode("true", NULL,NULL,NULL,NULL); }
break;
case 103:
#line 213 "parser.y"
	{ yyval.n = makeNode("false", NULL, NULL,NULL,NULL); }
break;
case 104:
#line 216 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-4].n->token,yystack.l_mark[-4].n, yystack.l_mark[-2].n,NULL,NULL); }
break;
case 105:
#line 217 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-3].n->token,yystack.l_mark[-3].n, NULL,NULL,NULL); }
break;
case 106:
#line 220 "parser.y"
	{ yyval.n = makeNode("",yystack.l_mark[-1].n,NULL,NULL,NULL); }
break;
case 107:
#line 223 "parser.y"
	{ yyval.n = makeNode("ABS",yystack.l_mark[-1].n,NULL,NULL,NULL); }
break;
case 108:
#line 224 "parser.y"
	{ yyval.n = makeNode("ABS",yystack.l_mark[-1].n,NULL,NULL,NULL); }
break;
case 109:
#line 227 "parser.y"
	{ yyval.n = makeNode("&", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 110:
#line 228 "parser.y"
	{ yyval.n = makeNode("&", yystack.l_mark[0].n ,NULL,NULL,NULL); }
break;
case 111:
#line 231 "parser.y"
	{ yyval.n = makeNode("^", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 112:
#line 234 "parser.y"
	{ yyval.n = makeNode(""/*Multiple Expressions*/,yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 113:
#line 235 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 114:
#line 238 "parser.y"
	{ yyval.n = makeNode(yytext,NULL,NULL,NULL,NULL); }
break;
case 115:
#line 241 "parser.y"
	{yyval.n=makeNode(yytext,NULL,NULL,NULL,NULL);}
break;
#line 1342 "y.tab.c"
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

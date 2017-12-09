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
    0,    3,    4,    4,    5,    5,    5,    5,    5,    5,
   21,   22,   22,   10,   10,   10,   10,   10,   10,   10,
    7,    7,   20,   20,    8,    8,   11,   11,   13,   13,
   13,   13,   13,   13,   13,   13,   13,   13,   33,   33,
   33,   12,    2,    2,    9,    9,   14,   14,   14,   19,
   19,   19,   19,   19,   19,   23,   23,   23,   27,   24,
   24,   24,   24,   24,   24,   24,   24,   24,   24,   24,
   24,   24,   24,   24,   24,   24,   24,   24,   24,   24,
   24,   24,   24,   24,   24,   24,   24,   24,   24,   24,
   24,   15,   15,   17,   18,   18,   16,   16,   16,   16,
   16,   16,    1,    1,    1,   29,   29,   30,   31,   31,
   26,   26,   28,   32,   32,   25,    6,
};
static const YYINT yylen[] = {                            2,
    1,    1,    4,    3,    7,    6,    7,    6,    1,    1,
    5,    3,    1,    1,    1,    1,    1,    1,    1,    1,
    4,    2,    4,    2,    5,    3,    2,    1,    2,    2,
    1,    1,    1,    1,    2,    1,    1,    1,    1,    2,
    0,    3,    6,    5,    4,    3,    2,    2,    2,    3,
    3,    3,    6,    5,    3,    1,    1,    1,    4,    1,
    1,    1,    1,    1,    2,    1,    1,    1,    1,    2,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    1,    9,    9,    5,    3,    2,    5,    5,    7,    7,
    7,    7,    1,    3,    4,    1,    1,    3,    3,    3,
    2,    2,    2,    3,    1,    1,    1,
};
static const YYINT yydefred[] = {                         0,
   39,    0,    1,    2,    0,   14,   15,   20,   17,   19,
   18,    0,   16,   39,    0,    0,    9,    0,   10,    0,
   24,    0,    0,    0,    0,  117,    0,    0,    0,    0,
    0,    0,   69,   62,  106,  107,   61,    0,   66,   91,
    0,    0,   63,   64,   67,   68,   26,    0,    0,    0,
    0,    0,   37,   36,   34,    0,    0,    0,    0,   28,
    0,   38,   31,   32,   33,    0,    0,   57,   58,    0,
   40,    0,    0,  116,    0,    0,    0,  112,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   42,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  113,   24,   37,    0,
    0,   35,    0,    0,   49,    0,    0,    0,   23,   37,
    0,   27,   30,   29,    0,    0,    0,    0,  109,  110,
  108,   46,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   89,
   90,   87,   86,   84,   85,   83,   88,    0,    0,    0,
    0,   95,    0,    0,    0,   25,   55,    0,    0,   51,
    0,    0,    0,    0,    0,    0,   45,   59,    0,    0,
    0,    0,    0,    0,    0,    6,    8,    0,    0,   12,
    0,    0,    0,  103,    0,    0,   94,    0,   44,    0,
   46,    0,    5,    7,   21,    0,    0,    0,    0,   96,
    0,   43,   53,  104,    0,  100,   33,  102,   33,    0,
    0,    0,  105,    0,    0,   93,   92,
};
static const YYINT yydgoto[] = {                          2,
  193,   54,    3,    4,   55,   38,  127,   17,   39,   58,
  110,   22,   60,   61,   62,   63,   64,   65,   66,   19,
   40,  134,   67,  135,   76,   42,   43,   69,   44,   45,
   46,  136,    5,
};
static const YYINT yysindex[] = {                      -294,
    0,    0,    0,    0, -192,    0,    0,    0,    0,    0,
    0, -266,    0,    0, -139, -294,    0, -248,    0,  387,
    0, -187,  265, -294, -196,    0, -166,  387, -262, -248,
  387,  387,    0,    0,    0,    0,    0, -265,    0,    0,
  756,  -68,    0,    0,    0,    0,    0, -159, -136, -130,
 -248,   19,    0,    0,    0, -147, -154,  406,   71,    0,
 -125,    0,    0,    0,    0, -112, -110,    0,    0, -196,
    0, -120,  788,    0, -127,  -99, -113,    0,  788,  627,
  361,  387,  387,  387,  387,  387,  387,  387,  387,  387,
  387,  387,  387,  387,    0, -102, -102, -102, -102, -102,
 -102, -102, -102,  387,  387, -201,    0,    0,    0,  149,
  361,    0,  387, -123,    0,  788,    0, -103,    0,    0,
  -97,    0,    0,    0,  215, -294, -101, -248,    0,    0,
    0,    0, -183,  -95,  788, -202,  530,  788,  788,  788,
  788,  788,  788,  788,  788,  788,  788,  788,  788,    0,
    0,    0,    0,    0,    0,    0,    0,  645,  663, -113,
  -89,    0, -265,  278,  387,    0,    0, -117,  788,    0,
  -68, -271, -294,  -82,  -23, -294,    0,    0,  201,  -81,
  387, -284,  -83,  788,  329,    0,    0, -271,  -23,    0,
 -196, -233,  -54,    0,  -46,  213,    0,  772,    0, -282,
    0,  -73,    0,    0,    0,  -67,  -70,  201,  201,    0,
  406,    0,    0,    0,  -64,    0,    0,    0,    0, -265,
  -50,  681,    0,  -81,  -81,    0,    0,
};
static const YYINT yyrindex[] = {                        -8,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  345,    0,    0,    0,    1,    0,    0,    0,    0,
    0,    0,    0,    1,    7,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  438,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -33,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   13,
    0,    0, -164,    0,    0,    0,  461,    0, -145,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  737,    0, -227,  546,  -63,    0,    0,
    0,    0,    0,    0,    0,  -44,    0,    0,    0,    0,
    0,    0,  699,    0, -140,    0,    0,  -48,    5,   24,
   77,   94,  142,  159,  253,  256,  304,  350,  376,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -33,
    0,    0,  567,    0,    0,    0,    0,  588, -180,    0,
 -158,    0,  -44,  -49,    0,  484,    0,    0,    0,    0,
    0,  717,    0, -129,    0,    0,    0,    0,    0,    0,
  507,    0,   84,    0,  136,    0,    0,    0,    0,  -44,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  609,
    0,    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
 -119,    0,    0,  243,  112,  -18, -132, -157,  -13,   33,
  233,  198,  -51,    0,    0,    0,    0, -124,  -56, -144,
    0,    0,    0,  -11,  161,  130,   -7,    0,    0,    0,
    0,  231,    6,
};
#define YYTABLESIZE 1073
static const YYINT yytable[] = {                         27,
   41,  115,   20,  199,   56,  212,    4,  122,   41,   57,
   75,   77,    3,    1,  186,   68,   73,   23,   12,   79,
   80,   25,   78,    1,   21,    1,   81,  187,   82,   70,
  203,  183,  107,   56,   26,   74,   71,   18,   57,  114,
   56,    1,  190,  204,   68,   57,  116,   18,   26,  161,
  117,   68,  202,   51,  195,  197,  205,   23,  122,  206,
   47,  115,  133,   26,    6,    7,    8,    9,   10,   11,
  137,  138,  139,  140,  141,  142,  143,  144,  145,  146,
  147,  148,  149,  217,  219,   51,  165,  160,  216,  218,
  177,   56,  158,  159,  163,   26,   57,   12,   68,  226,
  227,   79,   68,   47,  128,  175,  168,   50,   81,  174,
   82,   71,   50,  169,   13,   14,   16,    6,    7,    8,
    9,   10,   11,   70,   70,   72,   24,  194,   70,   52,
   70,  172,  104,  112,   52,  207,    6,    7,    8,    9,
   10,   11,   65,   65,  111,  133,   82,   65,  115,   65,
   12,  129,  115,  184,  221,  105,  194,  194,  114,  114,
   56,  106,  123,  114,  125,   57,  133,   13,  164,  198,
   82,   68,  126,  160,  185,  124,   82,   56,  188,  130,
   82,  191,   57,   30,   68,  165,   13,  172,   68,   56,
   56,  173,  220,  166,   57,   57,  128,  176,  181,  222,
   68,   68,   96,  117,   97,  188,  189,  128,  196,  200,
  208,   98,   99,  100,  101,  102,  103,  128,  209,  213,
  214,  128,  215,  223,   48,  150,  151,  152,  153,  154,
  155,  156,  157,    6,    7,    8,    9,   10,   11,   81,
   81,   56,  224,   22,   81,   41,   81,   15,   41,   41,
   41,   41,   41,   41,  171,   59,  121,   41,   41,   41,
   41,   41,   41,    4,    4,    4,    4,    4,    4,    3,
    3,    3,    3,    3,    3,    6,    7,    8,    9,   10,
   11,   41,   48,   13,   49,  170,   50,   20,  118,    0,
   41,    0,   82,   82,    0,    0,    4,   82,   41,   82,
    0,    0,    3,    0,    0,   51,    0,   41,   52,  108,
    0,   74,   74,    4,    0,   26,   74,    0,   74,    3,
    0,    0,    0,    0,    0,   13,  109,    6,    7,    8,
    9,   10,   11,    0,   48,    0,   49,    0,   50,   20,
   98,   98,   98,   98,   98,   98,    0,   98,    0,   98,
    0,   98,   98,    0,    0,    0,    0,   51,    0,    0,
   52,  119,    0,    0,   72,   72,    0,   26,    0,   72,
   98,   72,    0,   98,   98,    0,    0,   13,  120,    0,
   98,   71,   71,    0,    0,    0,   71,    0,   71,    0,
   98,   98,   33,   33,   33,   33,   33,   33,    0,   33,
    0,   33,    0,   33,   33,    6,    7,    8,    9,   10,
   11,    0,   48,    0,   49,    0,   50,    0,    0,    0,
    0,    0,   33,    0,    0,   33,   33,    0,    0,   73,
   73,    0,   33,    0,   73,   51,   73,    0,   52,  162,
    0,    0,   33,   33,    0,   26,   79,   79,    0,    0,
    0,   79,    0,   79,    0,   13,  120,    6,    7,    8,
    9,   10,   11,    0,   48,    0,   49,    0,   50,    6,
    7,    8,    9,   10,   11,    0,   48,    0,   49,    0,
   50,    0,    0,    0,  167,    0,   28,   51,    0,    0,
   52,    0,  192,   29,    0,    0,    0,   26,    0,   51,
   30,   31,   52,  210,    0,    0,   32,   13,  120,   26,
   33,   26,   74,   34,   35,   36,   37,    0,    0,   13,
  120,    6,    7,    8,    9,   10,   11,    0,   48,    0,
   49,    0,   50,    0,    6,    7,    8,    9,   10,   11,
   78,   78,    0,   76,   76,   78,    0,   78,   76,   28,
   76,   51,    0,    0,   52,    0,   29,    0,    0,    0,
    0,   26,    0,   30,   31,    0,    0,    0,    0,   32,
  182,   13,   53,   33,   26,    0,   34,   35,   36,   37,
    0,    0,    0,    0,   13,    6,    7,    8,    9,   10,
   11,   77,   77,    0,    0,    0,   77,    0,   77,    0,
   28,   41,   41,   41,   41,   41,   41,   29,   41,    0,
   41,    0,   41,    0,   30,   31,    0,    0,    0,    0,
   32,  201,    0,    0,   33,   26,    0,   34,   35,   36,
   37,   41,   28,    0,   41,   13,    0,   75,   75,   29,
    0,   41,   75,    0,   75,    0,   30,   31,    0,    0,
    0,   41,   32,  132,    0,    0,   33,   26,   28,   34,
   35,   36,   37,   80,   80,   29,    0,    0,   80,    0,
   80,    0,   30,   31,    0,    0,    0,   28,   32,    0,
    0,    0,   33,   26,   29,   34,   35,   36,   37,    0,
    0,   30,  113,    0,    0,    0,    0,   32,    0,    0,
    0,   33,   26,    0,   34,   35,   36,   37,   60,    0,
   60,   60,    0,   60,   60,   60,    0,   60,   60,   60,
   60,   60,   60,    0,    0,   60,   60,    0,    0,    0,
   60,  111,   60,  111,  111,    0,  111,  111,  111,    0,
  111,  111,  111,  111,  111,  111,    0,    0,  111,  111,
    0,    0,    0,  111,   41,  111,   41,   41,    0,   41,
   41,   41,    0,   41,   41,   41,   41,   41,   41,    0,
    0,   41,   41,    0,    0,    0,   41,   11,   41,   11,
   11,    0,   11,   11,   11,    0,   11,   11,   11,   11,
   11,   11,    0,    0,   11,   11,    0,    0,    0,   11,
   83,   11,   84,   85,    0,   86,   87,   88,    0,   89,
   90,   91,   92,   93,   94,    0,   63,    0,   63,   63,
   57,   63,   63,   63,  178,   63,   63,   63,   63,   63,
   63,    0,    0,   63,   63,    0,    0,   60,   63,   60,
   60,  113,   60,   60,   60,    0,   60,   60,   60,   60,
   60,   60,    0,    0,   60,   60,    0,    0,   60,   60,
   60,   60,    0,   60,   60,   60,    0,   60,   60,   60,
   60,   60,   60,    0,    0,   60,    0,    0,    0,   60,
   60,   60,   60,   56,   60,   60,   60,    0,   60,   60,
   60,   60,   60,   60,    0,    0,    0,   83,    0,   84,
   85,   60,   86,   87,   88,    0,   89,   90,   91,   92,
   93,   94,    0,    0,    0,   83,    0,   84,   85,  131,
   86,   87,   88,    0,   89,   90,   91,   92,   93,   94,
    0,    0,    0,   83,    0,   84,   85,  179,   86,   87,
   88,    0,   89,   90,   91,   92,   93,   94,    0,    0,
    0,   83,    0,   84,   85,  180,   86,   87,   88,    0,
   89,   90,   91,   92,   93,   94,    0,    0,    0,   60,
    0,   60,   60,  225,   60,   60,   60,    0,   60,   60,
   60,   60,   60,   60,    0,    0,    0,   46,    0,   46,
   46,   13,   46,   46,   46,    0,   46,   46,   46,   46,
   46,   46,    0,    0,    0,   46,   41,   60,    0,   60,
   60,   56,   60,   60,   60,    0,   60,   60,   60,   60,
   60,   60,    0,    0,   60,   60,   83,    0,   84,   85,
    0,   86,   87,   88,    0,   89,   90,   91,   92,   93,
   94,    0,   83,   95,   84,   85,    0,   86,   87,   88,
    0,   89,   90,   91,   92,   93,   94,    0,   83,  211,
   84,   85,    0,   86,   87,   88,    0,   89,   90,   91,
   92,   93,   94,
};
static const YYINT yycheck[] = {                         18,
    0,   58,  269,  288,   23,  288,    0,   59,   20,   23,
   29,   30,    0,  308,  172,   23,   28,   12,  290,   31,
   32,   16,   30,  308,  291,  308,  292,  172,  294,   24,
  188,  164,   51,   52,  297,  298,  308,    5,   52,   58,
   59,  308,  175,  188,   52,   59,   58,   15,  297,  106,
   58,   59,  185,  287,  179,  180,  189,   52,  110,  293,
  288,  289,   81,  297,  257,  258,  259,  260,  261,  262,
   82,   83,   84,   85,   86,   87,   88,   89,   90,   91,
   92,   93,   94,  208,  209,  287,  289,  106,  208,  209,
  293,  110,  104,  105,  113,  297,  110,  290,  106,  224,
  225,  113,  110,  291,   72,  289,  125,  288,  292,  128,
  294,  308,  293,  125,  307,  308,    5,  257,  258,  259,
  260,  261,  262,  288,  289,  292,   15,  179,  293,  288,
  295,  126,  292,  288,  293,  192,  257,  258,  259,  260,
  261,  262,  288,  289,  292,  164,  294,  293,  289,  295,
  290,  279,  293,  165,  211,  292,  208,  209,  288,  289,
  179,  292,  288,  293,  275,  179,  185,  307,  292,  181,
  294,  179,  293,  192,  292,  288,  294,  196,  173,  279,
  294,  176,  196,  286,  192,  289,  307,  182,  196,  208,
  209,  293,  211,  291,  208,  209,  164,  293,  288,  211,
  208,  209,  271,  211,  273,  200,  289,  175,  290,  293,
  265,  280,  281,  282,  283,  284,  285,  185,  265,  293,
  288,  189,  293,  288,  288,   96,   97,   98,   99,  100,
  101,  102,  103,  257,  258,  259,  260,  261,  262,  288,
  289,  275,  293,  293,  293,  290,  295,    5,  257,  258,
  259,  260,  261,  262,  125,   23,   59,  257,  258,  259,
  260,  261,  262,  257,  258,  259,  260,  261,  262,  257,
  258,  259,  260,  261,  262,  257,  258,  259,  260,  261,
  262,  290,  264,  307,  266,  125,  268,  269,   58,   -1,
  290,   -1,  288,  289,   -1,   -1,  290,  293,  307,  295,
   -1,   -1,  290,   -1,   -1,  287,   -1,  307,  290,  291,
   -1,  288,  289,  307,   -1,  297,  293,   -1,  295,  307,
   -1,   -1,   -1,   -1,   -1,  307,  308,  257,  258,  259,
  260,  261,  262,   -1,  264,   -1,  266,   -1,  268,  269,
  257,  258,  259,  260,  261,  262,   -1,  264,   -1,  266,
   -1,  268,  269,   -1,   -1,   -1,   -1,  287,   -1,   -1,
  290,  291,   -1,   -1,  288,  289,   -1,  297,   -1,  293,
  287,  295,   -1,  290,  291,   -1,   -1,  307,  308,   -1,
  297,  288,  289,   -1,   -1,   -1,  293,   -1,  295,   -1,
  307,  308,  257,  258,  259,  260,  261,  262,   -1,  264,
   -1,  266,   -1,  268,  269,  257,  258,  259,  260,  261,
  262,   -1,  264,   -1,  266,   -1,  268,   -1,   -1,   -1,
   -1,   -1,  287,   -1,   -1,  290,  291,   -1,   -1,  288,
  289,   -1,  297,   -1,  293,  287,  295,   -1,  290,  291,
   -1,   -1,  307,  308,   -1,  297,  288,  289,   -1,   -1,
   -1,  293,   -1,  295,   -1,  307,  308,  257,  258,  259,
  260,  261,  262,   -1,  264,   -1,  266,   -1,  268,  257,
  258,  259,  260,  261,  262,   -1,  264,   -1,  266,   -1,
  268,   -1,   -1,   -1,  270,   -1,  272,  287,   -1,   -1,
  290,   -1,  292,  279,   -1,   -1,   -1,  297,   -1,  287,
  286,  287,  290,  291,   -1,   -1,  292,  307,  308,  297,
  296,  297,  298,  299,  300,  301,  302,   -1,   -1,  307,
  308,  257,  258,  259,  260,  261,  262,   -1,  264,   -1,
  266,   -1,  268,   -1,  257,  258,  259,  260,  261,  262,
  288,  289,   -1,  288,  289,  293,   -1,  295,  293,  272,
  295,  287,   -1,   -1,  290,   -1,  279,   -1,   -1,   -1,
   -1,  297,   -1,  286,  287,   -1,   -1,   -1,   -1,  292,
  293,  307,  308,  296,  297,   -1,  299,  300,  301,  302,
   -1,   -1,   -1,   -1,  307,  257,  258,  259,  260,  261,
  262,  288,  289,   -1,   -1,   -1,  293,   -1,  295,   -1,
  272,  257,  258,  259,  260,  261,  262,  279,  264,   -1,
  266,   -1,  268,   -1,  286,  287,   -1,   -1,   -1,   -1,
  292,  293,   -1,   -1,  296,  297,   -1,  299,  300,  301,
  302,  287,  272,   -1,  290,  307,   -1,  288,  289,  279,
   -1,  297,  293,   -1,  295,   -1,  286,  287,   -1,   -1,
   -1,  307,  292,  293,   -1,   -1,  296,  297,  272,  299,
  300,  301,  302,  288,  289,  279,   -1,   -1,  293,   -1,
  295,   -1,  286,  287,   -1,   -1,   -1,  272,  292,   -1,
   -1,   -1,  296,  297,  279,  299,  300,  301,  302,   -1,
   -1,  286,  287,   -1,   -1,   -1,   -1,  292,   -1,   -1,
   -1,  296,  297,   -1,  299,  300,  301,  302,  271,   -1,
  273,  274,   -1,  276,  277,  278,   -1,  280,  281,  282,
  283,  284,  285,   -1,   -1,  288,  289,   -1,   -1,   -1,
  293,  271,  295,  273,  274,   -1,  276,  277,  278,   -1,
  280,  281,  282,  283,  284,  285,   -1,   -1,  288,  289,
   -1,   -1,   -1,  293,  271,  295,  273,  274,   -1,  276,
  277,  278,   -1,  280,  281,  282,  283,  284,  285,   -1,
   -1,  288,  289,   -1,   -1,   -1,  293,  271,  295,  273,
  274,   -1,  276,  277,  278,   -1,  280,  281,  282,  283,
  284,  285,   -1,   -1,  288,  289,   -1,   -1,   -1,  293,
  271,  295,  273,  274,   -1,  276,  277,  278,   -1,  280,
  281,  282,  283,  284,  285,   -1,  271,   -1,  273,  274,
  275,  276,  277,  278,  295,  280,  281,  282,  283,  284,
  285,   -1,   -1,  288,  289,   -1,   -1,  271,  293,  273,
  274,  275,  276,  277,  278,   -1,  280,  281,  282,  283,
  284,  285,   -1,   -1,  288,  289,   -1,   -1,  271,  293,
  273,  274,   -1,  276,  277,  278,   -1,  280,  281,  282,
  283,  284,  285,   -1,   -1,  288,   -1,   -1,   -1,  271,
  293,  273,  274,  275,  276,  277,  278,   -1,  280,  281,
  282,  283,  284,  285,   -1,   -1,   -1,  271,   -1,  273,
  274,  293,  276,  277,  278,   -1,  280,  281,  282,  283,
  284,  285,   -1,   -1,   -1,  271,   -1,  273,  274,  293,
  276,  277,  278,   -1,  280,  281,  282,  283,  284,  285,
   -1,   -1,   -1,  271,   -1,  273,  274,  293,  276,  277,
  278,   -1,  280,  281,  282,  283,  284,  285,   -1,   -1,
   -1,  271,   -1,  273,  274,  293,  276,  277,  278,   -1,
  280,  281,  282,  283,  284,  285,   -1,   -1,   -1,  271,
   -1,  273,  274,  293,  276,  277,  278,   -1,  280,  281,
  282,  283,  284,  285,   -1,   -1,   -1,  271,   -1,  273,
  274,  293,  276,  277,  278,   -1,  280,  281,  282,  283,
  284,  285,   -1,   -1,   -1,  289,  290,  271,   -1,  273,
  274,  275,  276,  277,  278,   -1,  280,  281,  282,  283,
  284,  285,   -1,   -1,  288,  289,  271,   -1,  273,  274,
   -1,  276,  277,  278,   -1,  280,  281,  282,  283,  284,
  285,   -1,  271,  288,  273,  274,   -1,  276,  277,  278,
   -1,  280,  281,  282,  283,  284,  285,   -1,  271,  288,
  273,  274,   -1,  276,  277,  278,   -1,  280,  281,  282,
  283,  284,  285,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 309
#define YYUNDFTOKEN 345
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
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
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
"BLOCK_W : BRA_O OPTIONAL_COMMENT MULT_STATEMENT BRA_C",
"BLOCK_W : BRA_O BRA_C",
"BLOCK_W_RETURN : BRA_O OPTIONAL_COMMENT MULT_STATEMENT RETURN_STATEMENT BRA_C",
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
"STATEMENT : PROC_STATEMENT",
"STATEMENT : COMMENT",
"STATEMENT : FOR_STETMENT",
"OPTIONAL_COMMENT : COMMENT",
"OPTIONAL_COMMENT : OPTIONAL_COMMENT COMMENT",
"OPTIONAL_COMMENT :",
"RETURN_STATEMENT : KEY_RETURN EXP SEMICOLON",
"PROC_STATEMENT : PROCEDURE ID PARAN_O MULT_PARAMS PARAN_C SEMICOLON",
"PROC_STATEMENT : PROCEDURE ID PARAN_O PARAN_C SEMICOLON",
"PROC_CALL : ID PARAN_O MULT_EXP PARAN_C",
"PROC_CALL : ID PARAN_O PARAN_C",
"VARS : PROCEDURE EXP",
"VARS : PROCEDURE MULT_EXP",
"VARS : PROCEDURE ASSIGNMENT",
"ASSIGNMENT : LHS ASSIGN EXP",
"ASSIGNMENT : LHS ASSIGN STR",
"ASSIGNMENT : LHS ASSIGN PTR",
"ASSIGNMENT : LHS ASSIGN ID PARAN_O MULT_PARAMS PARAN_C",
"ASSIGNMENT : LHS ASSIGN ID PARAN_O PARAN_C",
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
"FOR_STETMENT : KEY_FOR PARAN_O ASSIGNMENT SEMICOLON EXP SEMICOLON ASSIGNMENT PARAN_C BLOCK",
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
#line 249 "parser.y"


#include "lex.yy.c"
int main(){

    //print_ast(ourProgram);

    return yyparse();
}

void yyerror(const char *msg){
	//fprintf(stderr,"line %d: %s\n",yylineno ,msg);
	fflush(stdout);
	fprintf(stderr, "Error: %s at line %d\n", msg,yylineno );
	fprintf(stderr, "Parser does not expect '%s'\n",yytext);
}


#line 674 "y.tab.c"

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
	{yyval.n = makeNode("",yystack.l_mark[-2].n,yystack.l_mark[-1].n,NULL,NULL);}
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
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 37:
#line 118 "parser.y"
	{ yyval.n = NULL;}
break;
case 38:
#line 119 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
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
#line 124 "parser.y"
	{}
break;
case 42:
#line 127 "parser.y"
	{ yyval.n = makeNode("return",yystack.l_mark[-1].n,NULL,NULL,NULL); }
break;
case 43:
#line 130 "parser.y"
	{ yyval.n = makeNode (yystack.l_mark[-5].n->token,yystack.l_mark[-4].n,yystack.l_mark[-2].n,NULL,NULL); }
break;
case 44:
#line 131 "parser.y"
	{ yyval.n = makeNode (yystack.l_mark[-4].n->token,yystack.l_mark[-3].n,NULL,NULL,NULL); }
break;
case 45:
#line 134 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-3].n->token,yystack.l_mark[-3].n, yystack.l_mark[-1].n,NULL,NULL); }
break;
case 46:
#line 135 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-2].n->token,yystack.l_mark[-2].n, NULL,NULL,NULL); }
break;
case 47:
#line 139 "parser.y"
	{ yyval.n = makeNode ("",yystack.l_mark[-1].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 48:
#line 140 "parser.y"
	{ yyval.n = makeNode ("",yystack.l_mark[-1].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 49:
#line 141 "parser.y"
	{ yyval.n = makeNode ("",yystack.l_mark[-1].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 50:
#line 146 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL); }
break;
case 51:
#line 147 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL);}
break;
case 52:
#line 148 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL);}
break;
case 53:
#line 149 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-5].n, yystack.l_mark[-3].n,yystack.l_mark[-1].n,NULL);   }
break;
case 54:
#line 150 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-4].n, yystack.l_mark[-2].n,NULL,NULL); }
break;
case 55:
#line 151 "parser.y"
	{yyval.n = makeNode("=", yystack.l_mark[-2].n, makeNode("NULL POINTER",NULL,NULL,NULL,NULL),NULL,NULL); }
break;
case 56:
#line 155 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 57:
#line 156 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 58:
#line 157 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 59:
#line 160 "parser.y"
	{ yyval.n = makeNode("STRING INDEX", yystack.l_mark[-3].n, yystack.l_mark[-1].n,NULL,NULL) ;}
break;
case 60:
#line 162 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 61:
#line 163 "parser.y"
	{ yyval.n = makeNode(yytext, NULL, NULL,NULL,NULL); }
break;
case 62:
#line 164 "parser.y"
	{ yyval.n = makeNode(yytext, NULL, NULL,NULL,NULL); }
break;
case 63:
#line 165 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 64:
#line 166 "parser.y"
	{ yyval.n = makeNode("boolean", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 65:
#line 167 "parser.y"
	{ yyval.n = makeNode("dereference", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 66:
#line 168 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 67:
#line 169 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 68:
#line 170 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 69:
#line 171 "parser.y"
	{ yyval.n = makeNode("null",NULL,NULL,NULL,NULL);}
break;
case 70:
#line 172 "parser.y"
	{ yyval.n = makeNode("!", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 71:
#line 173 "parser.y"
	{ yyval.n = makeNode("+",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 72:
#line 174 "parser.y"
	{ yyval.n = makeNode("-",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 73:
#line 175 "parser.y"
	{ yyval.n = makeNode("*",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 74:
#line 176 "parser.y"
	{ yyval.n = makeNode("/",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 75:
#line 177 "parser.y"
	{ yyval.n = makeNode("<",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 76:
#line 178 "parser.y"
	{ yyval.n = makeNode(">",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 77:
#line 179 "parser.y"
	{ yyval.n = makeNode("<=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 78:
#line 180 "parser.y"
	{ yyval.n = makeNode(">=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 79:
#line 181 "parser.y"
	{ yyval.n = makeNode("==",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 80:
#line 182 "parser.y"
	{ yyval.n = makeNode("!=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 81:
#line 183 "parser.y"
	{ yyval.n = makeNode("&&",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 82:
#line 184 "parser.y"
	{ yyval.n = makeNode("||",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 83:
#line 185 "parser.y"
	{ yyval.n = makeNode("<",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 84:
#line 186 "parser.y"
	{ yyval.n = makeNode(">",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 85:
#line 187 "parser.y"
	{ yyval.n = makeNode("<=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 86:
#line 188 "parser.y"
	{ yyval.n = makeNode(">=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 87:
#line 189 "parser.y"
	{ yyval.n = makeNode("==",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 88:
#line 190 "parser.y"
	{ yyval.n = makeNode("!=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 89:
#line 191 "parser.y"
	{ yyval.n = makeNode("&&",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 90:
#line 192 "parser.y"
	{ yyval.n = makeNode("||",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 91:
#line 193 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 92:
#line 196 "parser.y"
	{ yyval.n = makeNode("while",yystack.l_mark[-6].n,yystack.l_mark[-4].n,NULL,NULL); }
break;
case 93:
#line 197 "parser.y"
	{ yyval.n = makeNode("while",yystack.l_mark[-6].n,yystack.l_mark[-4].n,NULL,NULL); }
break;
case 94:
#line 200 "parser.y"
	{ yyval.n = makeNode("while",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 95:
#line 203 "parser.y"
	{yyval.n = yystack.l_mark[-1].n;}
break;
case 96:
#line 204 "parser.y"
	{yyval.n = makeNode("{}",NULL,NULL,NULL,NULL);}
break;
case 97:
#line 207 "parser.y"
	{yyval.n = makeNode("if",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 98:
#line 208 "parser.y"
	{yyval.n = makeNode("if",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 99:
#line 209 "parser.y"
	{ yyval.n = makeNode("if", yystack.l_mark[-4].n, makeNode("else", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL),NULL,NULL);}
break;
case 100:
#line 210 "parser.y"
	{ yyval.n = makeNode("if", yystack.l_mark[-4].n, makeNode("else", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL),NULL,NULL);}
break;
case 101:
#line 211 "parser.y"
	{ yyval.n = makeNode("if", yystack.l_mark[-4].n, makeNode("else", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL),NULL,NULL);}
break;
case 102:
#line 212 "parser.y"
	{ yyval.n = makeNode("if", yystack.l_mark[-4].n, makeNode("else", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL),NULL,NULL);}
break;
case 103:
#line 215 "parser.y"
	{yyval.n = yystack.l_mark[0].n;}
break;
case 104:
#line 216 "parser.y"
	{yyval.n = NULL;}
break;
case 105:
#line 217 "parser.y"
	{yyval.n = yystack.l_mark[-2].n;}
break;
case 106:
#line 220 "parser.y"
	{ yyval.n = makeNode("true", NULL,NULL,NULL,NULL); }
break;
case 107:
#line 221 "parser.y"
	{ yyval.n = makeNode("false", NULL, NULL,NULL,NULL); }
break;
case 108:
#line 226 "parser.y"
	{ yyval.n = makeNode("",yystack.l_mark[-1].n,NULL,NULL,NULL); }
break;
case 109:
#line 229 "parser.y"
	{ yyval.n = makeNode("ABS",yystack.l_mark[-1].n,NULL,NULL,NULL); }
break;
case 110:
#line 230 "parser.y"
	{ yyval.n = makeNode("ABS",yystack.l_mark[-1].n,NULL,NULL,NULL); }
break;
case 111:
#line 233 "parser.y"
	{ yyval.n = makeNode("&", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 112:
#line 234 "parser.y"
	{ yyval.n = makeNode("&", yystack.l_mark[0].n ,NULL,NULL,NULL); }
break;
case 113:
#line 237 "parser.y"
	{ yyval.n = makeNode("^", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 114:
#line 240 "parser.y"
	{ yyval.n = makeNode(""/*Multiple Expressions*/,yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 115:
#line 241 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 116:
#line 244 "parser.y"
	{ yyval.n = makeNode(yytext,NULL,NULL,NULL,NULL); }
break;
case 117:
#line 247 "parser.y"
	{yyval.n=makeNode(yytext,NULL,NULL,NULL,NULL);}
break;
#line 1344 "y.tab.c"
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

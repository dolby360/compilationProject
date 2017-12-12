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
#define IDENTIFIER 296
#define STRING_LITERAL 297
#define CHAR_LITERAL 298
#define TRUE_LITERAL 299
#define FALSE_LITERAL 300
#define INTEGER_LITERAL 301
#define HEX_LITERAL 302
#define OCTA_LITERAL 303
#define BINARY_LITERAL 304
#define APOSTROPHE 305
#define KEY_CHARP 306
#define COMMENT 307
#define KET_FOR 308
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    3,    4,    4,    5,    5,    5,    5,    5,    5,
   21,   22,   22,   10,   10,   10,   10,   10,   10,   10,
    7,    7,   20,   20,    8,    8,   11,   11,   13,   13,
   13,   13,   13,   13,   13,   13,   13,   13,   34,   34,
   34,   12,    2,    2,    9,    9,   14,   14,   14,   19,
   19,   19,   19,   19,   19,   23,   23,   23,   27,   24,
   24,   24,   24,   24,   24,   24,   24,   24,   24,   24,
   24,   24,   24,   24,   24,   24,   24,   24,   24,   24,
   24,   24,   24,   24,   24,   24,   24,   24,   24,   24,
   24,   15,   33,   33,   17,   18,   18,   16,   16,   16,
   16,   16,   16,    1,    1,    1,   29,   29,   30,   31,
   31,   26,   26,   28,   32,   32,   25,    6,
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
    1,    9,    1,    1,    5,    3,    2,    5,    5,    7,
    7,    7,    7,    1,    3,    4,    1,    1,    3,    3,
    3,    2,    2,    2,    3,    1,    1,    1,
};
static const YYINT yydefred[] = {                         0,
   39,    0,    1,    2,    0,    0,  118,   40,    0,    0,
    9,   10,    0,   24,    0,    0,    0,    0,   14,   15,
   20,   17,   19,   18,   16,    0,   69,    0,    0,    0,
    0,    0,   62,  107,  108,   61,    0,   66,   91,    0,
    0,   63,   64,   67,   68,   26,    0,    0,    0,    0,
    0,   37,   36,   34,    0,    0,    0,    0,   28,    0,
   38,   31,   32,   33,    0,    0,   57,   58,    0,    0,
    0,  117,    0,    0,    0,  113,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   42,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  114,   24,   37,    0,    0,   35,
    0,    0,   49,    0,    0,    0,   23,   37,    0,   27,
   30,   29,    0,    0,    0,    0,  110,  111,  109,   46,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   89,   90,   87,
   86,   84,   85,   83,   88,    0,    0,    0,   93,    0,
    0,   96,    0,    0,    0,   25,    0,    0,    0,   51,
    0,    0,    0,    0,    0,    0,   45,   59,    0,    0,
    0,    0,    0,    0,    0,    6,    8,    0,    0,   12,
    0,    0,    0,  104,    0,    0,   95,    0,   44,    0,
   46,    0,    5,    7,   21,    0,    0,    0,    0,    0,
   97,    0,   43,   45,  105,    0,  101,   33,  103,   33,
    0,  106,    0,   92,
};
static const YYINT yydgoto[] = {                          2,
  193,   53,    3,    4,   54,   37,  125,   11,   38,   57,
  108,   15,   59,   60,   61,   62,   63,   64,   65,   12,
   39,  132,   66,  133,   74,   41,   42,   68,   43,   44,
   45,  134,  161,   16,
};
static const YYINT yysindex[] = {                      -290,
    0,    0,    0,    0, -267, -263,    0,    0, -290,  -39,
    0,    0,  300,    0, -259, -112, -290, -267,    0,    0,
    0,    0,    0,    0,    0, -237,    0,  300, -224, -238,
  300,  300,    0,    0,    0,    0, -253,    0,    0,  664,
  135,    0,    0,    0,    0,    0, -208, -172, -169, -238,
  -26,    0,    0,    0,  -94, -184,  318,  -13,    0, -145,
    0,    0,    0,    0, -144, -140,    0,    0, -150, -121,
  696,    0, -126, -106, -113,    0,  696,  553,  227,  300,
  300,  300,  300,  300,  300,  300,  300,  300,  300,  300,
  300,  300,    0,  -93,  -93,  -93,  -93,  -93,  -93,  -93,
  -93,  300,  300,  318,    0,    0,    0,  105,  227,    0,
  300, -160,    0,  696,    0, -100,    0,    0,  -95,    0,
    0,    0,  259, -290,  -90, -238,    0,    0,    0,    0,
 -226,  -87,  696, -191,  441,  696,  696,  696,  696,  696,
  696,  696,  696,  696,  696,  696,  696,    0,    0,    0,
    0,    0,    0,    0,    0,  571,  589, -253,    0,  696,
  -89,    0, -253,  184,  300,    0,    0, -102,  696,    0,
  135, -288, -290,  -78,  -39, -290,    0,    0,  117,  -74,
  300,  -64,  -68,  696,  282,    0,    0, -288,  -39,    0,
 -150, -216,  -36,    0,  -28,  168,    0,  680,    0,  -62,
    0, -188,    0,    0,    0,  -47, -113,  -54,  117,  117,
    0,  318,    0,    0,    0,  -38,    0,    0,    0,    0,
  -41,    0,  -74,    0,
};
static const YYINT yyrindex[] = {                      -274,
    0,    0,    0,    0,    0,  234,    0,    0,    1,    0,
    0,    0,    0,    0,    0,    0,  258,  260,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  349,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -21,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  262,    0,
 -228,    0,    0,    0,  372,    0, -178,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  628,    0, -207,  457,  -31,    0,    0,    0,    0,
    0,    0,    0,  -27,    0,    0,    0,    0,    0,    0,
  607,    0, -138,    0,    0, -164,  -80,  -20,   -3,   45,
   98,  110,  172,  215,  223,  244,  254,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  499,    0, -246,
    0,    0,  478,    0,    0,    0,  517,  535, -174,    0,
 -111,    0,  -27,  -34,    0,  395,    0,    0,    0,    0,
    0,  647,    0, -210,    0,    0,    0,    0,    0,    0,
  418,    0,   41,    0,   54,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  -21,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
  -97,    0,    0,  263,   33,   -5, -154, -158,   -8,   -6,
  250,  213,  -49,    0,    0,    0,    0, -153,  -50, -157,
    0,    0,    0,    5,  153,  257,   18,    0,    0,    0,
    0,  -52,   67,    3,
};
#define YYTABLESIZE 981
static const YYINT yytable[] = {                         10,
   41,    6,    5,   26,  116,   13,  113,   56,  120,  183,
   55,   18,   10,  186,  187,   41,    1,   40,    8,   69,
  190,   41,    6,   73,   75,  195,  197,   14,    7,  203,
  204,   46,   71,   67,  205,   77,   78,    9,   79,    8,
   80,   94,   56,    1,  105,   55,   94,   76,   26,   56,
    9,  112,   55,  159,   70,  218,  220,    7,  120,   70,
   70,  114,  175,  126,   70,   79,   70,   80,   67,  224,
   50,    7,   72,  131,  115,   67,  206,  115,  115,    7,
   47,  116,  115,  102,  135,  136,  137,  138,  139,  140,
  141,  142,  143,  144,  145,  146,  147,  165,  158,   56,
  165,  177,   55,  110,  214,  163,  156,  157,  160,   65,
   65,  217,  219,   50,   65,   77,   65,  168,   50,  103,
  174,  115,  104,   81,   81,   67,  172,  169,   81,  194,
   81,  164,  202,   80,  123,   19,   20,   21,   22,   23,
   24,  208,  121,  122,   19,   20,   21,   22,   23,   24,
  116,   47,  127,   48,  116,   49,    8,  126,  131,  194,
  194,  159,   19,   20,   21,   22,   23,   24,  126,  184,
   56,  124,  128,   55,   50,  188,   52,   51,  191,  131,
   80,   52,  126,    7,   25,  198,  207,   56,  165,  185,
   55,   80,   30,   25,   52,  166,   67,  109,  181,   80,
   56,   56,  173,   55,   55,  176,  158,   82,   82,   67,
  189,   25,   82,   67,   82,  196,  160,   19,   20,   21,
   22,   23,   24,  199,  200,  213,   67,   67,  209,  115,
   19,   20,   21,   22,   23,   24,  210,   47,  216,   48,
  215,   49,   13,   19,   20,   21,   22,   23,   24,  222,
   47,  223,   48,   56,   49,   13,   48,   41,   22,    4,
   50,    3,   41,   51,  106,   58,   25,   74,   74,    7,
  119,   17,   74,   50,   74,  170,   51,  117,  221,   25,
  107,    0,    7,    0,   72,   72,    0,    0,    0,   72,
   41,   72,   25,  118,    0,    0,   41,   99,   99,   99,
   99,   99,   99,    0,   99,    0,   99,    0,   99,   99,
   33,   33,   33,   33,   33,   33,    0,   33,    0,   33,
    0,   33,   33,    0,    0,    0,    0,   99,    0,    0,
   99,   99,   71,   71,    0,    0,   99,   71,    0,   71,
   33,    0,    0,   33,   33,    0,   99,   99,    0,   33,
  148,  149,  150,  151,  152,  153,  154,  155,    0,   33,
   33,   19,   20,   21,   22,   23,   24,    0,   47,    0,
   48,    0,   49,   19,   20,   21,   22,   23,   24,  171,
   47,    0,   48,    0,   49,   73,   73,    0,    0,    0,
   73,   50,   73,    0,   51,  162,    0,   79,   79,    0,
    7,    0,   79,   50,   79,   94,   51,   95,  192,    0,
   25,  118,    7,    0,   96,   97,   98,   99,  100,  101,
    0,    0,   25,  118,   19,   20,   21,   22,   23,   24,
    0,   47,    0,   48,    0,   49,    0,    0,    0,    0,
   19,   20,   21,   22,   23,   24,    0,    0,    0,    0,
    0,    0,    0,   27,   50,   28,    0,   51,  211,   78,
   78,    0,   29,    7,   78,    0,   78,    0,    0,   30,
   31,    0,    0,   25,  118,   32,  182,    0,    0,    7,
    0,   33,   34,   35,   36,    0,    0,    0,    0,   25,
   41,   41,   41,   41,   41,   41,   27,   41,   28,   41,
    0,   41,   76,   76,    0,   29,    0,   76,    0,   76,
   77,   77,   30,   31,    0,   77,    0,   77,   32,  130,
   41,    0,    7,   41,   33,   34,   35,   36,  167,   41,
   28,   75,   75,    0,    0,    0,   75,   29,   75,   41,
    0,   80,   80,    0,   30,   31,   80,    0,   80,    0,
   32,   27,    0,   28,    7,   72,   33,   34,   35,   36,
   29,    0,    0,    0,    0,    0,    0,   30,   31,   27,
    0,   28,    0,   32,  201,    0,    0,    7,   29,   33,
   34,   35,   36,    0,    0,   30,   31,   27,    0,   28,
    0,   32,    0,    0,    0,    7,   29,   33,   34,   35,
   36,    0,    0,   30,  111,    0,    0,    0,    0,   32,
    0,    0,    0,    7,    0,   33,   34,   35,   36,   60,
    0,   60,   60,    0,   60,   60,   60,    0,   60,   60,
   60,   60,   60,   60,    0,    0,   60,   60,    0,    0,
    0,   60,  112,   60,  112,  112,    0,  112,  112,  112,
    0,  112,  112,  112,  112,  112,  112,    0,    0,  112,
  112,    0,    0,    0,  112,   41,  112,   41,   41,    0,
   41,   41,   41,    0,   41,   41,   41,   41,   41,   41,
    0,    0,   41,   41,    0,    0,    0,   41,   11,   41,
   11,   11,    0,   11,   11,   11,    0,   11,   11,   11,
   11,   11,   11,    0,    0,   11,   11,    0,    0,    0,
   11,   81,   11,   82,   83,    0,   84,   85,   86,    0,
   87,   88,   89,   90,   91,   92,    0,   63,    0,   63,
   63,   57,   63,   63,   63,  178,   63,   63,   63,   63,
   63,   63,    0,    0,   63,   63,    0,    0,   60,   63,
   60,   60,  114,   60,   60,   60,    0,   60,   60,   60,
   60,   60,   60,    0,    0,   60,   60,    0,    0,   60,
   60,   60,   60,   56,   60,   60,   60,    0,   60,   60,
   60,   60,   60,   60,    0,    0,   60,   69,    0,   69,
   69,   60,   69,   69,   69,    0,   69,   69,   69,   69,
   69,   69,    0,    0,   55,   60,    0,   60,   60,   55,
   60,   60,   60,    0,   60,   60,   60,   60,   60,   60,
    0,    0,   60,   81,    0,   82,   83,   60,   84,   85,
   86,    0,   87,   88,   89,   90,   91,   92,    0,    0,
    0,   81,    0,   82,   83,  129,   84,   85,   86,    0,
   87,   88,   89,   90,   91,   92,    0,    0,    0,   81,
    0,   82,   83,  179,   84,   85,   86,    0,   87,   88,
   89,   90,   91,   92,    0,    0,    0,   60,    0,   60,
   60,  180,   60,   60,   60,    0,   60,   60,   60,   60,
   60,   60,    0,    0,    0,    0,    0,    0,   60,   13,
   60,   60,   56,   60,   60,   60,    0,   60,   60,   60,
   60,   60,   60,    0,    0,   60,   60,   46,    0,   46,
   46,    0,   46,   46,   46,    0,   46,   46,   46,   46,
   46,   46,    0,    0,   81,   46,   82,   83,    0,   84,
   85,   86,    0,   87,   88,   89,   90,   91,   92,    0,
   81,   93,   82,   83,    0,   84,   85,   86,    0,   87,
   88,   89,   90,   91,   92,    0,   81,  212,   82,   83,
    0,   84,   85,   86,    0,   87,   88,   89,   90,   91,
   92,
};
static const YYINT yycheck[] = {                          5,
    0,  290,    0,   10,   57,  269,   57,   16,   58,  164,
   16,    9,   18,  172,  172,  290,  307,   13,  307,   17,
  175,  296,  290,   29,   30,  179,  180,  291,  296,  188,
  188,  291,   28,   16,  189,   31,   32,    5,  292,  307,
  294,  288,   51,  307,   50,   51,  293,   30,   55,   58,
   18,   57,   58,  104,  292,  209,  210,  296,  108,  288,
  289,   57,  289,   70,  293,  292,  295,  294,   51,  223,
  287,  296,  297,   79,   57,   58,  293,  288,  289,  296,
  288,  289,  293,  292,   80,   81,   82,   83,   84,   85,
   86,   87,   88,   89,   90,   91,   92,  289,  104,  108,
  289,  293,  108,  288,  293,  111,  102,  103,  104,  288,
  289,  209,  210,  288,  293,  111,  295,  123,  293,  292,
  126,  104,  292,  288,  289,  108,  124,  123,  293,  179,
  295,  292,  185,  294,  275,  257,  258,  259,  260,  261,
  262,  192,  288,  288,  257,  258,  259,  260,  261,  262,
  289,  264,  279,  266,  293,  268,  307,  164,  164,  209,
  210,  212,  257,  258,  259,  260,  261,  262,  175,  165,
  179,  293,  279,  179,  287,  173,  288,  290,  176,  185,
  294,  293,  189,  296,  306,  181,  192,  196,  289,  292,
  196,  294,  286,  306,  307,  291,  179,  292,  288,  294,
  209,  210,  293,  209,  210,  293,  212,  288,  289,  192,
  289,  306,  293,  196,  295,  290,  212,  257,  258,  259,
  260,  261,  262,  288,  293,  288,  209,  210,  265,  212,
  257,  258,  259,  260,  261,  262,  265,  264,  293,  266,
  288,  268,  269,  257,  258,  259,  260,  261,  262,  288,
  264,  293,  266,  275,  268,  269,  288,    0,  293,    0,
  287,    0,  290,  290,  291,   16,  306,  288,  289,  296,
   58,    9,  293,  287,  295,  123,  290,  291,  212,  306,
  307,   -1,  296,   -1,  288,  289,   -1,   -1,   -1,  293,
  290,  295,  306,  307,   -1,   -1,  296,  257,  258,  259,
  260,  261,  262,   -1,  264,   -1,  266,   -1,  268,  269,
  257,  258,  259,  260,  261,  262,   -1,  264,   -1,  266,
   -1,  268,  269,   -1,   -1,   -1,   -1,  287,   -1,   -1,
  290,  291,  288,  289,   -1,   -1,  296,  293,   -1,  295,
  287,   -1,   -1,  290,  291,   -1,  306,  307,   -1,  296,
   94,   95,   96,   97,   98,   99,  100,  101,   -1,  306,
  307,  257,  258,  259,  260,  261,  262,   -1,  264,   -1,
  266,   -1,  268,  257,  258,  259,  260,  261,  262,  123,
  264,   -1,  266,   -1,  268,  288,  289,   -1,   -1,   -1,
  293,  287,  295,   -1,  290,  291,   -1,  288,  289,   -1,
  296,   -1,  293,  287,  295,  271,  290,  273,  292,   -1,
  306,  307,  296,   -1,  280,  281,  282,  283,  284,  285,
   -1,   -1,  306,  307,  257,  258,  259,  260,  261,  262,
   -1,  264,   -1,  266,   -1,  268,   -1,   -1,   -1,   -1,
  257,  258,  259,  260,  261,  262,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  270,  287,  272,   -1,  290,  291,  288,
  289,   -1,  279,  296,  293,   -1,  295,   -1,   -1,  286,
  287,   -1,   -1,  306,  307,  292,  293,   -1,   -1,  296,
   -1,  298,  299,  300,  301,   -1,   -1,   -1,   -1,  306,
  257,  258,  259,  260,  261,  262,  270,  264,  272,  266,
   -1,  268,  288,  289,   -1,  279,   -1,  293,   -1,  295,
  288,  289,  286,  287,   -1,  293,   -1,  295,  292,  293,
  287,   -1,  296,  290,  298,  299,  300,  301,  270,  296,
  272,  288,  289,   -1,   -1,   -1,  293,  279,  295,  306,
   -1,  288,  289,   -1,  286,  287,  293,   -1,  295,   -1,
  292,  270,   -1,  272,  296,  297,  298,  299,  300,  301,
  279,   -1,   -1,   -1,   -1,   -1,   -1,  286,  287,  270,
   -1,  272,   -1,  292,  293,   -1,   -1,  296,  279,  298,
  299,  300,  301,   -1,   -1,  286,  287,  270,   -1,  272,
   -1,  292,   -1,   -1,   -1,  296,  279,  298,  299,  300,
  301,   -1,   -1,  286,  287,   -1,   -1,   -1,   -1,  292,
   -1,   -1,   -1,  296,   -1,  298,  299,  300,  301,  271,
   -1,  273,  274,   -1,  276,  277,  278,   -1,  280,  281,
  282,  283,  284,  285,   -1,   -1,  288,  289,   -1,   -1,
   -1,  293,  271,  295,  273,  274,   -1,  276,  277,  278,
   -1,  280,  281,  282,  283,  284,  285,   -1,   -1,  288,
  289,   -1,   -1,   -1,  293,  271,  295,  273,  274,   -1,
  276,  277,  278,   -1,  280,  281,  282,  283,  284,  285,
   -1,   -1,  288,  289,   -1,   -1,   -1,  293,  271,  295,
  273,  274,   -1,  276,  277,  278,   -1,  280,  281,  282,
  283,  284,  285,   -1,   -1,  288,  289,   -1,   -1,   -1,
  293,  271,  295,  273,  274,   -1,  276,  277,  278,   -1,
  280,  281,  282,  283,  284,  285,   -1,  271,   -1,  273,
  274,  275,  276,  277,  278,  295,  280,  281,  282,  283,
  284,  285,   -1,   -1,  288,  289,   -1,   -1,  271,  293,
  273,  274,  275,  276,  277,  278,   -1,  280,  281,  282,
  283,  284,  285,   -1,   -1,  288,  289,   -1,   -1,  271,
  293,  273,  274,  275,  276,  277,  278,   -1,  280,  281,
  282,  283,  284,  285,   -1,   -1,  288,  271,   -1,  273,
  274,  293,  276,  277,  278,   -1,  280,  281,  282,  283,
  284,  285,   -1,   -1,  288,  271,   -1,  273,  274,  293,
  276,  277,  278,   -1,  280,  281,  282,  283,  284,  285,
   -1,   -1,  288,  271,   -1,  273,  274,  293,  276,  277,
  278,   -1,  280,  281,  282,  283,  284,  285,   -1,   -1,
   -1,  271,   -1,  273,  274,  293,  276,  277,  278,   -1,
  280,  281,  282,  283,  284,  285,   -1,   -1,   -1,  271,
   -1,  273,  274,  293,  276,  277,  278,   -1,  280,  281,
  282,  283,  284,  285,   -1,   -1,   -1,  271,   -1,  273,
  274,  293,  276,  277,  278,   -1,  280,  281,  282,  283,
  284,  285,   -1,   -1,   -1,   -1,   -1,   -1,  271,  293,
  273,  274,  275,  276,  277,  278,   -1,  280,  281,  282,
  283,  284,  285,   -1,   -1,  288,  289,  271,   -1,  273,
  274,   -1,  276,  277,  278,   -1,  280,  281,  282,  283,
  284,  285,   -1,   -1,  271,  289,  273,  274,   -1,  276,
  277,  278,   -1,  280,  281,  282,  283,  284,  285,   -1,
  271,  288,  273,  274,   -1,  276,  277,  278,   -1,  280,
  281,  282,  283,  284,  285,   -1,  271,  288,  273,  274,
   -1,  276,  277,  278,   -1,  280,  281,  282,  283,  284,
  285,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 308
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
"SQ_BRA_O","SQ_BRA_C","IDENTIFIER","STRING_LITERAL","CHAR_LITERAL",
"TRUE_LITERAL","FALSE_LITERAL","INTEGER_LITERAL","HEX_LITERAL","OCTA_LITERAL",
"BINARY_LITERAL","APOSTROPHE","KEY_CHARP","COMMENT","KET_FOR",0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : S",
"S : PROGRAM",
"PROGRAM : MULTI_PROC",
"MULTI_PROC : OPTIONAL_COMMENT PROC MULTI_PROC OPTIONAL_COMMENT",
"MULTI_PROC : OPTIONAL_COMMENT PROC OPTIONAL_COMMENT",
"PROC : ID PROCEDURE PARAN_O MULT_PARAMS PARAN_C OPTIONAL_COMMENT BLOCK_W_RETURN",
"PROC : ID PROCEDURE PARAN_O PARAN_C OPTIONAL_COMMENT BLOCK_W_RETURN",
"PROC : ID PROCEDURE PARAN_O MULT_PARAMS PARAN_C OPTIONAL_COMMENT BLOCK_W",
"PROC : ID PROCEDURE PARAN_O PARAN_C OPTIONAL_COMMENT BLOCK_W",
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
"ASSIGNMENT : LHS ASSIGN ID PARAN_O MULT_EXP PARAN_C",
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
"EXP : KEY_NULL",
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
"FOR_STETMENT : KEY_FOR PARAN_O ASS_OR_EXP SEMICOLON EXP SEMICOLON ASS_OR_EXP PARAN_C BLOCK",
"ASS_OR_EXP : ASSIGNMENT",
"ASS_OR_EXP : EXP",
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
#line 253 "parser.y"


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


#line 656 "y.tab.c"

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
#line 57 "parser.y"
	{printPreOrder(yystack.l_mark[0].n,0);}
break;
case 2:
#line 59 "parser.y"
	{yyval.n=makeNode("Begin:",yystack.l_mark[0].n,NULL,NULL,NULL);}
break;
case 3:
#line 61 "parser.y"
	{ yyval.n = makeNode("", yystack.l_mark[-2].n, yystack.l_mark[-1].n,NULL,NULL); }
break;
case 4:
#line 62 "parser.y"
	{ yyval.n = yystack.l_mark[-1].n; }
break;
case 5:
#line 65 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-6].n->token,yystack.l_mark[-5].n,yystack.l_mark[-3].n,yystack.l_mark[0].n,NULL);}
break;
case 6:
#line 67 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-5].n->token,yystack.l_mark[-4].n,yystack.l_mark[0].n,NULL,NULL);  }
break;
case 7:
#line 69 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-6].n->token,yystack.l_mark[-5].n,yystack.l_mark[-3].n,yystack.l_mark[0].n,NULL); }
break;
case 8:
#line 71 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-5].n->token,yystack.l_mark[-4].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 9:
#line 73 "parser.y"
	{ yyval.n = yystack.l_mark[0].n;}
break;
case 10:
#line 75 "parser.y"
	{yyval.n = yystack.l_mark[0].n;}
break;
case 11:
#line 78 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-4].n->token,yystack.l_mark[-2].n,NULL,NULL,NULL);}
break;
case 12:
#line 81 "parser.y"
	{ yyval.n = makeNode("",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 13:
#line 82 "parser.y"
	{yyval.n=yystack.l_mark[0].n;}
break;
case 14:
#line 85 "parser.y"
	{ yyval.n=makeNode("boolean",NULL,NULL,NULL,NULL); }
break;
case 15:
#line 86 "parser.y"
	{ yyval.n=makeNode("char",NULL,NULL,NULL,NULL); }
break;
case 16:
#line 87 "parser.y"
	{ yyval.n=makeNode("charp",NULL,NULL,NULL,NULL); }
break;
case 17:
#line 88 "parser.y"
	{ yyval.n=makeNode("int",NULL,NULL,NULL,NULL); }
break;
case 18:
#line 89 "parser.y"
	{ yyval.n=makeNode("intp",NULL,NULL,NULL,NULL); }
break;
case 19:
#line 90 "parser.y"
	{ yyval.n=makeNode("string",NULL,NULL,NULL,NULL); }
break;
case 20:
#line 91 "parser.y"
	{ yyval.n=makeNode("void",NULL,NULL,NULL,NULL); }
break;
case 21:
#line 95 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-3].n->token,yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 22:
#line 96 "parser.y"
	{yyval.n = makeNode(yystack.l_mark[-1].n->token,yystack.l_mark[0].n,NULL,NULL,NULL);}
break;
case 23:
#line 99 "parser.y"
	{yyval.n = yystack.l_mark[-1].n;}
break;
case 24:
#line 100 "parser.y"
	{yyval.n=NULL;}
break;
case 25:
#line 103 "parser.y"
	{yyval.n = makeNode("",yystack.l_mark[-2].n,yystack.l_mark[-1].n,NULL,NULL);}
break;
case 26:
#line 104 "parser.y"
	{yyval.n = yystack.l_mark[-1].n;}
break;
case 27:
#line 107 "parser.y"
	{ yyval.n = makeNode("", yystack.l_mark[-1].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 28:
#line 108 "parser.y"
	{ yyval.n = yystack.l_mark[0].n ; }
break;
case 29:
#line 111 "parser.y"
	{ yyval.n = yystack.l_mark[-1].n; }
break;
case 30:
#line 112 "parser.y"
	{ yyval.n = yystack.l_mark[-1].n; }
break;
case 31:
#line 113 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 32:
#line 114 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 33:
#line 115 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 34:
#line 116 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 35:
#line 117 "parser.y"
	{ yyval.n = yystack.l_mark[-1].n; }
break;
case 36:
#line 118 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 37:
#line 119 "parser.y"
	{ yyval.n = NULL;}
break;
case 38:
#line 120 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 39:
#line 123 "parser.y"
	{}
break;
case 40:
#line 124 "parser.y"
	{}
break;
case 41:
#line 125 "parser.y"
	{}
break;
case 42:
#line 128 "parser.y"
	{ yyval.n = makeNode("return",yystack.l_mark[-1].n,NULL,NULL,NULL); }
break;
case 43:
#line 131 "parser.y"
	{ yyval.n = makeNode (yystack.l_mark[-5].n->token,yystack.l_mark[-4].n,yystack.l_mark[-2].n,NULL,NULL); }
break;
case 44:
#line 132 "parser.y"
	{ yyval.n = makeNode (yystack.l_mark[-4].n->token,yystack.l_mark[-3].n,NULL,NULL,NULL); }
break;
case 45:
#line 135 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-3].n->token,yystack.l_mark[-3].n, yystack.l_mark[-1].n,NULL,NULL); }
break;
case 46:
#line 136 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-2].n->token,yystack.l_mark[-2].n, NULL,NULL,NULL); }
break;
case 47:
#line 140 "parser.y"
	{ yyval.n = makeNode (yystack.l_mark[-1].n->token,yystack.l_mark[-1].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 48:
#line 141 "parser.y"
	{ yyval.n = makeNode (yystack.l_mark[-1].n->token,yystack.l_mark[-1].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 49:
#line 142 "parser.y"
	{ yyval.n = makeNode (yystack.l_mark[-1].n->token,yystack.l_mark[-1].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 50:
#line 147 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL); }
break;
case 51:
#line 148 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL);}
break;
case 52:
#line 149 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL);}
break;
case 53:
#line 150 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-5].n, yystack.l_mark[-3].n,yystack.l_mark[-1].n,NULL);   }
break;
case 54:
#line 151 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-4].n, yystack.l_mark[-2].n,NULL,NULL); }
break;
case 55:
#line 152 "parser.y"
	{yyval.n = makeNode("=", yystack.l_mark[-2].n, makeNode("NULL POINTER",NULL,NULL,NULL,NULL),NULL,NULL); }
break;
case 56:
#line 156 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 57:
#line 157 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 58:
#line 158 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 59:
#line 161 "parser.y"
	{ yyval.n = makeNode("", yystack.l_mark[-3].n, yystack.l_mark[-1].n,NULL,NULL) ;}
break;
case 60:
#line 163 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 61:
#line 164 "parser.y"
	{ yyval.n = makeNode(yytext, NULL, NULL,NULL,NULL); }
break;
case 62:
#line 165 "parser.y"
	{ yyval.n = makeNode(yytext, NULL, NULL,NULL,NULL); }
break;
case 63:
#line 166 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 64:
#line 167 "parser.y"
	{ yyval.n = makeNode("boolean", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 65:
#line 168 "parser.y"
	{ yyval.n = makeNode("dereference", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 66:
#line 169 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 67:
#line 170 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 68:
#line 171 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 69:
#line 172 "parser.y"
	{ yyval.n = makeNode("null",NULL,NULL,NULL,NULL);}
break;
case 70:
#line 173 "parser.y"
	{ yyval.n = makeNode("!", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 71:
#line 174 "parser.y"
	{ yyval.n = makeNode("+",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 72:
#line 175 "parser.y"
	{ yyval.n = makeNode("-",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 73:
#line 176 "parser.y"
	{ yyval.n = makeNode("*",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 74:
#line 177 "parser.y"
	{ yyval.n = makeNode("/",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 75:
#line 178 "parser.y"
	{ yyval.n = makeNode("<",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 76:
#line 179 "parser.y"
	{ yyval.n = makeNode(">",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 77:
#line 180 "parser.y"
	{ yyval.n = makeNode("<=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 78:
#line 181 "parser.y"
	{ yyval.n = makeNode(">=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 79:
#line 182 "parser.y"
	{ yyval.n = makeNode("==",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 80:
#line 183 "parser.y"
	{ yyval.n = makeNode("!=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 81:
#line 184 "parser.y"
	{ yyval.n = makeNode("&&",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 82:
#line 185 "parser.y"
	{ yyval.n = makeNode("||",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 83:
#line 186 "parser.y"
	{ yyval.n = makeNode("<",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 84:
#line 187 "parser.y"
	{ yyval.n = makeNode(">",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 85:
#line 188 "parser.y"
	{ yyval.n = makeNode("<=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 86:
#line 189 "parser.y"
	{ yyval.n = makeNode(">=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 87:
#line 190 "parser.y"
	{ yyval.n = makeNode("==",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 88:
#line 191 "parser.y"
	{ yyval.n = makeNode("!=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 89:
#line 192 "parser.y"
	{ yyval.n = makeNode("&&",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 90:
#line 193 "parser.y"
	{ yyval.n = makeNode("||",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 91:
#line 194 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 92:
#line 197 "parser.y"
	{ yyval.n = makeNode("for",yystack.l_mark[-6].n,yystack.l_mark[-4].n,yystack.l_mark[-2].n,NULL); }
break;
case 93:
#line 200 "parser.y"
	{yyval.n = yystack.l_mark[0].n;}
break;
case 94:
#line 201 "parser.y"
	{yyval.n = yystack.l_mark[0].n;}
break;
case 95:
#line 204 "parser.y"
	{ yyval.n = makeNode("while",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 96:
#line 207 "parser.y"
	{yyval.n = yystack.l_mark[-1].n;}
break;
case 97:
#line 208 "parser.y"
	{yyval.n = makeNode("{}",NULL,NULL,NULL,NULL);}
break;
case 98:
#line 211 "parser.y"
	{yyval.n = makeNode("if",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 99:
#line 212 "parser.y"
	{yyval.n = makeNode("if",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 100:
#line 213 "parser.y"
	{ yyval.n = makeNode("if", yystack.l_mark[-4].n, makeNode("else", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL),NULL,NULL);}
break;
case 101:
#line 214 "parser.y"
	{ yyval.n = makeNode("if", yystack.l_mark[-4].n, makeNode("else", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL),NULL,NULL);}
break;
case 102:
#line 215 "parser.y"
	{ yyval.n = makeNode("if", yystack.l_mark[-4].n, makeNode("else", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL),NULL,NULL);}
break;
case 103:
#line 216 "parser.y"
	{ yyval.n = makeNode("if", yystack.l_mark[-4].n, makeNode("else", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL),NULL,NULL);}
break;
case 104:
#line 219 "parser.y"
	{yyval.n = yystack.l_mark[0].n;}
break;
case 105:
#line 220 "parser.y"
	{yyval.n = NULL;}
break;
case 106:
#line 221 "parser.y"
	{yyval.n = yystack.l_mark[-2].n;}
break;
case 107:
#line 224 "parser.y"
	{ yyval.n = makeNode("true", NULL,NULL,NULL,NULL); }
break;
case 108:
#line 225 "parser.y"
	{ yyval.n = makeNode("false", NULL, NULL,NULL,NULL); }
break;
case 109:
#line 230 "parser.y"
	{ yyval.n = makeNode("",yystack.l_mark[-1].n,NULL,NULL,NULL); }
break;
case 110:
#line 233 "parser.y"
	{ yyval.n = makeNode("ABS",yystack.l_mark[-1].n,NULL,NULL,NULL); }
break;
case 111:
#line 234 "parser.y"
	{ yyval.n = makeNode("ABS",yystack.l_mark[-1].n,NULL,NULL,NULL); }
break;
case 112:
#line 237 "parser.y"
	{ yyval.n = makeNode("&", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 113:
#line 238 "parser.y"
	{ yyval.n = makeNode("&", yystack.l_mark[0].n ,NULL,NULL,NULL); }
break;
case 114:
#line 241 "parser.y"
	{ yyval.n = makeNode("^", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 115:
#line 244 "parser.y"
	{ yyval.n = makeNode(""/*Multiple Expressions*/,yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 116:
#line 245 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 117:
#line 248 "parser.y"
	{ yyval.n = makeNode(yytext,NULL,NULL,NULL,NULL); }
break;
case 118:
#line 251 "parser.y"
	{yyval.n = makeNode(yytext,NULL,NULL,NULL,NULL); }
break;
#line 1330 "y.tab.c"
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

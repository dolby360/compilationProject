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

    #include "ast/print_ast.h"
    #include "symb/symb.h"
    #include "definitions.h"

    
#line 18 "parser.y"
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
#line 50 "y.tab.c"

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
   39,    0,    1,    2,    0,   14,   15,   20,   17,   19,
   18,    0,   16,   40,    0,    9,    0,   10,    0,   24,
    0,    0,    0,    0,  118,    0,   69,    0,    0,    0,
    0,    0,   62,  107,  108,   61,    0,   66,   91,    0,
    0,   63,   64,   67,   68,   26,    0,    0,    0,    0,
    0,   37,   36,   34,    0,    0,    0,    0,   28,    0,
   38,   31,   32,   33,    0,    0,   57,   58,    0,    0,
    0,  117,    0,    0,    0,  113,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   42,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  114,   24,   37,    0,    0,   35,
    0,    0,   49,    0,    0,   48,   23,   37,    0,   27,
   30,   29,    0,    0,    0,    0,  110,  111,  109,   46,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   89,   90,   87,
   86,   84,   85,   83,   88,    0,    0,    0,   93,    0,
    0,   96,    0,    0,    0,   25,    0,    0,    0,   51,
    0,    0,    0,    0,    0,    0,   45,   59,    0,    0,
    0,    0,    0,  115,    0,    6,    8,    0,    0,   12,
    0,    0,    0,  104,    0,    0,   95,    0,   44,    0,
   46,    0,    5,    7,   21,    0,    0,    0,    0,    0,
   97,    0,   43,   45,  105,    0,  101,   33,  103,   33,
    0,  106,    0,   92,
};
static const YYINT yydgoto[] = {                          2,
  193,   53,    3,    4,   54,   37,  125,   16,   38,   57,
  108,   21,   59,   60,   61,   62,   63,   64,   65,   18,
   39,  132,   66,  133,   74,   41,   42,   68,   43,   44,
   45,  134,  161,   22,
};
static const YYINT yysindex[] = {                      -286,
    0,    0,    0,    0,   -9,    0,    0,    0,    0,    0,
    0, -265,    0,    0, -286,    0, -274,    0,  355,    0,
 -260,  199, -286,   -9,    0, -244,    0,  355, -226, -274,
  355,  355,    0,    0,    0,    0, -257,    0,    0,  736,
  154,    0,    0,    0,    0,    0, -238, -214, -200, -274,
  -50,    0,    0,    0, -215, -202,  373,    9,    0, -183,
    0,    0,    0,    0, -181, -159,    0,    0, -182, -197,
  768,    0, -160, -151, -167,    0,  768,  608,  282,  355,
  355,  355,  355,  355,  355,  355,  355,  355,  355,  355,
  355,  355,    0, -157, -157, -157, -157, -157, -157, -157,
 -157,  355,  355,  373,    0,    0,    0,  124,  282,    0,
  355, -204,    0,  719,    0,    0,    0,    0, -161,    0,
    0,    0,  314, -286, -147, -274,    0,    0,    0,    0,
 -236, -145,  719, -144,  496,  768,  768,  768,  768,  768,
  768,  768,  768,  768,  768,  768,  768,    0,    0,    0,
    0,    0,    0,    0,    0,  626,  644, -257,    0,  768,
 -156,    0, -257,  239,  355,    0,    0, -188,  768,    0,
  154, -275, -286, -139,  -34, -286,    0,    0,  136, -136,
  355, -280, -133,    0,  337,    0,    0, -275,  -34,    0,
 -182, -220, -104,    0,  -99,  187,    0,  752,    0, -279,
    0, -123,    0,    0,    0, -117, -167, -121,  136,  136,
    0,  373,    0,    0,    0, -111,    0,    0,    0,    0,
 -105,    0, -136,    0,
};
static const YYINT yyrindex[] = {                       113,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  289,    0,    0,    1,    0,    0,    0,    0,    0,
    0,    0,  191,  195,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  404,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -79,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  197,    0,
 -206,    0,    0,    0,  427,    0, -194,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  700,    0,  -88,  512,    0,    0,    0,    0,    0,
    0,    0,    0,  -85,    0,    0,    0,    0,    0,    0,
  662,    0, -255,    0,    0, -175, -130, -106,  -57,   13,
   64,  117,  129,  180,  192,  215,  224,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  554,    0, -219,
    0,    0,  533,    0,    0,    0,  572,  590, -185,    0,
 -171,    0,  -85,  -80,    0,  450,    0,    0,    0,    0,
    0,  680,    0,    0,    0,    0,    0,    0,    0,    0,
  473,    0,   60,    0,   73,    0,    0,    0,    0,  -85,
    0,    0,    0,    0,    0,    0,  -79,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
  -86,    0,    0,  200,   25,  -11, -109, -165,  -17,    5,
  198,  159,  -58,    0,    0,    0,    0, -166,  -45, -152,
    0,    0,    0,   53,   98,  188,   -6,    0,    0,    0,
    0,  -54,   10,    2,
};
#define YYTABLESIZE 1053
static const YYINT yytable[] = {                        120,
   41,    5,  116,   19,   56,   26,  186,  199,  213,   17,
   55,  113,  195,  197,   12,   67,   24,   73,   75,  187,
    1,   25,  203,   76,   69,   20,    1,    1,   17,   15,
   46,   14,  116,   56,   79,  204,   80,  116,  105,   55,
   56,    1,  218,  220,   67,  112,   55,   70,   15,  120,
  115,   67,  175,  102,  183,   79,  224,   80,  159,    6,
    7,    8,    9,   10,   11,  190,   50,  131,   94,   25,
   72,   40,  206,   94,  126,   25,  109,  103,   80,  205,
   71,   70,   70,   77,   78,  110,   70,  164,   70,   80,
   56,  104,  158,   65,   65,  124,   55,  115,   65,  163,
   65,   67,   50,  185,  121,   80,  122,   50,   13,  114,
  184,  168,   81,   81,  174,  123,   52,   81,  127,   81,
  194,   52,  217,  219,   14,  172,   80,  128,   30,  166,
  202,  181,  135,  136,  137,  138,  139,  140,  141,  142,
  143,  144,  145,  146,  147,  173,  208,  176,  177,  189,
  194,  194,  131,  196,  156,  157,  160,   82,   82,  200,
  209,   56,   82,   77,   82,  210,  159,   55,  126,  214,
  215,  216,   67,  131,  188,  169,  222,  191,   56,  126,
  207,   74,   74,  172,   55,   67,   74,  223,   74,   67,
   41,   56,   56,  126,    4,   56,    3,   55,   55,   47,
  158,  188,   67,   67,   41,  115,    6,    7,    8,    9,
   10,   11,   22,   47,   23,   48,  119,   49,   19,   58,
  170,  221,    6,    7,    8,    9,   10,   11,    0,    0,
   72,   72,    0,  198,    0,   72,   50,   72,    0,   51,
  106,    0,    0,    0,    0,   25,    0,    6,    7,    8,
    9,   10,   11,    0,    0,   13,  107,   41,   41,   41,
   41,   41,   41,    0,  160,    6,    7,    8,    9,   10,
   11,   13,   47,    0,   48,    0,   49,   19,    0,    0,
   12,  148,  149,  150,  151,  152,  153,  154,  155,    0,
   41,    0,    0,    0,    0,   50,   13,   14,   51,  117,
   71,   71,    0,    0,   25,   71,   41,   71,    0,    0,
  171,    0,    0,    0,   13,  118,   99,   99,   99,   99,
   99,   99,    0,   99,    0,   99,    0,   99,   99,   33,
   33,   33,   33,   33,   33,    0,   33,    0,   33,    0,
   33,   33,    0,    0,    0,    0,   99,    0,    0,   99,
   99,   73,   73,    0,    0,   99,   73,    0,   73,   33,
    0,    0,   33,   33,    0,   99,   99,    0,   33,   41,
   41,   41,   41,   41,   41,    0,    0,    0,   33,   33,
    6,    7,    8,    9,   10,   11,    0,   47,    0,   48,
    0,   49,    6,    7,    8,    9,   10,   11,    0,   47,
    0,   48,   41,   49,   79,   79,    0,    0,    0,   79,
   50,   79,    0,   51,  162,    0,   78,   78,   41,   25,
    0,   78,   50,   78,   94,   51,   95,  192,    0,   13,
  118,   25,    0,   96,   97,   98,   99,  100,  101,    0,
    0,   13,  118,    6,    7,    8,    9,   10,   11,    0,
   47,    0,   48,    0,   49,    6,    7,    8,    9,   10,
   11,    0,   47,    0,   48,    0,   49,   76,   76,    0,
    0,    0,   76,   50,   76,    0,   51,  211,    0,   77,
   77,    0,   25,    0,   77,   50,   77,    0,   51,    0,
    0,    0,   13,  118,   25,    6,    7,    8,    9,   10,
   11,    0,   75,   75,   13,   52,    0,   75,   27,   75,
   28,   80,   80,    0,    0,    0,   80,   29,   80,    0,
    0,    0,    0,    0,   30,   31,    0,    0,    0,    0,
   32,  182,    0,    0,   25,    0,   33,   34,   35,   36,
    0,    0,    0,    0,   13,   41,   41,   41,   41,   41,
   41,   27,   41,   28,   41,    0,   41,    0,    0,    0,
   29,    0,    0,    0,    0,    0,    0,   30,   31,    0,
    0,    0,    0,   32,  130,   41,    0,   25,   41,   33,
   34,   35,   36,  167,   41,   28,    0,    0,    0,    0,
    0,    0,   29,    0,   41,    0,    0,    0,    0,   30,
   31,    0,    0,    0,    0,   32,   27,    0,   28,   25,
   72,   33,   34,   35,   36,   29,    0,    0,    0,    0,
    0,    0,   30,   31,   27,    0,   28,    0,   32,  201,
    0,    0,   25,   29,   33,   34,   35,   36,    0,    0,
   30,   31,   27,    0,   28,    0,   32,    0,    0,    0,
   25,   29,   33,   34,   35,   36,    0,    0,   30,  111,
    0,    0,    0,    0,   32,    0,    0,    0,   25,    0,
   33,   34,   35,   36,   60,    0,   60,   60,    0,   60,
   60,   60,    0,   60,   60,   60,   60,   60,   60,    0,
    0,   60,   60,    0,    0,    0,   60,  112,   60,  112,
  112,    0,  112,  112,  112,    0,  112,  112,  112,  112,
  112,  112,    0,    0,  112,  112,    0,    0,    0,  112,
   41,  112,   41,   41,    0,   41,   41,   41,    0,   41,
   41,   41,   41,   41,   41,    0,    0,   41,   41,    0,
    0,    0,   41,   11,   41,   11,   11,    0,   11,   11,
   11,    0,   11,   11,   11,   11,   11,   11,    0,    0,
   11,   11,    0,    0,    0,   11,   81,   11,   82,   83,
    0,   84,   85,   86,    0,   87,   88,   89,   90,   91,
   92,    0,   63,    0,   63,   63,   57,   63,   63,   63,
  178,   63,   63,   63,   63,   63,   63,    0,    0,   63,
   63,    0,    0,   60,   63,   60,   60,  114,   60,   60,
   60,    0,   60,   60,   60,   60,   60,   60,    0,    0,
   60,   60,    0,    0,   60,   60,   60,   60,   56,   60,
   60,   60,    0,   60,   60,   60,   60,   60,   60,    0,
    0,   60,   69,    0,   69,   69,   60,   69,   69,   69,
    0,   69,   69,   69,   69,   69,   69,    0,    0,   55,
   60,    0,   60,   60,   55,   60,   60,   60,    0,   60,
   60,   60,   60,   60,   60,    0,    0,   60,   81,    0,
   82,   83,   60,   84,   85,   86,    0,   87,   88,   89,
   90,   91,   92,    0,    0,    0,   81,    0,   82,   83,
  129,   84,   85,   86,    0,   87,   88,   89,   90,   91,
   92,    0,    0,    0,   81,    0,   82,   83,  179,   84,
   85,   86,    0,   87,   88,   89,   90,   91,   92,    0,
    0,    0,   60,    0,   60,   60,  180,   60,   60,   60,
    0,   60,   60,   60,   60,   60,   60,    0,    0,    0,
   46,    0,   46,   46,   13,   46,   46,   46,    0,   46,
   46,   46,   46,   46,   46,    0,    0,    0,   46,   41,
   60,    0,   60,   60,   56,   60,   60,   60,    0,   60,
   60,   60,   60,   60,   60,    0,    0,   60,   60,   81,
    0,   82,   83,    0,   84,   85,   86,    0,   87,   88,
   89,   90,   91,   92,    0,    0,   81,  165,   82,   83,
    0,   84,   85,   86,    0,   87,   88,   89,   90,   91,
   92,    0,   81,   93,   82,   83,    0,   84,   85,   86,
    0,   87,   88,   89,   90,   91,   92,    0,   81,  212,
   82,   83,    0,   84,   85,   86,    0,   87,   88,   89,
   90,   91,   92,
};
static const YYINT yycheck[] = {                         58,
    0,    0,   57,  269,   22,   17,  172,  288,  288,    5,
   22,   57,  179,  180,  290,   22,   15,   29,   30,  172,
  307,  296,  188,   30,   23,  291,  307,  307,   24,    5,
  291,  307,  288,   51,  292,  188,  294,  293,   50,   51,
   58,  307,  209,  210,   51,   57,   58,  292,   24,  108,
   57,   58,  289,  292,  164,  292,  223,  294,  104,  257,
  258,  259,  260,  261,  262,  175,  287,   79,  288,  296,
  297,   19,  293,  293,   70,  296,  292,  292,  294,  189,
   28,  288,  289,   31,   32,  288,  293,  292,  295,  294,
  108,  292,  104,  288,  289,  293,  108,  104,  293,  111,
  295,  108,  288,  292,  288,  294,  288,  293,  306,   57,
  165,  123,  288,  289,  126,  275,  288,  293,  279,  295,
  179,  293,  209,  210,  307,  124,  294,  279,  286,  291,
  185,  288,   80,   81,   82,   83,   84,   85,   86,   87,
   88,   89,   90,   91,   92,  293,  192,  293,  293,  289,
  209,  210,  164,  290,  102,  103,  104,  288,  289,  293,
  265,  179,  293,  111,  295,  265,  212,  179,  164,  293,
  288,  293,  179,  185,  173,  123,  288,  176,  196,  175,
  192,  288,  289,  182,  196,  192,  293,  293,  295,  196,
    0,  209,  210,  189,    0,  275,    0,  209,  210,  288,
  212,  200,  209,  210,  290,  212,  257,  258,  259,  260,
  261,  262,  293,  264,   15,  266,   58,  268,  269,   22,
  123,  212,  257,  258,  259,  260,  261,  262,   -1,   -1,
  288,  289,   -1,  181,   -1,  293,  287,  295,   -1,  290,
  291,   -1,   -1,   -1,   -1,  296,   -1,  257,  258,  259,
  260,  261,  262,   -1,   -1,  306,  307,  257,  258,  259,
  260,  261,  262,   -1,  212,  257,  258,  259,  260,  261,
  262,  306,  264,   -1,  266,   -1,  268,  269,   -1,   -1,
  290,   94,   95,   96,   97,   98,   99,  100,  101,   -1,
  290,   -1,   -1,   -1,   -1,  287,  306,  307,  290,  291,
  288,  289,   -1,   -1,  296,  293,  306,  295,   -1,   -1,
  123,   -1,   -1,   -1,  306,  307,  257,  258,  259,  260,
  261,  262,   -1,  264,   -1,  266,   -1,  268,  269,  257,
  258,  259,  260,  261,  262,   -1,  264,   -1,  266,   -1,
  268,  269,   -1,   -1,   -1,   -1,  287,   -1,   -1,  290,
  291,  288,  289,   -1,   -1,  296,  293,   -1,  295,  287,
   -1,   -1,  290,  291,   -1,  306,  307,   -1,  296,  257,
  258,  259,  260,  261,  262,   -1,   -1,   -1,  306,  307,
  257,  258,  259,  260,  261,  262,   -1,  264,   -1,  266,
   -1,  268,  257,  258,  259,  260,  261,  262,   -1,  264,
   -1,  266,  290,  268,  288,  289,   -1,   -1,   -1,  293,
  287,  295,   -1,  290,  291,   -1,  288,  289,  306,  296,
   -1,  293,  287,  295,  271,  290,  273,  292,   -1,  306,
  307,  296,   -1,  280,  281,  282,  283,  284,  285,   -1,
   -1,  306,  307,  257,  258,  259,  260,  261,  262,   -1,
  264,   -1,  266,   -1,  268,  257,  258,  259,  260,  261,
  262,   -1,  264,   -1,  266,   -1,  268,  288,  289,   -1,
   -1,   -1,  293,  287,  295,   -1,  290,  291,   -1,  288,
  289,   -1,  296,   -1,  293,  287,  295,   -1,  290,   -1,
   -1,   -1,  306,  307,  296,  257,  258,  259,  260,  261,
  262,   -1,  288,  289,  306,  307,   -1,  293,  270,  295,
  272,  288,  289,   -1,   -1,   -1,  293,  279,  295,   -1,
   -1,   -1,   -1,   -1,  286,  287,   -1,   -1,   -1,   -1,
  292,  293,   -1,   -1,  296,   -1,  298,  299,  300,  301,
   -1,   -1,   -1,   -1,  306,  257,  258,  259,  260,  261,
  262,  270,  264,  272,  266,   -1,  268,   -1,   -1,   -1,
  279,   -1,   -1,   -1,   -1,   -1,   -1,  286,  287,   -1,
   -1,   -1,   -1,  292,  293,  287,   -1,  296,  290,  298,
  299,  300,  301,  270,  296,  272,   -1,   -1,   -1,   -1,
   -1,   -1,  279,   -1,  306,   -1,   -1,   -1,   -1,  286,
  287,   -1,   -1,   -1,   -1,  292,  270,   -1,  272,  296,
  297,  298,  299,  300,  301,  279,   -1,   -1,   -1,   -1,
   -1,   -1,  286,  287,  270,   -1,  272,   -1,  292,  293,
   -1,   -1,  296,  279,  298,  299,  300,  301,   -1,   -1,
  286,  287,  270,   -1,  272,   -1,  292,   -1,   -1,   -1,
  296,  279,  298,  299,  300,  301,   -1,   -1,  286,  287,
   -1,   -1,   -1,   -1,  292,   -1,   -1,   -1,  296,   -1,
  298,  299,  300,  301,  271,   -1,  273,  274,   -1,  276,
  277,  278,   -1,  280,  281,  282,  283,  284,  285,   -1,
   -1,  288,  289,   -1,   -1,   -1,  293,  271,  295,  273,
  274,   -1,  276,  277,  278,   -1,  280,  281,  282,  283,
  284,  285,   -1,   -1,  288,  289,   -1,   -1,   -1,  293,
  271,  295,  273,  274,   -1,  276,  277,  278,   -1,  280,
  281,  282,  283,  284,  285,   -1,   -1,  288,  289,   -1,
   -1,   -1,  293,  271,  295,  273,  274,   -1,  276,  277,
  278,   -1,  280,  281,  282,  283,  284,  285,   -1,   -1,
  288,  289,   -1,   -1,   -1,  293,  271,  295,  273,  274,
   -1,  276,  277,  278,   -1,  280,  281,  282,  283,  284,
  285,   -1,  271,   -1,  273,  274,  275,  276,  277,  278,
  295,  280,  281,  282,  283,  284,  285,   -1,   -1,  288,
  289,   -1,   -1,  271,  293,  273,  274,  275,  276,  277,
  278,   -1,  280,  281,  282,  283,  284,  285,   -1,   -1,
  288,  289,   -1,   -1,  271,  293,  273,  274,  275,  276,
  277,  278,   -1,  280,  281,  282,  283,  284,  285,   -1,
   -1,  288,  271,   -1,  273,  274,  293,  276,  277,  278,
   -1,  280,  281,  282,  283,  284,  285,   -1,   -1,  288,
  271,   -1,  273,  274,  293,  276,  277,  278,   -1,  280,
  281,  282,  283,  284,  285,   -1,   -1,  288,  271,   -1,
  273,  274,  293,  276,  277,  278,   -1,  280,  281,  282,
  283,  284,  285,   -1,   -1,   -1,  271,   -1,  273,  274,
  293,  276,  277,  278,   -1,  280,  281,  282,  283,  284,
  285,   -1,   -1,   -1,  271,   -1,  273,  274,  293,  276,
  277,  278,   -1,  280,  281,  282,  283,  284,  285,   -1,
   -1,   -1,  271,   -1,  273,  274,  293,  276,  277,  278,
   -1,  280,  281,  282,  283,  284,  285,   -1,   -1,   -1,
  271,   -1,  273,  274,  293,  276,  277,  278,   -1,  280,
  281,  282,  283,  284,  285,   -1,   -1,   -1,  289,  290,
  271,   -1,  273,  274,  275,  276,  277,  278,   -1,  280,
  281,  282,  283,  284,  285,   -1,   -1,  288,  289,  271,
   -1,  273,  274,   -1,  276,  277,  278,   -1,  280,  281,
  282,  283,  284,  285,   -1,   -1,  271,  289,  273,  274,
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
"MULT_EXP : EXP COMMA MULT_EXP",
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

    //printPreOrder(myProgram,0);
    
    return yyparse();
}

void yyerror(const char *msg){
	//fprintf(stderr,"line %d: %s\n",yylineno ,msg);
	fflush(stdout);
	fprintf(stderr, "Error: %s at line %d\n", msg,yylineno );
	fprintf(stderr, "Parser does not expect '%s'\n",yytext);
}

#line 672 "y.tab.c"

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
#line 59 "parser.y"
	{ /*printPreOrder($1,0);*/ printSymbTable(yystack.l_mark[0].n); }
break;
case 2:
#line 61 "parser.y"
	{yyval.n=makeNode("",yystack.l_mark[0].n,NULL,NULL,NULL);}
break;
case 3:
#line 63 "parser.y"
	{ yyval.n = makeNode("", yystack.l_mark[-2].n, yystack.l_mark[-1].n,NULL,NULL); }
break;
case 4:
#line 64 "parser.y"
	{ yyval.n = yystack.l_mark[-1].n; }
break;
case 5:
#line 67 "parser.y"
	{ yyval.n = makeNodeWithDef(PROCEDURE_DEF,yystack.l_mark[-6].n->token,yystack.l_mark[-5].n,yystack.l_mark[-3].n,yystack.l_mark[0].n,NULL);}
break;
case 6:
#line 69 "parser.y"
	{ yyval.n = makeNodeWithDef(PROCEDURE_DEF,yystack.l_mark[-5].n->token,yystack.l_mark[-4].n,yystack.l_mark[0].n,NULL,NULL);  }
break;
case 7:
#line 71 "parser.y"
	{ yyval.n = makeNodeWithDef(PROCEDURE_DEF,yystack.l_mark[-6].n->token,yystack.l_mark[-5].n,yystack.l_mark[-3].n,yystack.l_mark[0].n,NULL); }
break;
case 8:
#line 73 "parser.y"
	{ yyval.n = makeNodeWithDef(PROCEDURE_DEF,yystack.l_mark[-5].n->token,yystack.l_mark[-4].n,yystack.l_mark[0].n,endOfBlock(),NULL); }
break;
case 9:
#line 75 "parser.y"
	{ yyval.n = yystack.l_mark[0].n;}
break;
case 10:
#line 77 "parser.y"
	{yyval.n = yystack.l_mark[0].n;}
break;
case 11:
#line 80 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-4].n->token,yystack.l_mark[-2].n,NULL,NULL,NULL);}
break;
case 12:
#line 83 "parser.y"
	{ yyval.n = makeNode("",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 13:
#line 84 "parser.y"
	{yyval.n=yystack.l_mark[0].n;}
break;
case 14:
#line 87 "parser.y"
	{ yyval.n=makeNodeWithDef(BOOLEAN_DEF,"boolean",NULL,NULL,NULL,NULL); }
break;
case 15:
#line 88 "parser.y"
	{ yyval.n=makeNodeWithDef(CHAR_DEF,"char",NULL,NULL,NULL,NULL); }
break;
case 16:
#line 89 "parser.y"
	{ yyval.n=makeNodeWithDef(CHARP_DEF,"charp",NULL,NULL,NULL,NULL); }
break;
case 17:
#line 90 "parser.y"
	{ yyval.n=makeNodeWithDef(INT_DEF,"int",NULL,NULL,NULL,NULL); }
break;
case 18:
#line 91 "parser.y"
	{ yyval.n=makeNodeWithDef(INTP_DEF,"intp",NULL,NULL,NULL,NULL); }
break;
case 19:
#line 92 "parser.y"
	{ yyval.n=makeNodeWithDef(STRING_DEF,"string",NULL,NULL,NULL,NULL); }
break;
case 20:
#line 93 "parser.y"
	{ yyval.n=makeNodeWithDef(VOID_DEF,"void",NULL,NULL,NULL,NULL); }
break;
case 21:
#line 97 "parser.y"
	{  yyval.n = makeNodeWithDef(PARAMS_DEF,yystack.l_mark[-3].n->token,yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 22:
#line 98 "parser.y"
	{  yyval.n = makeNodeWithDef(PARAMS_DEF,yystack.l_mark[-1].n->token,yystack.l_mark[0].n,endOfParameter(),NULL,NULL);}
break;
case 23:
#line 101 "parser.y"
	{yyval.n = yystack.l_mark[-1].n;}
break;
case 24:
#line 102 "parser.y"
	{yyval.n=NULL;}
break;
case 25:
#line 105 "parser.y"
	{yyval.n = makeNode("",yystack.l_mark[-2].n,yystack.l_mark[-1].n,NULL,NULL);}
break;
case 26:
#line 106 "parser.y"
	{yyval.n = yystack.l_mark[-1].n;}
break;
case 27:
#line 109 "parser.y"
	{ yyval.n = makeNode("", yystack.l_mark[-1].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 28:
#line 110 "parser.y"
	{ yyval.n = yystack.l_mark[0].n ; }
break;
case 29:
#line 113 "parser.y"
	{ yyval.n = yystack.l_mark[-1].n; }
break;
case 30:
#line 114 "parser.y"
	{ yyval.n = yystack.l_mark[-1].n; }
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
#line 117 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 34:
#line 118 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 35:
#line 119 "parser.y"
	{ yyval.n = yystack.l_mark[-1].n; }
break;
case 36:
#line 120 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 37:
#line 121 "parser.y"
	{ yyval.n = NULL;}
break;
case 38:
#line 122 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 39:
#line 125 "parser.y"
	{}
break;
case 40:
#line 126 "parser.y"
	{}
break;
case 41:
#line 127 "parser.y"
	{}
break;
case 42:
#line 130 "parser.y"
	{ yyval.n = makeNode("return",yystack.l_mark[-1].n,NULL,NULL,NULL); }
break;
case 43:
#line 133 "parser.y"
	{ yyval.n = makeNodeWithDef (PROC_STATEMENT,yystack.l_mark[-5].n->token,yystack.l_mark[-4].n,yystack.l_mark[-2].n,NULL,NULL); }
break;
case 44:
#line 134 "parser.y"
	{ yyval.n = makeNodeWithDef (PROC_STATEMENT,yystack.l_mark[-4].n->token,yystack.l_mark[-3].n,NULL,NULL,NULL); }
break;
case 45:
#line 137 "parser.y"
	{ yyval.n = makeNodeWithDef(PROC_CALL_DEF,yystack.l_mark[-3].n->token,yystack.l_mark[-3].n, yystack.l_mark[-1].n,endOfParameter(),NULL); }
break;
case 46:
#line 138 "parser.y"
	{ yyval.n = makeNodeWithDef(PROC_CALL_DEF,yystack.l_mark[-2].n->token,yystack.l_mark[-2].n, NULL,NULL,NULL); }
break;
case 47:
#line 142 "parser.y"
	{ yyval.n = makeNodeWithDef (DECLARATION_DEF,"decleration",yystack.l_mark[-1].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 48:
#line 143 "parser.y"
	{ yyval.n = makeNodeWithDef (DECLARATION_DEF,"decleration",yystack.l_mark[-1].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 49:
#line 144 "parser.y"
	{ yyval.n = makeNodeWithDef (DECLARATION_DEF,"decleration",yystack.l_mark[-1].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 50:
#line 149 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL); }
break;
case 51:
#line 150 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL);}
break;
case 52:
#line 151 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL);}
break;
case 53:
#line 152 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-5].n, yystack.l_mark[-3].n,yystack.l_mark[-1].n,NULL);   }
break;
case 54:
#line 153 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-4].n, yystack.l_mark[-2].n,NULL,NULL); }
break;
case 55:
#line 154 "parser.y"
	{yyval.n = makeNode("=", yystack.l_mark[-2].n, makeNode("NULL POINTER",NULL,NULL,NULL,NULL),NULL,NULL); }
break;
case 56:
#line 158 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 57:
#line 159 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 58:
#line 160 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 59:
#line 163 "parser.y"
	{ yyval.n = makeNode("", yystack.l_mark[-3].n, yystack.l_mark[-1].n,NULL,NULL) ;}
break;
case 60:
#line 165 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 61:
#line 166 "parser.y"
	{ yyval.n = makeNode(yytext, NULL, NULL,NULL,NULL); }
break;
case 62:
#line 167 "parser.y"
	{ yyval.n = makeNode(yytext, NULL, NULL,NULL,NULL); }
break;
case 63:
#line 168 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 64:
#line 169 "parser.y"
	{ yyval.n = makeNode("boolean", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 65:
#line 170 "parser.y"
	{ yyval.n = makeNode("dereference", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 66:
#line 171 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 67:
#line 172 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 68:
#line 173 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 69:
#line 174 "parser.y"
	{ yyval.n = makeNode("null",NULL,NULL,NULL,NULL);}
break;
case 70:
#line 175 "parser.y"
	{ yyval.n = makeNode("!", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 71:
#line 176 "parser.y"
	{ yyval.n = makeNode("+",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 72:
#line 177 "parser.y"
	{ yyval.n = makeNode("-",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 73:
#line 178 "parser.y"
	{ yyval.n = makeNode("*",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 74:
#line 179 "parser.y"
	{ yyval.n = makeNode("/",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 75:
#line 180 "parser.y"
	{ yyval.n = makeNode("<",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 76:
#line 181 "parser.y"
	{ yyval.n = makeNode(">",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 77:
#line 182 "parser.y"
	{ yyval.n = makeNode("<=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 78:
#line 183 "parser.y"
	{ yyval.n = makeNode(">=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 79:
#line 184 "parser.y"
	{ yyval.n = makeNode("==",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 80:
#line 185 "parser.y"
	{ yyval.n = makeNode("!=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 81:
#line 186 "parser.y"
	{ yyval.n = makeNode("&&",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 82:
#line 187 "parser.y"
	{ yyval.n = makeNode("||",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 83:
#line 188 "parser.y"
	{ yyval.n = makeNode("<",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 84:
#line 189 "parser.y"
	{ yyval.n = makeNode(">",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 85:
#line 190 "parser.y"
	{ yyval.n = makeNode("<=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 86:
#line 191 "parser.y"
	{ yyval.n = makeNode(">=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 87:
#line 192 "parser.y"
	{ yyval.n = makeNode("==",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 88:
#line 193 "parser.y"
	{ yyval.n = makeNode("!=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 89:
#line 194 "parser.y"
	{ yyval.n = makeNode("&&",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 90:
#line 195 "parser.y"
	{ yyval.n = makeNode("||",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 91:
#line 196 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 92:
#line 199 "parser.y"
	{ yyval.n = makeNode("for",yystack.l_mark[-6].n,yystack.l_mark[-4].n,yystack.l_mark[-2].n,NULL); }
break;
case 93:
#line 202 "parser.y"
	{yyval.n = yystack.l_mark[0].n;}
break;
case 94:
#line 203 "parser.y"
	{yyval.n = yystack.l_mark[0].n;}
break;
case 95:
#line 206 "parser.y"
	{ yyval.n = makeNode("while",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 96:
#line 209 "parser.y"
	{yyval.n = yystack.l_mark[-1].n;}
break;
case 97:
#line 210 "parser.y"
	{yyval.n = makeNode("{}",NULL,NULL,NULL,NULL);}
break;
case 98:
#line 213 "parser.y"
	{yyval.n = makeNode("if",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 99:
#line 214 "parser.y"
	{yyval.n = makeNode("if",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 100:
#line 215 "parser.y"
	{ yyval.n = makeNode("if", yystack.l_mark[-4].n, makeNode("else", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL),NULL,NULL);}
break;
case 101:
#line 216 "parser.y"
	{ yyval.n = makeNode("if", yystack.l_mark[-4].n, makeNode("else", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL),NULL,NULL);}
break;
case 102:
#line 217 "parser.y"
	{ yyval.n = makeNode("if", yystack.l_mark[-4].n, makeNode("else", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL),NULL,NULL);}
break;
case 103:
#line 218 "parser.y"
	{ yyval.n = makeNode("if", yystack.l_mark[-4].n, makeNode("else", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL),NULL,NULL);}
break;
case 104:
#line 221 "parser.y"
	{yyval.n = yystack.l_mark[0].n;}
break;
case 105:
#line 222 "parser.y"
	{yyval.n = NULL;}
break;
case 106:
#line 223 "parser.y"
	{yyval.n = yystack.l_mark[-2].n;}
break;
case 107:
#line 226 "parser.y"
	{ yyval.n = makeNode("true", NULL,NULL,NULL,NULL); }
break;
case 108:
#line 227 "parser.y"
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
	{yyval.n = makeNodeWithDef(IDENTIFIER_DEF,yytext,NULL,NULL,NULL,NULL); }
break;
#line 1346 "y.tab.c"
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

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

    #include "TAC/TAC.h"
    /*#include "symb/symb.h"*/
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
   31,   31,   26,   26,   28,   32,   32,   25,    6,
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
    3,    3,    2,    2,    2,    3,    1,    1,    1,
};
static const YYINT yydefred[] = {                         0,
   39,    0,    1,    2,    0,   14,   15,   20,   17,   19,
   18,    0,   16,   40,    0,    9,    0,   10,    0,   24,
    0,    0,    0,    0,  119,    0,   69,    0,    0,    0,
    0,    0,   62,  107,  108,   61,    0,   66,   91,    0,
    0,   63,   64,   67,   68,   26,    0,    0,    0,    0,
    0,   37,   36,   34,    0,    0,    0,    0,   28,    0,
   38,   31,   32,   33,    0,    0,   57,   58,    0,    0,
    0,  118,    0,    0,    0,    0,  114,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   42,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  115,   24,   37,    0,    0,
   35,    0,    0,   49,    0,    0,   48,   23,   37,    0,
   27,   30,   29,    0,    0,    0,    0,  111,  110,  112,
  109,   46,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   89,
   90,   87,   86,   84,   85,   83,   88,    0,    0,    0,
   93,    0,    0,   96,    0,    0,    0,   25,    0,    0,
    0,   51,    0,    0,    0,    0,    0,    0,   45,   59,
    0,    0,    0,    0,    0,  116,    0,    6,    8,    0,
    0,   12,    0,    0,    0,  104,    0,    0,   95,    0,
   44,    0,   46,    0,    5,    7,   21,    0,    0,    0,
    0,    0,   97,    0,   43,   45,  105,    0,  101,   33,
  103,   33,    0,  106,    0,   92,
};
static const YYINT yydgoto[] = {                          2,
  195,   53,    3,    4,   54,   37,  126,   16,   38,   57,
  109,   21,   59,   60,   61,   62,   63,   64,   65,   18,
   39,  134,   66,  135,   75,   41,   42,   68,   43,   44,
   45,  136,  163,   22,
};
static const YYINT yysindex[] = {                      -292,
    0,    0,    0,    0, -181,    0,    0,    0,    0,    0,
    0, -269,    0,    0, -292,    0, -273,    0,  300,    0,
 -265,  204, -292, -181,    0, -256,    0,  300, -191, -273,
  300,  300,    0,    0,    0,    0, -259,    0,    0,  681,
  728,    0,    0,    0,    0,    0, -231, -221, -195, -273,
  -42,    0,    0,    0, -203, -201,  318,   12,    0, -184,
    0,    0,    0,    0, -180, -143,    0,    0, -253, -139,
  713,    0, -172, -127, -123, -132,    0,  713,  553,  234,
  300,  300,  300,  300,  300,  300,  300,  300,  300,  300,
  300,  300,  300,    0, -118, -118, -118, -118, -118, -118,
 -118, -118,  300,  300,  318,    0,    0,    0,   90,  234,
    0,  300, -177,    0,  664,    0,    0,    0,    0, -119,
    0,    0,    0,  259, -292, -120, -273,    0,    0,    0,
    0,    0, -161, -114,  664, -103,  441,  713,  713,  713,
  713,  713,  713,  713,  713,  713,  713,  713,  713,    0,
    0,    0,    0,    0,    0,    0,    0,  571,  589, -259,
    0,  713,  -95,    0, -259,  216,  300,    0,    0, -129,
  713,    0,  728, -287, -292, -115,  -29, -292,    0,    0,
  141,  -93,  300, -280,  -94,    0,  282,    0,    0, -287,
  -29,    0, -253, -234,  -67,    0,  -63,  153,    0,  697,
    0, -279,    0,  -86,    0,    0,    0,  -79, -132,  -83,
  141,  141,    0,  318,    0,    0,    0,  -77,    0,    0,
    0,    0,  -81,    0,  -93,    0,
};
static const YYINT yyrindex[] = {                        69,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -194,    0,    0,    1,    0,    0,    0,    0,    0,
    0,    0,  213,  214,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  349,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -52,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  221,    0,
 -205,    0,    0,    0,    0,  372,    0, -104,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  645,    0,  -50,  457,    0,    0,    0,    0,
    0,    0,    0,    0,  -65,    0,    0,    0,    0,    0,
    0,    0,  607,    0, -238,    0,    0,  -54,  -38,   16,
   81,  134,  137,  146,  157,  192,  230,  248,  278,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  499,
    0, -193,    0,    0,  478,    0,    0,    0,  517,  535,
 -164,    0, -140,    0,  -65,  -57,    0,  395,    0,    0,
    0,    0,    0,  625,    0,    0,    0,    0,    0,    0,
    0,    0,  418,    0,   26,    0,   77,    0,    0,    0,
    0,  -65,    0,    0,    0,    0,    0,    0,  -52,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
  -61,    0,    0,  225,   25,  -11, -135, -153,  -17,    5,
  220,  185,  -51,    0,    0,    0,    0, -168,  -45, -142,
    0,    0,    0,   54,  120,  292,   -6,    0,    0,    0,
    0,  -53,   32,    2,
};
#define YYTABLESIZE 1013
static const YYINT yytable[] = {                         19,
   41,    5,   12,  117,   56,   26,  121,  201,  215,   17,
   55,  114,  197,  199,    1,   67,   24,   74,   76,   14,
  188,   20,   25,   77,   69,   46,    1,    1,   17,   15,
  185,  189,   80,   56,   81,   70,  205,    1,  106,   55,
   56,  192,  220,  222,   67,  113,   55,  206,   15,  117,
  116,   67,   50,   14,  117,  207,  226,  121,  208,  161,
  103,   25,   41,   41,   41,   41,   41,   41,  133,   41,
  104,   41,   40,   41,  127,    6,    7,    8,    9,   10,
   11,   71,   70,   70,   78,   79,  111,   70,  110,   70,
   81,   56,   41,  160,   94,   41,  105,   55,  116,   94,
  165,   41,   67,  122,   25,   72,  128,  123,   12,   73,
  115,   41,  170,  186,  166,  176,   81,    6,    7,    8,
    9,   10,   11,   50,   13,   14,  174,  177,   50,  196,
   80,  124,   81,  204,  137,  138,  139,  140,  141,  142,
  143,  144,  145,  146,  147,  148,  149,   52,  210,  219,
  221,  129,   52,  125,  133,  130,  158,  159,  162,  196,
  196,   81,  187,   56,   81,   78,   13,   30,  161,   55,
  127,  168,  175,  191,   67,  133,  190,  171,  178,  193,
   56,  127,  209,   65,   65,  174,   55,   67,   65,  179,
   65,   67,  183,   56,   56,  127,  198,  211,  202,   55,
   55,  212,  160,  190,   67,   67,  216,  116,  217,  218,
  224,  225,   41,    4,    6,    7,    8,    9,   10,   11,
    3,   47,   56,   48,   41,   49,   19,    6,    7,    8,
    9,   10,   11,   81,   81,   22,  200,   47,   81,   23,
   81,   58,  120,  172,   50,  223,    0,   51,  107,   82,
   82,    0,    0,   25,   82,    0,   82,   41,   41,   41,
   41,   41,   41,   13,  108,    0,    0,  162,    6,    7,
    8,    9,   10,   11,    0,   47,   13,   48,    0,   49,
   19,    0,   99,   99,   99,   99,   99,   99,    0,   99,
   41,   99,    0,   99,   99,    0,    0,    0,   50,    0,
    0,   51,  118,   74,   74,    0,   41,   25,   74,    0,
   74,    0,   99,    0,    0,   99,   99,   13,  119,    0,
    0,   99,    0,    0,    0,   41,   41,   41,   41,   41,
   41,   99,   99,   33,   33,   33,   33,   33,   33,    0,
   33,    0,   33,    0,   33,   33,    6,    7,    8,    9,
   10,   11,    0,   47,    0,   48,    0,   49,   41,    0,
    0,    0,    0,   33,    0,    0,   33,   33,   72,   72,
    0,    0,   33,   72,   41,   72,   50,    0,    0,   51,
  164,    0,   33,   33,    0,   25,  150,  151,  152,  153,
  154,  155,  156,  157,    0,   13,  119,    6,    7,    8,
    9,   10,   11,    0,   47,    0,   48,    0,   49,    6,
    7,    8,    9,   10,   11,  173,   47,    0,   48,    0,
   49,   71,   71,    0,   73,   73,   71,   50,   71,   73,
   51,   73,  194,   79,   79,    0,   25,    0,   79,   50,
   79,    0,   51,  213,   78,   78,   13,  119,   25,   78,
    0,   78,    0,    0,    0,    0,    0,    0,   13,  119,
    6,    7,    8,    9,   10,   11,    0,   47,    0,   48,
    0,   49,    6,    7,    8,    9,   10,   11,    0,   76,
   76,    0,    0,    0,   76,   27,   76,   28,    0,    0,
   50,    0,    0,   51,   29,    0,    0,    0,    0,   25,
    0,   30,   31,   27,    0,   28,    0,   32,  184,   13,
   52,   25,   29,   33,   34,   35,   36,   77,   77,   30,
   31,   13,   77,    0,   77,   32,  132,    0,  169,   25,
   28,   33,   34,   35,   36,   75,   75,   29,    0,    0,
   75,    0,   75,    0,   30,   31,    0,    0,    0,    0,
   32,   27,    0,   28,   25,   72,   33,   34,   35,   36,
   29,    0,    0,    0,    0,   80,   80,   30,   31,   27,
   80,   28,   80,   32,  203,    0,    0,   25,   29,   33,
   34,   35,   36,    0,    0,   30,   31,   27,    0,   28,
    0,   32,    0,    0,    0,   25,   29,   33,   34,   35,
   36,    0,    0,   30,  112,    0,    0,    0,    0,   32,
    0,    0,    0,   25,    0,   33,   34,   35,   36,   60,
    0,   60,   60,    0,   60,   60,   60,    0,   60,   60,
   60,   60,   60,   60,    0,    0,   60,   60,    0,    0,
    0,   60,  113,   60,  113,  113,    0,  113,  113,  113,
    0,  113,  113,  113,  113,  113,  113,    0,    0,  113,
  113,    0,    0,    0,  113,   41,  113,   41,   41,    0,
   41,   41,   41,    0,   41,   41,   41,   41,   41,   41,
    0,    0,   41,   41,    0,    0,    0,   41,   11,   41,
   11,   11,    0,   11,   11,   11,    0,   11,   11,   11,
   11,   11,   11,    0,    0,   11,   11,    0,    0,    0,
   11,   82,   11,   83,   84,    0,   85,   86,   87,    0,
   88,   89,   90,   91,   92,   93,    0,   63,    0,   63,
   63,   57,   63,   63,   63,  180,   63,   63,   63,   63,
   63,   63,    0,    0,   63,   63,    0,    0,   60,   63,
   60,   60,  115,   60,   60,   60,    0,   60,   60,   60,
   60,   60,   60,    0,    0,   60,   60,    0,    0,   60,
   60,   60,   60,   56,   60,   60,   60,    0,   60,   60,
   60,   60,   60,   60,    0,    0,   60,   69,    0,   69,
   69,   60,   69,   69,   69,    0,   69,   69,   69,   69,
   69,   69,    0,    0,   55,   60,    0,   60,   60,   55,
   60,   60,   60,    0,   60,   60,   60,   60,   60,   60,
    0,    0,   60,   82,    0,   83,   84,   60,   85,   86,
   87,    0,   88,   89,   90,   91,   92,   93,    0,    0,
    0,   82,    0,   83,   84,  131,   85,   86,   87,    0,
   88,   89,   90,   91,   92,   93,    0,    0,    0,   82,
    0,   83,   84,  181,   85,   86,   87,    0,   88,   89,
   90,   91,   92,   93,    0,    0,    0,   60,    0,   60,
   60,  182,   60,   60,   60,    0,   60,   60,   60,   60,
   60,   60,    0,    0,    0,   46,    0,   46,   46,   13,
   46,   46,   46,    0,   46,   46,   46,   46,   46,   46,
    0,    0,    0,   46,   41,   60,    0,   60,   60,   56,
   60,   60,   60,    0,   60,   60,   60,   60,   60,   60,
    0,    0,   60,   60,   82,    0,   83,   84,    0,   85,
   86,   87,    0,   88,   89,   90,   91,   92,   93,    0,
    0,   82,  167,   83,   84,    0,   85,   86,   87,    0,
   88,   89,   90,   91,   92,   93,    0,   82,   94,   83,
   84,    0,   85,   86,   87,    0,   88,   89,   90,   91,
   92,   93,    0,   82,  214,   83,   84,    0,   85,   86,
   87,    0,   88,   89,   90,   91,   92,   93,   95,    0,
   96,    0,    0,    0,    0,    0,    0,   97,   98,   99,
  100,  101,  102,
};
static const YYINT yycheck[] = {                        269,
    0,    0,  290,   57,   22,   17,   58,  288,  288,    5,
   22,   57,  181,  182,  307,   22,   15,   29,   30,  307,
  174,  291,  296,   30,   23,  291,  307,  307,   24,    5,
  166,  174,  292,   51,  294,  292,  190,  307,   50,   51,
   58,  177,  211,  212,   51,   57,   58,  190,   24,  288,
   57,   58,  287,  307,  293,  191,  225,  109,  293,  105,
  292,  296,  257,  258,  259,  260,  261,  262,   80,  264,
  292,  266,   19,  268,   70,  257,  258,  259,  260,  261,
  262,   28,  288,  289,   31,   32,  288,  293,  292,  295,
  294,  109,  287,  105,  288,  290,  292,  109,  105,  293,
  112,  296,  109,  288,  296,  297,  279,  288,  290,  301,
   57,  306,  124,  167,  292,  127,  294,  257,  258,  259,
  260,  261,  262,  288,  306,  307,  125,  289,  293,  181,
  292,  275,  294,  187,   81,   82,   83,   84,   85,   86,
   87,   88,   89,   90,   91,   92,   93,  288,  194,  211,
  212,  279,  293,  293,  166,  279,  103,  104,  105,  211,
  212,  294,  292,  181,  294,  112,  306,  286,  214,  181,
  166,  291,  293,  289,  181,  187,  175,  124,  293,  178,
  198,  177,  194,  288,  289,  184,  198,  194,  293,  293,
  295,  198,  288,  211,  212,  191,  290,  265,  293,  211,
  212,  265,  214,  202,  211,  212,  293,  214,  288,  293,
  288,  293,    0,    0,  257,  258,  259,  260,  261,  262,
    0,  264,  275,  266,  290,  268,  269,  257,  258,  259,
  260,  261,  262,  288,  289,  293,  183,  288,  293,   15,
  295,   22,   58,  124,  287,  214,   -1,  290,  291,  288,
  289,   -1,   -1,  296,  293,   -1,  295,  257,  258,  259,
  260,  261,  262,  306,  307,   -1,   -1,  214,  257,  258,
  259,  260,  261,  262,   -1,  264,  306,  266,   -1,  268,
  269,   -1,  257,  258,  259,  260,  261,  262,   -1,  264,
  290,  266,   -1,  268,  269,   -1,   -1,   -1,  287,   -1,
   -1,  290,  291,  288,  289,   -1,  306,  296,  293,   -1,
  295,   -1,  287,   -1,   -1,  290,  291,  306,  307,   -1,
   -1,  296,   -1,   -1,   -1,  257,  258,  259,  260,  261,
  262,  306,  307,  257,  258,  259,  260,  261,  262,   -1,
  264,   -1,  266,   -1,  268,  269,  257,  258,  259,  260,
  261,  262,   -1,  264,   -1,  266,   -1,  268,  290,   -1,
   -1,   -1,   -1,  287,   -1,   -1,  290,  291,  288,  289,
   -1,   -1,  296,  293,  306,  295,  287,   -1,   -1,  290,
  291,   -1,  306,  307,   -1,  296,   95,   96,   97,   98,
   99,  100,  101,  102,   -1,  306,  307,  257,  258,  259,
  260,  261,  262,   -1,  264,   -1,  266,   -1,  268,  257,
  258,  259,  260,  261,  262,  124,  264,   -1,  266,   -1,
  268,  288,  289,   -1,  288,  289,  293,  287,  295,  293,
  290,  295,  292,  288,  289,   -1,  296,   -1,  293,  287,
  295,   -1,  290,  291,  288,  289,  306,  307,  296,  293,
   -1,  295,   -1,   -1,   -1,   -1,   -1,   -1,  306,  307,
  257,  258,  259,  260,  261,  262,   -1,  264,   -1,  266,
   -1,  268,  257,  258,  259,  260,  261,  262,   -1,  288,
  289,   -1,   -1,   -1,  293,  270,  295,  272,   -1,   -1,
  287,   -1,   -1,  290,  279,   -1,   -1,   -1,   -1,  296,
   -1,  286,  287,  270,   -1,  272,   -1,  292,  293,  306,
  307,  296,  279,  298,  299,  300,  301,  288,  289,  286,
  287,  306,  293,   -1,  295,  292,  293,   -1,  270,  296,
  272,  298,  299,  300,  301,  288,  289,  279,   -1,   -1,
  293,   -1,  295,   -1,  286,  287,   -1,   -1,   -1,   -1,
  292,  270,   -1,  272,  296,  297,  298,  299,  300,  301,
  279,   -1,   -1,   -1,   -1,  288,  289,  286,  287,  270,
  293,  272,  295,  292,  293,   -1,   -1,  296,  279,  298,
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
  284,  285,   -1,   -1,   -1,  271,   -1,  273,  274,  293,
  276,  277,  278,   -1,  280,  281,  282,  283,  284,  285,
   -1,   -1,   -1,  289,  290,  271,   -1,  273,  274,  275,
  276,  277,  278,   -1,  280,  281,  282,  283,  284,  285,
   -1,   -1,  288,  289,  271,   -1,  273,  274,   -1,  276,
  277,  278,   -1,  280,  281,  282,  283,  284,  285,   -1,
   -1,  271,  289,  273,  274,   -1,  276,  277,  278,   -1,
  280,  281,  282,  283,  284,  285,   -1,  271,  288,  273,
  274,   -1,  276,  277,  278,   -1,  280,  281,  282,  283,
  284,  285,   -1,  271,  288,  273,  274,   -1,  276,  277,
  278,   -1,  280,  281,  282,  283,  284,  285,  271,   -1,
  273,   -1,   -1,   -1,   -1,   -1,   -1,  280,  281,  282,
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
"SIZE_OF : OP_ABS INTEGER_LITERAL OP_ABS",
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
#line 254 "parser.y"



#include "lex.yy.c"
int main(){

    //printPreOrder(myProgram,0);
    
    return yyparse();
}

void yyerror(const char *msg){
	//fprintf(stderr,"line %d: %s\n",yylineno ,msg);
    /*
	fflush(stdout);
	fprintf(stderr, "Error: %s at line %d\n", msg,yylineno );
	fprintf(stderr, "Parser does not expect '%s'\n",yytext);
    */
    fprintf(stderr, "ERROR: compilation error somthing is wrong with me %d\n",yylineno );
}

#line 668 "y.tab.c"

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
	{ /*printPreOrder($1,0);*/ /*printSymbTable($1);*/  makeButtomUp(yystack.l_mark[0].n); makeTopDown(yystack.l_mark[0].n); printTreeAddressCode(yystack.l_mark[0].n); }
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
	{ yyval.n = makeNodeWithDef(PROCEDURE_DEF,yystack.l_mark[-6].n->token,yystack.l_mark[-5].n,yystack.l_mark[-3].n,yystack.l_mark[0].n,endOfBlock());}
break;
case 6:
#line 69 "parser.y"
	{ yyval.n = makeNodeWithDef(PROCEDURE_DEF,yystack.l_mark[-5].n->token,yystack.l_mark[-4].n,yystack.l_mark[0].n,endOfBlock(),NULL);  }
break;
case 7:
#line 71 "parser.y"
	{ yyval.n = makeNodeWithDef(PROCEDURE_DEF,yystack.l_mark[-6].n->token,yystack.l_mark[-5].n,yystack.l_mark[-3].n,yystack.l_mark[0].n,endOfBlock()); }
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
	{ yyval.n = makeNodeWithDef(ASSIGNMENT_DEF,"=", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL); }
break;
case 51:
#line 150 "parser.y"
	{ yyval.n = makeNodeWithDef(ASSIGNMENT_DEF,"=", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL);}
break;
case 52:
#line 151 "parser.y"
	{ yyval.n = makeNodeWithDef(ASSIGNMENT_DEF,"=", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL);}
break;
case 53:
#line 152 "parser.y"
	{ yyval.n = makeNodeWithDef(ASSIGNMENT_DEF,"=", yystack.l_mark[-5].n, yystack.l_mark[-3].n,yystack.l_mark[-1].n,NULL);   }
break;
case 54:
#line 153 "parser.y"
	{ yyval.n =makeNodeWithDef(ASSIGNMENT_DEF,"=", yystack.l_mark[-4].n, yystack.l_mark[-2].n,NULL,NULL); }
break;
case 55:
#line 154 "parser.y"
	{yyval.n = makeNodeWithDef(ASSIGNMENT_DEF,"=", yystack.l_mark[-2].n, makeNodeWithDef(NULL_DEF,"null",NULL,NULL,NULL,NULL),NULL,NULL); }
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
	{ yyval.n = makeNodeWithDef(STRING_ARRAY,"STR_index", yystack.l_mark[-3].n, yystack.l_mark[-1].n,NULL,NULL); }
break;
case 60:
#line 165 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 61:
#line 166 "parser.y"
	{ yyval.n = makeNodeWithDef(INTEGER_LITERAL_DEF,yytext, NULL, NULL ,NULL,NULL); }
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
	{ yyval.n = makeNodeWithDef(BOOL_DEF,"boolean", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 65:
#line 170 "parser.y"
	{ yyval.n = makeNodeWithDef(POINTER_DEF,"^", yystack.l_mark[0].n, NULL,NULL,NULL); }
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
	{ yyval.n = makeNodeWithDef(NULL_DEF,"null",NULL,NULL,NULL,NULL);}
break;
case 70:
#line 175 "parser.y"
	{ yyval.n = makeNodeWithDef(NOT_DEF,"!", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 71:
#line 176 "parser.y"
	{ yyval.n = makeNodeWithDef(OP_DEF,"+",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 72:
#line 177 "parser.y"
	{ yyval.n = makeNodeWithDef(OP_DEF,"-",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 73:
#line 178 "parser.y"
	{ yyval.n = makeNodeWithDef(OP_DEF,"*",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 74:
#line 179 "parser.y"
	{ yyval.n = makeNodeWithDef(OP_DEF,"/",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 75:
#line 180 "parser.y"
	{ yyval.n = makeNodeWithDef(LT_DEF,"<",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 76:
#line 181 "parser.y"
	{ yyval.n = makeNodeWithDef(GT_DEF,">",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 77:
#line 182 "parser.y"
	{ yyval.n = makeNodeWithDef(LE_DEF,"<=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 78:
#line 183 "parser.y"
	{ yyval.n = makeNodeWithDef(GE_DEF,">=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 79:
#line 184 "parser.y"
	{ yyval.n = makeNodeWithDef(EQ_DEF,"==",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 80:
#line 185 "parser.y"
	{ yyval.n = makeNodeWithDef(NE_DEF,"!=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 81:
#line 186 "parser.y"
	{ yyval.n = makeNodeWithDef(AND_DEF,"&&",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 82:
#line 187 "parser.y"
	{ yyval.n = makeNodeWithDef(OR_DEF,"||",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 83:
#line 188 "parser.y"
	{ yyval.n = makeNodeWithDef(LT_DEF,"<",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 84:
#line 189 "parser.y"
	{ yyval.n = makeNodeWithDef(GT_DEF,">",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 85:
#line 190 "parser.y"
	{ yyval.n = makeNodeWithDef(LE_DEF,"<=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 86:
#line 191 "parser.y"
	{ yyval.n = makeNodeWithDef(GE_DEF,">=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 87:
#line 192 "parser.y"
	{ yyval.n = makeNodeWithDef(EQ_DEF,"==",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 88:
#line 193 "parser.y"
	{ yyval.n = makeNodeWithDef(NE_DEF,"!=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 89:
#line 194 "parser.y"
	{ yyval.n = makeNodeWithDef(AND_DEF,"&&",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 90:
#line 195 "parser.y"
	{ yyval.n = makeNodeWithDef(OR_DEF,"||",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 91:
#line 196 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 92:
#line 199 "parser.y"
	{ yyval.n = makeNodeWithDef(FOR_DEF,"for",yystack.l_mark[-6].n,yystack.l_mark[-4].n,yystack.l_mark[-2].n,NULL); }
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
	{yyval.n = makeNodeWithDef(IF_DEF,"if",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 99:
#line 214 "parser.y"
	{yyval.n = makeNodeWithDef(IF_DEF,"if",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 100:
#line 215 "parser.y"
	{ yyval.n = makeNodeWithDef(IF_DEF,"if", yystack.l_mark[-4].n, yystack.l_mark[-2].n,makeNode("else", yystack.l_mark[0].n,NULL ,NULL,NULL),NULL);}
break;
case 101:
#line 216 "parser.y"
	{ yyval.n = makeNodeWithDef(IF_DEF,"if", yystack.l_mark[-4].n, yystack.l_mark[-2].n,makeNode("else", yystack.l_mark[0].n,NULL ,NULL,NULL),NULL);}
break;
case 102:
#line 217 "parser.y"
	{ yyval.n = makeNodeWithDef(IF_DEF,"if", yystack.l_mark[-4].n, yystack.l_mark[-2].n,makeNode("else", yystack.l_mark[0].n,NULL ,NULL,NULL),NULL);}
break;
case 103:
#line 218 "parser.y"
	{ yyval.n = makeNodeWithDef(IF_DEF,"if", yystack.l_mark[-4].n, yystack.l_mark[-2].n,makeNode("else", yystack.l_mark[0].n,NULL ,NULL,NULL),NULL);}
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
	{ yyval.n = makeNodeWithDef(ABS_DEF,"ABS",yystack.l_mark[-1].n,NULL,NULL,NULL); }
break;
case 111:
#line 234 "parser.y"
	{ yyval.n = makeNodeWithDef(ABS_DEF,"ABS",makeNode(yystack.l_mark[-1].str, NULL, NULL,NULL,NULL),NULL,NULL,NULL); }
break;
case 112:
#line 235 "parser.y"
	{ yyval.n = makeNodeWithDef(ABS_DEF,"ABS",yystack.l_mark[-1].n,NULL,NULL,NULL); }
break;
case 113:
#line 238 "parser.y"
	{ yyval.n = makeNodeWithDef(OP_ADDRESS_OF_DEF,"&", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 114:
#line 239 "parser.y"
	{ yyval.n = makeNodeWithDef(OP_ADDRESS_OF_DEF,"&", yystack.l_mark[0].n ,NULL,NULL,NULL); }
break;
case 115:
#line 242 "parser.y"
	{ yyval.n = makeNodeWithDef(POINTER_DEF,"^", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 116:
#line 245 "parser.y"
	{ yyval.n = makeNode(""/*Multiple Expressions*/,yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 117:
#line 246 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 118:
#line 249 "parser.y"
	{ yyval.n = makeNodeWithDef(STRING_LITERAL_DEF,yytext,NULL,NULL,NULL,NULL); }
break;
case 119:
#line 252 "parser.y"
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

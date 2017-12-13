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
  193,   53,    3,    4,   54,   37,  125,   16,   38,   57,
  108,   21,   59,   60,   61,   62,   63,   64,   65,   18,
   39,  132,   66,  133,   74,   41,   42,   68,   43,   44,
   45,  134,  161,   22,
};
static const YYINT yysindex[] = {                      -270,
    0,    0,    0,    0,  -35,    0,    0,    0,    0,    0,
    0, -265,    0,    0, -270,    0, -248,    0,  349,    0,
 -230,  225, -270,  -35,    0, -237,    0,  349, -266, -248,
  349,  349,    0,    0,    0,    0, -214,    0,    0,  713,
 -177,    0,    0,    0,    0,    0, -215, -204, -193, -248,
  -21,    0,    0,    0, -122, -179,  367,   35,    0, -172,
    0,    0,    0,    0, -160, -145,    0,    0, -153,  -49,
  745,    0, -119, -118, -128,    0,  745,  602,  283,  349,
  349,  349,  349,  349,  349,  349,  349,  349,  349,  349,
  349,  349,    0, -109, -109, -109, -109, -109, -109, -109,
 -109,  349,  349,  367,    0,    0,    0,  150,  283,    0,
  349,  -97,    0,  745,    0, -101,    0,    0, -120,    0,
    0,    0,  308, -270, -102, -248,    0,    0,    0,    0,
 -236,  -93,  745, -203,  490,  745,  745,  745,  745,  745,
  745,  745,  745,  745,  745,  745,  745,    0,    0,    0,
    0,    0,    0,    0,    0,  620,  638, -214,    0,  745,
  -92,    0, -214,  265,  349,    0,    0,  -87,  745,    0,
 -177, -275, -270,  -73,  -29, -270,    0,    0,  162,  -70,
  349, -280,  -76,  745,  331,    0,    0, -275,  -29,    0,
 -153, -217,  -30,    0,  -23,  213,    0,  729,    0, -279,
    0, -170,    0,    0,    0,  -42, -128,  -37,  162,  162,
    0,  367,    0,    0,    0,  -24,    0,    0,    0,    0,
  -26,    0,  -70,    0,
};
static const YYINT yyrindex[] = {                        -8,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -195,    0,    0,    1,    0,    0,    0,    0,    0,
    0,    0,  268,  276,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  398,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    4,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  281,    0,
 -206,    0,    0,    0,  421,    0, -175,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  694,    0, -267,  506,   -1,    0,    0,    0,    0,
    0,    0,    0,   10,    0,    0,    0,    0,    0,    0,
  656,    0, -143,    0,    0, -130, -106,  -74,  -15,   -5,
   28,   39,   90,  108,  143,  155,  171,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  548,    0, -255,
    0,    0,  527,    0,    0,    0,  566,  584, -171,    0,
 -161,    0,   10,   -4,    0,  444,    0,    0,    0,    0,
    0,  674,    0, -164,    0,    0,    0,    0,    0,    0,
  467,    0,   86,    0,   99,    0,    0,    0,    0,   10,
    0,    0,    0,    0,    0,    0,    4,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
  -61,    0,    0,  287,   30,  -11, -115, -165,  -17,    5,
  284,  247,  -58,    0,    0,    0,    0, -166,  -45, -152,
    0,    0,    0,   53,  195,  214,   -6,    0,    0,    0,
    0,  -54,  107,    2,
};
#define YYTABLESIZE 1030
static const YYINT yytable[] = {                        120,
   41,    5,  116,   19,   56,   26,  186,  199,  213,   17,
   55,  113,  195,  197,   12,   67,   24,   73,   75,  187,
   47,  116,  203,   76,   69,   20,    1,    1,   17,   25,
   72,   14,   94,   56,   15,  204,    1,   94,  105,   55,
   56,    1,  218,  220,   67,  112,   55,   25,  183,  120,
  115,   67,  175,   15,   70,   79,  224,   80,  159,  190,
   46,   41,   41,   41,   41,   41,   41,  131,   41,   50,
   41,   40,   41,  205,  126,  206,  102,   79,   25,   80,
   71,   70,   70,   77,   78,  165,   70,  103,   70,  177,
   56,   41,  158,   94,   41,   95,   55,  115,  104,  163,
   41,   67,   96,   97,   98,   99,  100,  101,  110,  114,
   41,  168,   65,   65,  174,  121,   50,   65,  165,   65,
  194,   50,  214,  115,  115,  172,   52,  122,  115,  123,
  202,   52,  135,  136,  137,  138,  139,  140,  141,  142,
  143,  144,  145,  146,  147,  116,  208,  217,  219,  116,
  194,  194,  131,   14,  156,  157,  160,   81,   81,  127,
  128,   56,   81,   77,   81,   80,  159,   55,  126,  109,
  166,   80,   67,  131,  188,  169,   30,  191,   56,  126,
  207,   82,   82,  172,   55,   67,   82,  165,   82,   67,
  173,   56,   56,  126,  164,  181,   80,   55,   55,  176,
  158,  188,   67,   67,  185,  115,   80,    6,    7,    8,
    9,   10,   11,   74,   74,  189,  200,  184,   74,  196,
   74,    6,    7,    8,    9,   10,   11,    6,    7,    8,
    9,   10,   11,  198,  209,    6,    7,    8,    9,   10,
   11,  210,   47,  124,   48,  215,   49,   19,   41,   41,
   41,   41,   41,   41,   12,  216,   13,   41,   41,   41,
   41,   41,   41,  222,  160,   50,  223,   41,   51,  106,
   13,   14,   72,   72,   25,    4,   13,   72,   56,   72,
    3,   41,   71,   71,   13,  107,   48,   71,   22,   71,
   41,    6,    7,    8,    9,   10,   11,   41,   47,   41,
   48,   23,   49,   19,  119,   58,   41,  148,  149,  150,
  151,  152,  153,  154,  155,   73,   73,  170,  221,    0,
   73,   50,   73,    0,   51,  117,   79,   79,    0,    0,
   25,   79,    0,   79,    0,    0,  171,    0,    0,    0,
   13,  118,   99,   99,   99,   99,   99,   99,    0,   99,
    0,   99,    0,   99,   99,   33,   33,   33,   33,   33,
   33,    0,   33,    0,   33,    0,   33,   33,    0,    0,
    0,    0,   99,    0,    0,   99,   99,   78,   78,    0,
    0,   99,   78,    0,   78,   33,    0,    0,   33,   33,
    0,   99,   99,    0,   33,   76,   76,    0,    0,    0,
   76,    0,   76,    0,   33,   33,    6,    7,    8,    9,
   10,   11,    0,   47,    0,   48,    0,   49,    6,    7,
    8,    9,   10,   11,    0,   47,    0,   48,    0,   49,
   77,   77,    0,    0,    0,   77,   50,   77,    0,   51,
  162,    0,   75,   75,    0,   25,    0,   75,   50,   75,
    0,   51,    0,  192,    0,   13,  118,   25,   80,   80,
    0,    0,    0,   80,    0,   80,    0,   13,  118,    6,
    7,    8,    9,   10,   11,    0,   47,    0,   48,    0,
   49,    6,    7,    8,    9,   10,   11,    0,   47,    0,
   48,    0,   49,    0,    0,    0,    0,    0,    0,   50,
    0,    0,   51,  211,    0,    0,    0,    0,   25,    0,
    0,   50,    0,    0,   51,    0,    0,    0,   13,  118,
   25,    6,    7,    8,    9,   10,   11,    0,    0,    0,
   13,   52,    0,    0,   27,    0,   28,    0,    0,    0,
    0,    0,    0,   29,    0,    0,    0,    0,    0,    0,
   30,   31,   27,    0,   28,    0,   32,  182,    0,    0,
   25,   29,   33,   34,   35,   36,    0,    0,   30,   31,
   13,    0,    0,    0,   32,  130,    0,  167,   25,   28,
   33,   34,   35,   36,    0,    0,   29,    0,    0,    0,
    0,    0,    0,   30,   31,    0,    0,    0,    0,   32,
   27,    0,   28,   25,   72,   33,   34,   35,   36,   29,
    0,    0,    0,    0,    0,    0,   30,   31,   27,    0,
   28,    0,   32,  201,    0,    0,   25,   29,   33,   34,
   35,   36,    0,    0,   30,   31,   27,    0,   28,    0,
   32,    0,    0,    0,   25,   29,   33,   34,   35,   36,
    0,    0,   30,  111,    0,    0,    0,    0,   32,    0,
    0,    0,   25,    0,   33,   34,   35,   36,   60,    0,
   60,   60,    0,   60,   60,   60,    0,   60,   60,   60,
   60,   60,   60,    0,    0,   60,   60,    0,    0,    0,
   60,  112,   60,  112,  112,    0,  112,  112,  112,    0,
  112,  112,  112,  112,  112,  112,    0,    0,  112,  112,
    0,    0,    0,  112,   41,  112,   41,   41,    0,   41,
   41,   41,    0,   41,   41,   41,   41,   41,   41,    0,
    0,   41,   41,    0,    0,    0,   41,   11,   41,   11,
   11,    0,   11,   11,   11,    0,   11,   11,   11,   11,
   11,   11,    0,    0,   11,   11,    0,    0,    0,   11,
   81,   11,   82,   83,    0,   84,   85,   86,    0,   87,
   88,   89,   90,   91,   92,    0,   63,    0,   63,   63,
   57,   63,   63,   63,  178,   63,   63,   63,   63,   63,
   63,    0,    0,   63,   63,    0,    0,   60,   63,   60,
   60,  114,   60,   60,   60,    0,   60,   60,   60,   60,
   60,   60,    0,    0,   60,   60,    0,    0,   60,   60,
   60,   60,   56,   60,   60,   60,    0,   60,   60,   60,
   60,   60,   60,    0,    0,   60,   69,    0,   69,   69,
   60,   69,   69,   69,    0,   69,   69,   69,   69,   69,
   69,    0,    0,   55,   60,    0,   60,   60,   55,   60,
   60,   60,    0,   60,   60,   60,   60,   60,   60,    0,
    0,   60,   81,    0,   82,   83,   60,   84,   85,   86,
    0,   87,   88,   89,   90,   91,   92,    0,    0,    0,
   81,    0,   82,   83,  129,   84,   85,   86,    0,   87,
   88,   89,   90,   91,   92,    0,    0,    0,   81,    0,
   82,   83,  179,   84,   85,   86,    0,   87,   88,   89,
   90,   91,   92,    0,    0,    0,   60,    0,   60,   60,
  180,   60,   60,   60,    0,   60,   60,   60,   60,   60,
   60,    0,    0,    0,   46,    0,   46,   46,   13,   46,
   46,   46,    0,   46,   46,   46,   46,   46,   46,    0,
    0,    0,   46,   41,   60,    0,   60,   60,   56,   60,
   60,   60,    0,   60,   60,   60,   60,   60,   60,    0,
    0,   60,   60,   81,    0,   82,   83,    0,   84,   85,
   86,    0,   87,   88,   89,   90,   91,   92,    0,   81,
   93,   82,   83,    0,   84,   85,   86,    0,   87,   88,
   89,   90,   91,   92,    0,   81,  212,   82,   83,    0,
   84,   85,   86,    0,   87,   88,   89,   90,   91,   92,
};
static const YYINT yycheck[] = {                         58,
    0,    0,   57,  269,   22,   17,  172,  288,  288,    5,
   22,   57,  179,  180,  290,   22,   15,   29,   30,  172,
  288,  289,  188,   30,   23,  291,  307,  307,   24,  296,
  297,  307,  288,   51,    5,  188,  307,  293,   50,   51,
   58,  307,  209,  210,   51,   57,   58,  296,  164,  108,
   57,   58,  289,   24,  292,  292,  223,  294,  104,  175,
  291,  257,  258,  259,  260,  261,  262,   79,  264,  287,
  266,   19,  268,  189,   70,  293,  292,  292,  296,  294,
   28,  288,  289,   31,   32,  289,  293,  292,  295,  293,
  108,  287,  104,  271,  290,  273,  108,  104,  292,  111,
  296,  108,  280,  281,  282,  283,  284,  285,  288,   57,
  306,  123,  288,  289,  126,  288,  288,  293,  289,  295,
  179,  293,  293,  288,  289,  124,  288,  288,  293,  275,
  185,  293,   80,   81,   82,   83,   84,   85,   86,   87,
   88,   89,   90,   91,   92,  289,  192,  209,  210,  293,
  209,  210,  164,  307,  102,  103,  104,  288,  289,  279,
  279,  179,  293,  111,  295,  294,  212,  179,  164,  292,
  291,  294,  179,  185,  173,  123,  286,  176,  196,  175,
  192,  288,  289,  182,  196,  192,  293,  289,  295,  196,
  293,  209,  210,  189,  292,  288,  294,  209,  210,  293,
  212,  200,  209,  210,  292,  212,  294,  257,  258,  259,
  260,  261,  262,  288,  289,  289,  293,  165,  293,  290,
  295,  257,  258,  259,  260,  261,  262,  257,  258,  259,
  260,  261,  262,  181,  265,  257,  258,  259,  260,  261,
  262,  265,  264,  293,  266,  288,  268,  269,  257,  258,
  259,  260,  261,  262,  290,  293,  306,  257,  258,  259,
  260,  261,  262,  288,  212,  287,  293,    0,  290,  291,
  306,  307,  288,  289,  296,    0,  306,  293,  275,  295,
    0,  290,  288,  289,  306,  307,  288,  293,  293,  295,
  290,  257,  258,  259,  260,  261,  262,  306,  264,  290,
  266,   15,  268,  269,   58,   22,  306,   94,   95,   96,
   97,   98,   99,  100,  101,  288,  289,  123,  212,   -1,
  293,  287,  295,   -1,  290,  291,  288,  289,   -1,   -1,
  296,  293,   -1,  295,   -1,   -1,  123,   -1,   -1,   -1,
  306,  307,  257,  258,  259,  260,  261,  262,   -1,  264,
   -1,  266,   -1,  268,  269,  257,  258,  259,  260,  261,
  262,   -1,  264,   -1,  266,   -1,  268,  269,   -1,   -1,
   -1,   -1,  287,   -1,   -1,  290,  291,  288,  289,   -1,
   -1,  296,  293,   -1,  295,  287,   -1,   -1,  290,  291,
   -1,  306,  307,   -1,  296,  288,  289,   -1,   -1,   -1,
  293,   -1,  295,   -1,  306,  307,  257,  258,  259,  260,
  261,  262,   -1,  264,   -1,  266,   -1,  268,  257,  258,
  259,  260,  261,  262,   -1,  264,   -1,  266,   -1,  268,
  288,  289,   -1,   -1,   -1,  293,  287,  295,   -1,  290,
  291,   -1,  288,  289,   -1,  296,   -1,  293,  287,  295,
   -1,  290,   -1,  292,   -1,  306,  307,  296,  288,  289,
   -1,   -1,   -1,  293,   -1,  295,   -1,  306,  307,  257,
  258,  259,  260,  261,  262,   -1,  264,   -1,  266,   -1,
  268,  257,  258,  259,  260,  261,  262,   -1,  264,   -1,
  266,   -1,  268,   -1,   -1,   -1,   -1,   -1,   -1,  287,
   -1,   -1,  290,  291,   -1,   -1,   -1,   -1,  296,   -1,
   -1,  287,   -1,   -1,  290,   -1,   -1,   -1,  306,  307,
  296,  257,  258,  259,  260,  261,  262,   -1,   -1,   -1,
  306,  307,   -1,   -1,  270,   -1,  272,   -1,   -1,   -1,
   -1,   -1,   -1,  279,   -1,   -1,   -1,   -1,   -1,   -1,
  286,  287,  270,   -1,  272,   -1,  292,  293,   -1,   -1,
  296,  279,  298,  299,  300,  301,   -1,   -1,  286,  287,
  306,   -1,   -1,   -1,  292,  293,   -1,  270,  296,  272,
  298,  299,  300,  301,   -1,   -1,  279,   -1,   -1,   -1,
   -1,   -1,   -1,  286,  287,   -1,   -1,   -1,   -1,  292,
  270,   -1,  272,  296,  297,  298,  299,  300,  301,  279,
   -1,   -1,   -1,   -1,   -1,   -1,  286,  287,  270,   -1,
  272,   -1,  292,  293,   -1,   -1,  296,  279,  298,  299,
  300,  301,   -1,   -1,  286,  287,  270,   -1,  272,   -1,
  292,   -1,   -1,   -1,  296,  279,  298,  299,  300,  301,
   -1,   -1,  286,  287,   -1,   -1,   -1,   -1,  292,   -1,
   -1,   -1,  296,   -1,  298,  299,  300,  301,  271,   -1,
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
  273,  274,  275,  276,  277,  278,   -1,  280,  281,  282,
  283,  284,  285,   -1,   -1,  288,  271,   -1,  273,  274,
  293,  276,  277,  278,   -1,  280,  281,  282,  283,  284,
  285,   -1,   -1,  288,  271,   -1,  273,  274,  293,  276,
  277,  278,   -1,  280,  281,  282,  283,  284,  285,   -1,
   -1,  288,  271,   -1,  273,  274,  293,  276,  277,  278,
   -1,  280,  281,  282,  283,  284,  285,   -1,   -1,   -1,
  271,   -1,  273,  274,  293,  276,  277,  278,   -1,  280,
  281,  282,  283,  284,  285,   -1,   -1,   -1,  271,   -1,
  273,  274,  293,  276,  277,  278,   -1,  280,  281,  282,
  283,  284,  285,   -1,   -1,   -1,  271,   -1,  273,  274,
  293,  276,  277,  278,   -1,  280,  281,  282,  283,  284,
  285,   -1,   -1,   -1,  271,   -1,  273,  274,  293,  276,
  277,  278,   -1,  280,  281,  282,  283,  284,  285,   -1,
   -1,   -1,  289,  290,  271,   -1,  273,  274,  275,  276,
  277,  278,   -1,  280,  281,  282,  283,  284,  285,   -1,
   -1,  288,  289,  271,   -1,  273,  274,   -1,  276,  277,
  278,   -1,  280,  281,  282,  283,  284,  285,   -1,  271,
  288,  273,  274,   -1,  276,  277,  278,   -1,  280,  281,
  282,  283,  284,  285,   -1,  271,  288,  273,  274,   -1,
  276,  277,  278,   -1,  280,  281,  282,  283,  284,  285,
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

    //printPreOrder(myProgram,0);
    
    return yyparse();
}

void yyerror(const char *msg){
	//fprintf(stderr,"line %d: %s\n",yylineno ,msg);
	fflush(stdout);
	fprintf(stderr, "Error: %s at line %d\n", msg,yylineno );
	fprintf(stderr, "Parser does not expect '%s'\n",yytext);
}

#line 664 "y.tab.c"

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
	{ printSymbTable(yystack.l_mark[0].n); }
break;
case 2:
#line 59 "parser.y"
	{yyval.n=makeNode("",yystack.l_mark[0].n,NULL,NULL,NULL);}
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
	{ yyval.n = makeNodeWithDef(PROCEDURE_DEF,yystack.l_mark[-6].n->token,yystack.l_mark[-5].n,yystack.l_mark[-3].n,yystack.l_mark[0].n,NULL);}
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
	{ yyval.n = makeNodeWithDef(PROCEDURE_DEF,yystack.l_mark[-5].n->token,yystack.l_mark[-4].n,yystack.l_mark[0].n,NULL,NULL); }
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
#line 1338 "y.tab.c"
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

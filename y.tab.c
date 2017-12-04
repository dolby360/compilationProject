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
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    2,    2,    3,    3,    3,    3,    3,    3,
   17,   18,   18,    7,    7,    7,    7,    7,    7,    7,
    5,    5,   16,   16,    6,    6,    8,    8,   10,   10,
   10,   10,   10,   10,   10,   30,   30,    9,    3,    3,
   11,   11,   15,   15,   15,   15,   19,   19,   19,   23,
   20,   20,   20,   20,   20,   20,   20,   20,   20,   20,
   20,   20,   20,   20,   20,   20,   20,   20,   20,   20,
   20,   20,   20,   20,   20,   20,   20,   20,   20,   20,
   20,   13,   14,   14,   12,   12,   25,   25,   26,   26,
   27,   28,   28,   22,   22,   24,   29,   29,   21,    4,
};
static const YYINT yylen[] = {                            2,
    1,    1,    2,    1,    8,    7,    8,    7,    2,    2,
    5,    3,    1,    1,    1,    1,    1,    1,    1,    1,
    4,    2,    3,    2,    4,    3,    2,    1,    2,    2,
    1,    1,    1,    1,    1,    1,    0,    3,    6,    6,
    2,    2,    3,    3,    3,    3,    1,    1,    1,    4,
    1,    1,    1,    1,    1,    2,    1,    1,    1,    2,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    1,    5,    3,    2,    5,    7,    1,    1,    5,    4,
    3,    3,    3,    2,    2,    2,    3,    1,    1,    1,
};
static const YYINT yydefred[] = {                         0,
   14,   15,   20,   17,   19,   18,    0,   16,    0,    1,
    0,    4,    0,    0,    0,    0,    0,    0,    0,    0,
   24,  100,   35,   34,    0,    0,    0,    0,   28,    0,
   31,   32,   33,    0,    0,   48,   49,    3,   36,    9,
    0,   10,    0,    0,    0,    0,    0,    0,    0,   53,
   87,   88,   52,    0,   81,    0,    0,   54,   55,   57,
   58,   59,   96,   24,    0,    0,    0,    0,   42,    0,
    0,   23,    0,   27,   26,   30,   29,    0,    0,    0,
    0,    0,   99,    0,    0,    0,   95,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   38,    0,    0,    0,    0,    0,    0,    0,
    0,   23,    0,    0,    0,   25,   46,    0,   44,    0,
    0,    0,    0,    0,    0,   92,   93,   91,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   79,   80,   77,   76,   74,
   75,   73,   78,   50,    0,    0,    0,    0,    0,    0,
   82,   90,    0,    0,    0,    0,    0,    0,   39,   40,
    0,    0,   84,    0,    0,   12,   11,    0,   89,    6,
    8,    0,    0,   21,   83,   86,    5,    7,
};
static const YYINT yydgoto[] = {                          9,
   10,   11,   24,   54,  122,   13,   26,   27,   28,   29,
   30,   31,   32,   33,   34,   15,   55,  131,   35,   88,
   85,   57,   58,   37,   59,   60,   61,   62,  133,  156,
};
static const YYINT yysindex[] = {                      -156,
    0,    0,    0,    0,    0,    0, -224,    0,    0,    0,
 -156,    0, -294, -267, -294, -251, -234,  197, -267,  -77,
    0,    0,    0,    0, -223,  214,  -58, -214,    0, -209,
    0,    0,    0, -203, -189,    0,    0,    0,    0,    0,
 -197,    0,  197,  197,  197, -250, -267,  197,  197,    0,
    0,    0,    0, -272,    0,  454,  -37,    0,    0,    0,
    0,    0,    0,    0,   14,  197,  197, -265,    0,  470,
    0,    0, -192,    0,    0,    0,    0,  163, -117,  331,
  349,  470,    0, -183, -179, -223,    0,  470,  367,  180,
  197,  197,  197,  197,  197,  197,  197,  197,  197,  197,
  197,  197,    0, -178, -178, -178, -178, -178, -178, -178,
 -178,    0,  315, -272,  144,    0,    0,  470,    0,  -37,
 -294, -186, -267, -180, -180,    0,    0,    0, -177, -233,
 -175,  470, -221,  470,  470,  470,  470,  470,  470,  470,
  470,  470,  470,  470,  470,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -282, -176, -269, -174,   79, -152,
    0,    0, -169, -294,  197, -172, -294, -294,    0,    0,
 -176, -169,    0,  131, -180,    0,    0,  470,    0,    0,
    0, -294, -294,    0,    0,    0,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  135,    0,    1,    0,    1,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -139,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  246,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  406,    0, -151,
  422,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -127,    0,    0,    0,  269,    0,   21,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  438,    0,    0,    0, -140,    0, -138,
 -171,    0,    0,    0,    0,    0,    0,    0,    0,  385,
    0, -211,    0,   24,   59,   72,   89,  119,  122,  215,
  468,  471,  479,  482,  490,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -171,    0,    0, -141,    0,   66,
    0,    0,    0,  292,    0,    0,    1,    1,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -195,    0,    0,
    0,    1,    1,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,    0,    7,   -3, -144, -106,    2,  -20,  -12,  -19,
    0,    0,    0, -115,  123, -102,    0,    0,    0,   31,
   75,  117,    5,    0,    0,    0,    0,    0,    0,  -10,
};
#define YYTABLESIZE 785
static const YYINT yytable[] = {                         65,
   37,   14,   40,   25,   42,  162,   12,   74,  160,  161,
   41,   36,   14,   39,   73,   63,   25,   38,  176,   90,
    7,   66,   68,   25,   36,   39,  115,  184,   66,   22,
   71,   36,    1,    2,    3,    4,    5,    6,   39,   16,
   43,   17,   84,   86,   18,   74,   22,   83,   56,  167,
  169,   87,   73,  168,  170,  163,   70,   44,   90,  186,
   66,   25,   19,  114,  182,   20,   21,  165,  183,   36,
   66,  166,   22,   80,   81,   82,   75,   98,   76,   89,
  123,   98,    8,   23,   77,   78,  130,    1,    2,    3,
    4,    5,    6,   97,   79,  126,  113,   97,  116,  127,
    1,    2,    3,    4,    5,    6,  157,   47,  118,  159,
  162,  130,  175,    7,  172,  179,  123,  164,   37,  158,
  132,  134,  135,  136,  137,  138,  139,  140,  141,  142,
  143,  144,  145,    7,    2,   47,   41,    8,  174,    1,
    2,    3,    4,    5,    6,  132,  171,   43,   69,   45,
    8,   22,  119,  177,   74,   25,  180,  181,    0,    0,
   60,   60,    0,   36,  123,   60,    0,   60,    0,    0,
   25,  187,  188,  123,    0,  121,    0,    0,   36,    1,
    2,    3,    4,    5,    6,    0,   16,    0,   17,    8,
    0,   18,    0,    0,  120,  178,    0,    0,    1,    2,
    3,    4,    5,    6,    0,   16,    0,   17,    0,   19,
   18,    0,   20,   64,    0,    0,    0,    0,    0,   22,
  146,  147,  148,  149,  150,  151,  152,  153,   19,    8,
   23,   20,   72,  104,    0,  105,    0,    0,   22,    0,
    0,    0,  106,  107,  108,  109,  110,  111,    8,   23,
    0,    0,    0,    0,    0,    0,    0,   37,   37,   37,
   37,   37,   37,    0,   37,    0,   37,    0,    0,   37,
    1,    2,    3,    4,    5,    6,    0,   16,    0,   17,
    0,    0,   18,    0,    0,    0,    0,   37,    0,    0,
   37,   37,    0,    0,    0,    0,    0,   37,    0,    0,
   19,    0,    0,   20,  112,    0,    0,   37,   56,   56,
   22,   71,   71,   56,    0,   56,   71,    0,   71,    0,
    8,   23,   85,   85,   85,   85,   85,   85,    0,   85,
    0,   85,    0,    0,   85,    1,    2,    3,    4,    5,
    6,    0,   16,    0,   17,    0,   72,   72,    0,    0,
    0,   72,   85,   72,    0,   85,   85,    0,    0,   64,
   64,    0,   85,    0,   64,   19,   64,    0,   20,  173,
    0,    0,   85,   85,    0,   22,   62,   62,    0,    0,
    0,   62,    0,   62,    0,    8,   23,    1,    2,    3,
    4,    5,    6,    0,   16,    0,   17,    0,    0,    0,
    1,    2,    3,    4,    5,    6,   61,   61,    0,   63,
   63,   61,    0,   61,   63,   45,   63,   19,    0,    0,
   20,  185,   46,    0,    0,    0,    0,   22,    0,   47,
   48,    0,  117,    0,   45,   49,  155,    8,   23,    0,
   22,   46,   50,   51,   52,   53,    0,    0,   47,   48,
    8,   45,    0,    0,   49,    0,    0,    0,   46,   22,
   83,   50,   51,   52,   53,   47,   48,    0,   45,    0,
    0,   49,  129,    0,    0,   46,   22,    0,   50,   51,
   52,   53,   47,   48,    0,   45,    0,    0,   49,    0,
    0,    0,   46,   22,    0,   50,   51,   52,   53,   47,
   67,    0,   69,   69,    0,   49,    0,   69,    0,   69,
   22,    0,   50,   51,   52,   53,   51,    0,   51,   51,
    0,   51,   51,   51,    0,   51,   51,   51,   51,   51,
   51,    0,    0,   51,   51,    0,    0,    0,   51,   94,
   51,   94,   94,    0,   94,   94,   94,    0,   94,   94,
   94,   94,   94,   94,    0,    0,   94,   94,    0,    0,
    0,   94,   37,   94,   37,   37,    0,   37,   37,   37,
    0,   37,   37,   37,   37,   37,   37,    0,    0,   37,
   37,    0,    0,    0,   37,   91,   37,   92,   93,    0,
   94,   95,   96,    0,   97,   98,   99,  100,  101,  102,
    0,   91,    0,   92,   93,    0,   94,   95,   96,  154,
   97,   98,   99,  100,  101,  102,    0,    0,    0,   91,
    0,   92,   93,  124,   94,   95,   96,    0,   97,   98,
   99,  100,  101,  102,    0,    0,    0,   91,    0,   92,
   93,  125,   94,   95,   96,    0,   97,   98,   99,  100,
  101,  102,    0,    0,    0,   51,    0,   51,   51,  128,
   51,   51,   51,    0,   51,   51,   51,   51,   51,   51,
    0,    0,    0,    0,    0,    0,   51,   13,   51,   51,
   47,   51,   51,   51,    0,   51,   51,   51,   51,   51,
   51,    0,   54,   51,   54,   54,   48,   54,   54,   54,
    0,   54,   54,   54,   54,   54,   54,    0,   51,   54,
   51,   51,   96,   51,   51,   51,    0,   51,   51,   51,
   51,   51,   51,    0,   91,   51,   92,   93,    0,   94,
   95,   96,    0,   97,   98,   99,  100,  101,  102,    0,
   91,  103,   92,   93,    0,   94,   95,   96,    0,   97,
   98,   99,  100,  101,  102,   68,   68,    0,   66,   66,
   68,    0,   68,   66,    0,   66,   67,   67,    0,   65,
   65,   67,    0,   67,   65,    0,   65,   70,   70,    0,
    0,    0,   70,    0,   70,
};
static const YYINT yycheck[] = {                         20,
    0,    0,   13,    7,   15,  288,    0,   27,  124,  125,
   14,    7,   11,  308,   27,   19,   20,   11,  163,  292,
  290,  294,   26,   27,   20,  308,  292,  172,  294,  297,
   26,   27,  257,  258,  259,  260,  261,  262,  308,  264,
  292,  266,   46,   47,  269,   65,  297,  298,   18,  156,
  157,   47,   65,  156,  157,  289,   26,  292,  292,  175,
  294,   65,  287,   67,  171,  290,  291,  289,  171,   65,
  294,  293,  297,   43,   44,   45,  291,  289,  288,   49,
   79,  293,  307,  308,  288,  275,   90,  257,  258,  259,
  260,  261,  262,  289,  292,  279,   66,  293,  291,  279,
  257,  258,  259,  260,  261,  262,  293,  286,   78,  290,
  288,  115,  265,  290,  289,  288,  115,  293,  290,  123,
   90,   91,   92,   93,   94,   95,   96,   97,   98,   99,
  100,  101,  102,  290,    0,  275,  288,  307,  159,  257,
  258,  259,  260,  261,  262,  115,  157,  288,   26,  288,
  307,  293,   78,  164,  174,  159,  167,  168,   -1,   -1,
  288,  289,   -1,  159,  163,  293,   -1,  295,   -1,   -1,
  174,  182,  183,  172,   -1,  293,   -1,   -1,  174,  257,
  258,  259,  260,  261,  262,   -1,  264,   -1,  266,  307,
   -1,  269,   -1,   -1,   78,  165,   -1,   -1,  257,  258,
  259,  260,  261,  262,   -1,  264,   -1,  266,   -1,  287,
  269,   -1,  290,  291,   -1,   -1,   -1,   -1,   -1,  297,
  104,  105,  106,  107,  108,  109,  110,  111,  287,  307,
  308,  290,  291,  271,   -1,  273,   -1,   -1,  297,   -1,
   -1,   -1,  280,  281,  282,  283,  284,  285,  307,  308,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  257,  258,  259,
  260,  261,  262,   -1,  264,   -1,  266,   -1,   -1,  269,
  257,  258,  259,  260,  261,  262,   -1,  264,   -1,  266,
   -1,   -1,  269,   -1,   -1,   -1,   -1,  287,   -1,   -1,
  290,  291,   -1,   -1,   -1,   -1,   -1,  297,   -1,   -1,
  287,   -1,   -1,  290,  291,   -1,   -1,  307,  288,  289,
  297,  288,  289,  293,   -1,  295,  293,   -1,  295,   -1,
  307,  308,  257,  258,  259,  260,  261,  262,   -1,  264,
   -1,  266,   -1,   -1,  269,  257,  258,  259,  260,  261,
  262,   -1,  264,   -1,  266,   -1,  288,  289,   -1,   -1,
   -1,  293,  287,  295,   -1,  290,  291,   -1,   -1,  288,
  289,   -1,  297,   -1,  293,  287,  295,   -1,  290,  291,
   -1,   -1,  307,  308,   -1,  297,  288,  289,   -1,   -1,
   -1,  293,   -1,  295,   -1,  307,  308,  257,  258,  259,
  260,  261,  262,   -1,  264,   -1,  266,   -1,   -1,   -1,
  257,  258,  259,  260,  261,  262,  288,  289,   -1,  288,
  289,  293,   -1,  295,  293,  272,  295,  287,   -1,   -1,
  290,  291,  279,   -1,   -1,   -1,   -1,  297,   -1,  286,
  287,   -1,  270,   -1,  272,  292,  293,  307,  308,   -1,
  297,  279,  299,  300,  301,  302,   -1,   -1,  286,  287,
  307,  272,   -1,   -1,  292,   -1,   -1,   -1,  279,  297,
  298,  299,  300,  301,  302,  286,  287,   -1,  272,   -1,
   -1,  292,  293,   -1,   -1,  279,  297,   -1,  299,  300,
  301,  302,  286,  287,   -1,  272,   -1,   -1,  292,   -1,
   -1,   -1,  279,  297,   -1,  299,  300,  301,  302,  286,
  287,   -1,  288,  289,   -1,  292,   -1,  293,   -1,  295,
  297,   -1,  299,  300,  301,  302,  271,   -1,  273,  274,
   -1,  276,  277,  278,   -1,  280,  281,  282,  283,  284,
  285,   -1,   -1,  288,  289,   -1,   -1,   -1,  293,  271,
  295,  273,  274,   -1,  276,  277,  278,   -1,  280,  281,
  282,  283,  284,  285,   -1,   -1,  288,  289,   -1,   -1,
   -1,  293,  271,  295,  273,  274,   -1,  276,  277,  278,
   -1,  280,  281,  282,  283,  284,  285,   -1,   -1,  288,
  289,   -1,   -1,   -1,  293,  271,  295,  273,  274,   -1,
  276,  277,  278,   -1,  280,  281,  282,  283,  284,  285,
   -1,  271,   -1,  273,  274,   -1,  276,  277,  278,  295,
  280,  281,  282,  283,  284,  285,   -1,   -1,   -1,  271,
   -1,  273,  274,  293,  276,  277,  278,   -1,  280,  281,
  282,  283,  284,  285,   -1,   -1,   -1,  271,   -1,  273,
  274,  293,  276,  277,  278,   -1,  280,  281,  282,  283,
  284,  285,   -1,   -1,   -1,  271,   -1,  273,  274,  293,
  276,  277,  278,   -1,  280,  281,  282,  283,  284,  285,
   -1,   -1,   -1,   -1,   -1,   -1,  271,  293,  273,  274,
  275,  276,  277,  278,   -1,  280,  281,  282,  283,  284,
  285,   -1,  271,  288,  273,  274,  275,  276,  277,  278,
   -1,  280,  281,  282,  283,  284,  285,   -1,  271,  288,
  273,  274,  275,  276,  277,  278,   -1,  280,  281,  282,
  283,  284,  285,   -1,  271,  288,  273,  274,   -1,  276,
  277,  278,   -1,  280,  281,  282,  283,  284,  285,   -1,
  271,  288,  273,  274,   -1,  276,  277,  278,   -1,  280,
  281,  282,  283,  284,  285,  288,  289,   -1,  288,  289,
  293,   -1,  295,  293,   -1,  295,  288,  289,   -1,  288,
  289,  293,   -1,  295,  293,   -1,  295,  288,  289,   -1,
   -1,   -1,  293,   -1,  295,
};
#define YYFINAL 9
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 308
#define YYUNDFTOKEN 341
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
"OCTA_LITERAL","BINARY_LITERAL","APOSTROPHE","KEY_CHARP","COMMENT",0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : S",
"S : PROGRAM",
"PROGRAM : MULTI_PROC",
"MULTI_PROC : MULTI_PROC PROC",
"MULTI_PROC : PROC",
"PROC : PROCEDURE ID PARAN_O MULT_PARAMS PARAN_C OPTIONAL_COMMENT BLOCK_W_RETURN OPTIONAL_COMMENT",
"PROC : PROCEDURE ID PARAN_O PARAN_C OPTIONAL_COMMENT BLOCK_W_RETURN OPTIONAL_COMMENT",
"PROC : PROCEDURE ID PARAN_O MULT_PARAMS PARAN_C OPTIONAL_COMMENT BLOCK_W OPTIONAL_COMMENT",
"PROC : PROCEDURE ID PARAN_O PARAN_C OPTIONAL_COMMENT BLOCK_W OPTIONAL_COMMENT",
"PROC : BLOCK_W_RETURN OPTIONAL_COMMENT",
"PROC : BLOCK_W OPTIONAL_COMMENT",
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
"STATEMENT : COMMENT",
"OPTIONAL_COMMENT : COMMENT",
"OPTIONAL_COMMENT :",
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
#line 226 "parser.y"


#include "lex.yy.c"
main(){

    //print_ast(ourProgram);

    return yyparse();
}

void yyerror(const char *msg){
	//fprintf(stderr,"line %d: %s\n",yylineno - 1,msg);
	fflush(stdout);
	fprintf(stderr, "Error: %s at line %d\n", msg,yylineno);
	fprintf(stderr, "Parser does not expect '%s'\n",yytext);
}


#line 579 "y.tab.c"

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
	{ yyval.n = makeNode("", yystack.l_mark[-1].n, yystack.l_mark[0].n,NULL,NULL); }
break;
case 4:
#line 61 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 5:
#line 64 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-7].n->token,yystack.l_mark[-6].n,yystack.l_mark[-4].n,yystack.l_mark[-1].n,NULL);}
break;
case 6:
#line 66 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-6].n->token,yystack.l_mark[-5].n,yystack.l_mark[-1].n,NULL,NULL);  }
break;
case 7:
#line 68 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-7].n->token,yystack.l_mark[-6].n,yystack.l_mark[-4].n,yystack.l_mark[-1].n,NULL); }
break;
case 8:
#line 70 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-6].n->token,yystack.l_mark[-5].n,yystack.l_mark[-1].n,NULL,NULL); }
break;
case 9:
#line 72 "parser.y"
	{ yyval.n = yystack.l_mark[-1].n;}
break;
case 10:
#line 74 "parser.y"
	{yyval.n = yystack.l_mark[-1].n;}
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
#line 109 "parser.y"
	{ yyval.n = yystack.l_mark[-1].n; }
break;
case 30:
#line 110 "parser.y"
	{ yyval.n = yystack.l_mark[-1].n; }
break;
case 31:
#line 111 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 32:
#line 112 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 33:
#line 113 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 34:
#line 114 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 35:
#line 115 "parser.y"
	{ yyval.n = NULL;}
break;
case 36:
#line 118 "parser.y"
	{}
break;
case 37:
#line 119 "parser.y"
	{}
break;
case 38:
#line 122 "parser.y"
	{ yyval.n = makeNode("return",yystack.l_mark[-1].n,NULL,NULL,NULL); }
break;
case 39:
#line 125 "parser.y"
	{ 
        yyval.n = makeNode (yystack.l_mark[-5].n->token,yystack.l_mark[-4].n,yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL); 
        }
break;
case 40:
#line 129 "parser.y"
	{
        yyval.n = makeNode (yystack.l_mark[-5].n->token,yystack.l_mark[-4].n,yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL);
        }
break;
case 41:
#line 133 "parser.y"
	{ yyval.n = makeNode ("",yystack.l_mark[-1].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 42:
#line 134 "parser.y"
	{ yyval.n = makeNode ("",yystack.l_mark[-1].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 43:
#line 137 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL); }
break;
case 44:
#line 138 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL);}
break;
case 45:
#line 139 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL);}
break;
case 46:
#line 140 "parser.y"
	{yyval.n = makeNode("=", yystack.l_mark[-2].n, makeNode("NULL POINTER",NULL,NULL,NULL,NULL),NULL,NULL); }
break;
case 47:
#line 144 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 48:
#line 145 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 49:
#line 146 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 50:
#line 149 "parser.y"
	{ yyval.n = makeNode("STRING INDEX", yystack.l_mark[-3].n, yystack.l_mark[-1].n,NULL,NULL) ;}
break;
case 51:
#line 151 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 52:
#line 152 "parser.y"
	{ yyval.n = makeNode(yytext, NULL, NULL,NULL,NULL); }
break;
case 53:
#line 153 "parser.y"
	{ yyval.n = makeNode(yytext, NULL, NULL,NULL,NULL); }
break;
case 54:
#line 154 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 55:
#line 155 "parser.y"
	{ yyval.n = makeNode("boolean", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 56:
#line 156 "parser.y"
	{ yyval.n = makeNode("dereference", yystack.l_mark[0].n, NULL,NULL,NULL); }
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
#line 159 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 60:
#line 160 "parser.y"
	{ yyval.n = makeNode("!", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 61:
#line 161 "parser.y"
	{ yyval.n = makeNode("+",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 62:
#line 162 "parser.y"
	{ yyval.n = makeNode("-",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 63:
#line 163 "parser.y"
	{ yyval.n = makeNode("*",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 64:
#line 164 "parser.y"
	{ yyval.n = makeNode("/",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 65:
#line 165 "parser.y"
	{ yyval.n = makeNode("<",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 66:
#line 166 "parser.y"
	{ yyval.n = makeNode(">",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 67:
#line 167 "parser.y"
	{ yyval.n = makeNode("<=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 68:
#line 168 "parser.y"
	{ yyval.n = makeNode(">=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 69:
#line 169 "parser.y"
	{ yyval.n = makeNode("==",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 70:
#line 170 "parser.y"
	{ yyval.n = makeNode("!=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 71:
#line 171 "parser.y"
	{ yyval.n = makeNode("&&",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 72:
#line 172 "parser.y"
	{ yyval.n = makeNode("||",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 73:
#line 173 "parser.y"
	{ yyval.n = makeNode("<",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 74:
#line 174 "parser.y"
	{ yyval.n = makeNode(">",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 75:
#line 175 "parser.y"
	{ yyval.n = makeNode("<=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 76:
#line 176 "parser.y"
	{ yyval.n = makeNode(">=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 77:
#line 177 "parser.y"
	{ yyval.n = makeNode("==",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 78:
#line 178 "parser.y"
	{ yyval.n = makeNode("!=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 79:
#line 179 "parser.y"
	{ yyval.n = makeNode("&&",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 80:
#line 180 "parser.y"
	{ yyval.n = makeNode("||",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 81:
#line 181 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 82:
#line 184 "parser.y"
	{ yyval.n = makeNode("while",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 83:
#line 187 "parser.y"
	{yyval.n = yystack.l_mark[-1].n;}
break;
case 84:
#line 188 "parser.y"
	{yyval.n = makeNode("{}",NULL,NULL,NULL,NULL);}
break;
case 85:
#line 191 "parser.y"
	{yyval.n = makeNode("if",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 86:
#line 192 "parser.y"
	{ yyval.n = makeNode("if", yystack.l_mark[-4].n, makeNode("else", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL),NULL,NULL);}
break;
case 87:
#line 195 "parser.y"
	{ yyval.n = makeNode("true", NULL,NULL,NULL,NULL); }
break;
case 88:
#line 196 "parser.y"
	{ yyval.n = makeNode("false", NULL, NULL,NULL,NULL); }
break;
case 89:
#line 199 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-4].n->token,yystack.l_mark[-4].n, yystack.l_mark[-2].n,NULL,NULL); }
break;
case 90:
#line 200 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-3].n->token,yystack.l_mark[-3].n, NULL,NULL,NULL); }
break;
case 91:
#line 203 "parser.y"
	{ yyval.n = makeNode("",yystack.l_mark[-1].n,NULL,NULL,NULL); }
break;
case 92:
#line 206 "parser.y"
	{ yyval.n = makeNode("ABS",yystack.l_mark[-1].n,NULL,NULL,NULL); }
break;
case 93:
#line 207 "parser.y"
	{ yyval.n = makeNode("ABS",yystack.l_mark[-1].n,NULL,NULL,NULL); }
break;
case 94:
#line 210 "parser.y"
	{ yyval.n = makeNode("&", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 95:
#line 211 "parser.y"
	{ yyval.n = makeNode("&", yystack.l_mark[0].n ,NULL,NULL,NULL); }
break;
case 96:
#line 214 "parser.y"
	{ yyval.n = makeNode("^", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 97:
#line 217 "parser.y"
	{ yyval.n = makeNode(""/*Multiple Expressions*/,yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 98:
#line 218 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 99:
#line 221 "parser.y"
	{ yyval.n = makeNode(yytext,NULL,NULL,NULL,NULL); }
break;
case 100:
#line 224 "parser.y"
	{yyval.n=makeNode(yytext,NULL,NULL,NULL,NULL);}
break;
#line 1185 "y.tab.c"
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

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
    0,    1,    2,    2,    3,    3,    3,    3,    3,    3,
    7,    7,    7,    7,    7,    7,    7,    5,    5,   16,
   16,    6,    6,    8,    8,   10,   10,   10,   10,   10,
   10,    9,    3,    3,   11,   11,   15,   15,   15,   15,
   17,   17,   17,   21,   18,   18,   18,   18,   18,   18,
   18,   18,   18,   18,   18,   18,   18,   18,   18,   18,
   18,   18,   18,   18,   18,   18,   18,   18,   18,   18,
   18,   18,   18,   18,   13,   14,   14,   12,   12,   23,
   23,   24,   24,   25,   26,   26,   20,   20,   22,   27,
   27,   19,    4,
};
static const YYINT yylen[] = {                            2,
    1,    1,    2,    1,    6,    5,    6,    5,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    4,    2,    3,
    2,    4,    3,    2,    1,    2,    2,    1,    1,    1,
    1,    3,    6,    6,    2,    2,    3,    3,    3,    3,
    1,    1,    1,    4,    1,    1,    1,    1,    1,    2,
    1,    1,    1,    2,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    5,    3,    2,    5,    7,    1,
    1,    5,    4,    3,    3,    3,    2,    2,    2,    3,
    1,    1,    1,
};
static const YYINT yydefred[] = {                         0,
   11,   12,   17,   14,   16,   15,    0,   13,    0,    1,
    0,    4,    9,    0,   10,    0,    0,    0,    0,    0,
   21,   93,   31,    0,    0,    0,    0,   25,    0,   28,
   29,   30,    0,    0,   42,   43,    3,    0,    0,    0,
    0,    0,    0,    0,    0,   47,   80,   81,   46,    0,
    0,    0,   48,   49,   51,   52,   53,   89,   21,    0,
    0,    0,    0,   36,    0,    0,   20,    0,   24,   23,
   27,   26,    0,    0,    0,    0,    0,   92,    0,    0,
    0,   88,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   32,    0,    0,
    0,    0,    0,    0,    0,    0,   20,    0,    0,    0,
   22,   40,    0,   38,    0,    0,    0,    0,    0,    0,
   85,   86,   84,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   73,   74,
   71,   70,   68,   69,   67,   72,   44,    0,    6,    8,
    0,    0,    0,    0,   75,   83,    0,    0,    5,    7,
    0,   77,    0,    0,    0,   82,   18,   76,   79,
};
static const YYINT yydgoto[] = {                          9,
   10,   11,   23,   50,  117,   13,   25,   26,   27,   28,
   29,   30,   31,   32,   33,   15,   34,   83,   80,   52,
   53,   36,   54,   55,   56,   57,  126,
};
static const YYINT yysindex[] = {                      -234,
    0,    0,    0,    0,    0,    0, -140,    0,    0,    0,
 -234,    0,    0, -293,    0, -276, -275,   94, -293,  -76,
    0,    0,    0, -254,  111,  -63, -243,    0, -219,    0,
    0,    0, -184, -160,    0,    0,    0, -176,   94,   94,
   94, -287, -293,   94,   94,    0,    0,    0,    0, -169,
  314, -197,    0,    0,    0,    0,    0,    0,    0,  -19,
   94,   94, -155,    0,  332,    0,    0, -164,    0,    0,
    0,    0,   60, -227,  209,  226,  332,    0, -151, -141,
 -254,    0,  332,  243,   77,   94,   94,   94,   94,   94,
   94,   94,   94,   94,   94,   94,   94,    0, -146, -146,
 -146, -146, -146, -146, -146, -146,    0,  193, -169, -127,
    0,    0,  332,    0, -197, -149, -150, -293, -137, -137,
    0,    0,    0, -144,  332, -239,  332,  332,  332,  332,
  332,  332,  332,  332,  332,  332,  332,  332,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -218,    0,    0,
 -149, -135,   36, -116,    0,    0,   94, -133,    0,    0,
 -199,    0,   47, -137,  332,    0,    0,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  163,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -111,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  143,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  260,    0, -120,  278,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -186,    0,    0,    0,
  168,    0, -183,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  296,    0,
    0,    0, -119,    0, -117,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -225,    0,  -13,  112,  330,  333,
  341,  344,  352,  355,  363,  366,  374,  377,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -115,    0,   -6,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -222,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,    0,   41,   -5,   15,  -70,    1,  -17,  -18,  -21,
    0,    0,    0, -113,  152,  -69,    0,    4,  106,  216,
   -7,    0,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 672
static const YYINT yytable[] = {                         35,
   14,   24,   60,   22,   69,  154,  155,   68,   38,   22,
   78,   14,   35,   58,   24,   39,   40,   66,   35,   63,
   24,   51,    1,    2,    3,    4,    5,    6,   65,    1,
    2,    3,    4,    5,    6,   82,   79,   81,   69,   61,
   12,   68,   75,   76,   77,  149,  150,   70,   84,  157,
  169,   37,   35,  158,   24,    7,  109,    1,    2,    3,
    4,    5,    6,   91,  108,  116,   90,   91,   71,  156,
   90,    7,    8,   99,  118,  100,  113,  149,  150,    8,
  159,  160,  101,  102,  103,  104,  105,  106,  125,  127,
  128,  129,  130,  131,  132,  133,  134,  135,  136,  137,
  138,   54,   54,   72,   50,   50,   54,    8,   54,   50,
  118,   50,  152,  125,   73,   74,    1,    2,    3,    4,
    5,    6,   85,   16,   61,   17,  111,  121,   18,    1,
    2,    3,    4,    5,    6,  163,  110,  122,   61,   43,
    7,   69,  151,  156,   41,   35,   19,   24,  164,   20,
   21,   42,  153,  161,  166,   35,   22,   24,   43,   44,
  165,  118,    2,   41,   45,  148,    8,   35,   37,   22,
   39,   46,   47,   48,   49,  167,   64,   19,  114,    8,
    1,    2,    3,    4,    5,    6,    0,   16,    0,   17,
    0,    0,   18,    1,    2,    3,    4,    5,    6,    0,
   16,    0,   17,    0,    0,   18,    0,    0,    0,    0,
   19,    0,    0,   20,   59,    0,    0,    0,    0,    0,
   22,    0,    0,   19,    0,    0,   20,   67,    0,    0,
    8,    0,    0,   22,    0,    0,    0,    1,    2,    3,
    4,    5,    6,    8,   16,    0,   17,    0,    0,   18,
   78,   78,   78,   78,   78,   78,    0,   78,    0,   78,
    0,    0,   78,    0,    0,    0,    0,   19,    0,    0,
   20,  107,    0,    0,   65,   65,    0,   22,    0,   65,
   78,   65,    0,   78,   78,    0,    0,    8,  115,    0,
   78,    0,    1,    2,    3,    4,    5,    6,    0,   16,
   78,   17,    0,    1,    2,    3,    4,    5,    6,    0,
   16,    0,   17,    0,  139,  140,  141,  142,  143,  144,
  145,  146,   19,    0,    0,   20,  162,    0,    0,  112,
    0,   41,   22,   19,    0,    0,   20,  168,   42,    0,
    0,    0,    8,   22,    0,   43,   44,    0,   41,    0,
    0,   45,    0,    8,    0,   42,   22,   78,   46,   47,
   48,   49,   43,   44,    0,   41,    0,    0,   45,  124,
    0,    0,   42,   22,    0,   46,   47,   48,   49,   43,
   44,    0,   41,    0,    0,   45,    0,    0,    0,   42,
   22,    0,   46,   47,   48,   49,   43,   62,    0,   56,
   56,    0,   45,    0,   56,    0,   56,   22,    0,   46,
   47,   48,   49,   45,   45,   45,   45,    0,    0,   45,
   45,    0,   45,   45,   45,   45,   45,   45,    0,    0,
   45,   45,    0,    0,    0,   45,    0,   45,   87,   87,
   87,   87,    0,    0,   87,   87,    0,   87,   87,   87,
   87,   87,   87,    0,    0,   87,   87,    0,    0,    0,
   87,    0,   87,   86,   87,   88,   89,    0,    0,   90,
   91,    0,   92,   93,   94,   95,   96,   97,    0,   86,
   87,   88,   89,    0,    0,   90,   91,  147,   92,   93,
   94,   95,   96,   97,    0,    0,   86,   87,   88,   89,
    0,  119,   90,   91,    0,   92,   93,   94,   95,   96,
   97,    0,    0,   86,   87,   88,   89,    0,  120,   90,
   91,    0,   92,   93,   94,   95,   96,   97,    0,    0,
   45,   45,   45,   45,   41,  123,   45,   45,    0,   45,
   45,   45,   45,   45,   45,    0,    0,   45,   48,   48,
   48,   48,   42,    0,   48,   48,    0,   48,   48,   48,
   48,   48,   48,    0,    0,   48,   45,   45,   45,   45,
   89,    0,   45,   45,    0,   45,   45,   45,   45,   45,
   45,    0,    0,   45,   86,   87,   88,   89,    0,    0,
   90,   91,    0,   92,   93,   94,   95,   96,   97,    0,
    0,   98,   86,   87,   88,   89,    0,    0,   90,   91,
    0,   92,   93,   94,   95,   96,   97,   66,   66,    0,
   58,   58,   66,    0,   66,   58,    0,   58,   55,   55,
    0,   57,   57,   55,    0,   55,   57,    0,   57,   63,
   63,    0,   62,   62,   63,    0,   63,   62,    0,   62,
   60,   60,    0,   61,   61,   60,    0,   60,   61,    0,
   61,   59,   59,    0,   64,   64,   59,    0,   59,   64,
    0,   64,
};
static const YYINT yycheck[] = {                          7,
    0,    7,   20,  297,   26,  119,  120,   26,   14,  297,
  298,   11,   20,   19,   20,  292,  292,   25,   26,   25,
   26,   18,  257,  258,  259,  260,  261,  262,   25,  257,
  258,  259,  260,  261,  262,   43,   42,   43,   60,  294,
    0,   60,   39,   40,   41,  116,  116,  291,   45,  289,
  164,   11,   60,  293,   60,  290,   62,  257,  258,  259,
  260,  261,  262,  289,   61,  293,  289,  293,  288,  288,
  293,  290,  307,  271,   74,  273,   73,  148,  148,  307,
  151,  151,  280,  281,  282,  283,  284,  285,   85,   86,
   87,   88,   89,   90,   91,   92,   93,   94,   95,   96,
   97,  288,  289,  288,  288,  289,  293,  307,  295,  293,
  110,  295,  118,  110,  275,  292,  257,  258,  259,  260,
  261,  262,  292,  264,  294,  266,  291,  279,  269,  257,
  258,  259,  260,  261,  262,  153,  292,  279,  294,  286,
  290,  163,  293,  288,  272,  153,  287,  153,  265,  290,
  291,  279,  290,  289,  288,  163,  297,  163,  286,  287,
  157,  161,    0,  275,  292,  293,  307,  288,  288,  297,
  288,  299,  300,  301,  302,  161,   25,  293,   73,  307,
  257,  258,  259,  260,  261,  262,   -1,  264,   -1,  266,
   -1,   -1,  269,  257,  258,  259,  260,  261,  262,   -1,
  264,   -1,  266,   -1,   -1,  269,   -1,   -1,   -1,   -1,
  287,   -1,   -1,  290,  291,   -1,   -1,   -1,   -1,   -1,
  297,   -1,   -1,  287,   -1,   -1,  290,  291,   -1,   -1,
  307,   -1,   -1,  297,   -1,   -1,   -1,  257,  258,  259,
  260,  261,  262,  307,  264,   -1,  266,   -1,   -1,  269,
  257,  258,  259,  260,  261,  262,   -1,  264,   -1,  266,
   -1,   -1,  269,   -1,   -1,   -1,   -1,  287,   -1,   -1,
  290,  291,   -1,   -1,  288,  289,   -1,  297,   -1,  293,
  287,  295,   -1,  290,  291,   -1,   -1,  307,   73,   -1,
  297,   -1,  257,  258,  259,  260,  261,  262,   -1,  264,
  307,  266,   -1,  257,  258,  259,  260,  261,  262,   -1,
  264,   -1,  266,   -1,   99,  100,  101,  102,  103,  104,
  105,  106,  287,   -1,   -1,  290,  291,   -1,   -1,  270,
   -1,  272,  297,  287,   -1,   -1,  290,  291,  279,   -1,
   -1,   -1,  307,  297,   -1,  286,  287,   -1,  272,   -1,
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
  278,   -1,  280,  281,  282,  283,  284,  285,   -1,  271,
  272,  273,  274,   -1,   -1,  277,  278,  295,  280,  281,
  282,  283,  284,  285,   -1,   -1,  271,  272,  273,  274,
   -1,  293,  277,  278,   -1,  280,  281,  282,  283,  284,
  285,   -1,   -1,  271,  272,  273,  274,   -1,  293,  277,
  278,   -1,  280,  281,  282,  283,  284,  285,   -1,   -1,
  271,  272,  273,  274,  275,  293,  277,  278,   -1,  280,
  281,  282,  283,  284,  285,   -1,   -1,  288,  271,  272,
  273,  274,  275,   -1,  277,  278,   -1,  280,  281,  282,
  283,  284,  285,   -1,   -1,  288,  271,  272,  273,  274,
  275,   -1,  277,  278,   -1,  280,  281,  282,  283,  284,
  285,   -1,   -1,  288,  271,  272,  273,  274,   -1,   -1,
  277,  278,   -1,  280,  281,  282,  283,  284,  285,   -1,
   -1,  288,  271,  272,  273,  274,   -1,   -1,  277,  278,
   -1,  280,  281,  282,  283,  284,  285,  288,  289,   -1,
  288,  289,  293,   -1,  295,  293,   -1,  295,  288,  289,
   -1,  288,  289,  293,   -1,  295,  293,   -1,  295,  288,
  289,   -1,  288,  289,  293,   -1,  295,  293,   -1,  295,
  288,  289,   -1,  288,  289,  293,   -1,  295,  293,   -1,
  295,  288,  289,   -1,  288,  289,  293,   -1,  295,  293,
   -1,  295,
};
#define YYFINAL 9
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
"PROC : BLOCK_W_RETURN",
"PROC : BLOCK_W",
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
#line 214 "parser.y"


#include "lex.yy.c"
main(){

    //print_ast(ourProgram);

    return yyparse();
}

void yyerror(const char *c){
	fprintf(stderr,"line %d: %s\n",yylineno - 1,c);
	
}


#line 541 "y.tab.c"

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
	{ yyval.n = makeNode(yystack.l_mark[-5].n->token,yystack.l_mark[-4].n,yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL);}
break;
case 6:
#line 66 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-4].n->token,yystack.l_mark[-3].n,yystack.l_mark[0].n,NULL,NULL);  }
break;
case 7:
#line 68 "parser.y"
	{yyval.n = makeNode(yystack.l_mark[-5].n->token,yystack.l_mark[-4].n,yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL);}
break;
case 8:
#line 70 "parser.y"
	{yyval.n = makeNode(yystack.l_mark[-4].n->token,yystack.l_mark[-3].n,yystack.l_mark[0].n,NULL,NULL);}
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
	{ yyval.n=makeNode("boolean",NULL,NULL,NULL,NULL); }
break;
case 12:
#line 78 "parser.y"
	{ yyval.n=makeNode("char",NULL,NULL,NULL,NULL); }
break;
case 13:
#line 79 "parser.y"
	{ yyval.n=makeNode("charp",NULL,NULL,NULL,NULL); }
break;
case 14:
#line 80 "parser.y"
	{ yyval.n=makeNode("int",NULL,NULL,NULL,NULL); }
break;
case 15:
#line 81 "parser.y"
	{ yyval.n=makeNode("intp",NULL,NULL,NULL,NULL); }
break;
case 16:
#line 82 "parser.y"
	{ yyval.n=makeNode("string",NULL,NULL,NULL,NULL); }
break;
case 17:
#line 83 "parser.y"
	{ yyval.n=makeNode("void",NULL,NULL,NULL,NULL); }
break;
case 18:
#line 88 "parser.y"
	{ yyval.n = makeNode("",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 19:
#line 89 "parser.y"
	{yyval.n=yystack.l_mark[0].n;}
break;
case 20:
#line 92 "parser.y"
	{yyval.n = yystack.l_mark[-1].n;}
break;
case 21:
#line 93 "parser.y"
	{}
break;
case 22:
#line 96 "parser.y"
	{yyval.n = makeNode("",yystack.l_mark[-2].n,yystack.l_mark[-1].n,NULL,NULL);}
break;
case 23:
#line 97 "parser.y"
	{yyval.n = yystack.l_mark[-1].n;}
break;
case 24:
#line 100 "parser.y"
	{ yyval.n = makeNode("", yystack.l_mark[-1].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 25:
#line 101 "parser.y"
	{ yyval.n = yystack.l_mark[0].n ; }
break;
case 26:
#line 103 "parser.y"
	{ yyval.n = yystack.l_mark[-1].n; }
break;
case 27:
#line 104 "parser.y"
	{ yyval.n = yystack.l_mark[-1].n; }
break;
case 28:
#line 105 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 29:
#line 106 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 30:
#line 107 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 31:
#line 108 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 32:
#line 111 "parser.y"
	{ yyval.n = makeNode("return",yystack.l_mark[-1].n,NULL,NULL,NULL); }
break;
case 33:
#line 114 "parser.y"
	{ 
        yyval.n = makeNode (yystack.l_mark[-5].n->token,yystack.l_mark[-4].n,yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL); 
        }
break;
case 34:
#line 118 "parser.y"
	{
        yyval.n = makeNode (yystack.l_mark[-5].n->token,yystack.l_mark[-4].n,yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL);
        }
break;
case 35:
#line 122 "parser.y"
	{ yyval.n = makeNode ("",yystack.l_mark[-1].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 36:
#line 123 "parser.y"
	{ yyval.n = makeNode ("",yystack.l_mark[-1].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 37:
#line 126 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL); }
break;
case 38:
#line 127 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL);}
break;
case 39:
#line 128 "parser.y"
	{ yyval.n = makeNode("=", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL);}
break;
case 40:
#line 129 "parser.y"
	{yyval.n = makeNode("=", yystack.l_mark[-2].n, makeNode("NULL POINTER",NULL,NULL,NULL,NULL),NULL,NULL); }
break;
case 41:
#line 133 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 42:
#line 134 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 43:
#line 135 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 44:
#line 138 "parser.y"
	{ yyval.n = makeNode("STRING INDEX", yystack.l_mark[-3].n, yystack.l_mark[-1].n,NULL,NULL) ;}
break;
case 45:
#line 140 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 46:
#line 141 "parser.y"
	{ yyval.n = makeNode(yytext, NULL, NULL,NULL,NULL); }
break;
case 47:
#line 142 "parser.y"
	{ yyval.n = makeNode(yytext, NULL, NULL,NULL,NULL); }
break;
case 48:
#line 143 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 49:
#line 144 "parser.y"
	{ yyval.n = makeNode("boolean", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 50:
#line 145 "parser.y"
	{ yyval.n = makeNode("dereference", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 51:
#line 146 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 52:
#line 147 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 53:
#line 148 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 54:
#line 149 "parser.y"
	{ yyval.n = makeNode("!", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 55:
#line 150 "parser.y"
	{ yyval.n = makeNode("+",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 56:
#line 151 "parser.y"
	{ yyval.n = makeNode("-",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 57:
#line 152 "parser.y"
	{ yyval.n = makeNode("*",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 58:
#line 153 "parser.y"
	{ yyval.n = makeNode("/",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 59:
#line 154 "parser.y"
	{ yyval.n = makeNode("<",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 60:
#line 155 "parser.y"
	{ yyval.n = makeNode(">",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 61:
#line 156 "parser.y"
	{ yyval.n = makeNode("<=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 62:
#line 157 "parser.y"
	{ yyval.n = makeNode(">=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 63:
#line 158 "parser.y"
	{ yyval.n = makeNode("==",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 64:
#line 159 "parser.y"
	{ yyval.n = makeNode("!=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 65:
#line 160 "parser.y"
	{ yyval.n = makeNode("&&",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 66:
#line 161 "parser.y"
	{ yyval.n = makeNode("||",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 67:
#line 162 "parser.y"
	{ yyval.n = makeNode("<",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 68:
#line 163 "parser.y"
	{ yyval.n = makeNode(">",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 69:
#line 164 "parser.y"
	{ yyval.n = makeNode("<=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL);}
break;
case 70:
#line 165 "parser.y"
	{ yyval.n = makeNode(">=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 71:
#line 166 "parser.y"
	{ yyval.n = makeNode("==",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 72:
#line 167 "parser.y"
	{ yyval.n = makeNode("!=",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 73:
#line 168 "parser.y"
	{ yyval.n = makeNode("&&",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 74:
#line 169 "parser.y"
	{ yyval.n = makeNode("||",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 75:
#line 172 "parser.y"
	{ yyval.n = makeNode("while",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 76:
#line 175 "parser.y"
	{yyval.n = yystack.l_mark[-1].n;}
break;
case 77:
#line 176 "parser.y"
	{yyval.n = makeNode("{}",NULL,NULL,NULL,NULL);}
break;
case 78:
#line 179 "parser.y"
	{yyval.n = makeNode("if",yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 79:
#line 180 "parser.y"
	{ yyval.n = makeNode("if", yystack.l_mark[-4].n, makeNode("else", yystack.l_mark[-2].n, yystack.l_mark[0].n,NULL,NULL),NULL,NULL);}
break;
case 80:
#line 183 "parser.y"
	{ yyval.n = makeNode("true", NULL,NULL,NULL,NULL); }
break;
case 81:
#line 184 "parser.y"
	{ yyval.n = makeNode("false", NULL, NULL,NULL,NULL); }
break;
case 82:
#line 187 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-4].n->token,yystack.l_mark[-4].n, yystack.l_mark[-2].n,NULL,NULL); }
break;
case 83:
#line 188 "parser.y"
	{ yyval.n = makeNode(yystack.l_mark[-3].n->token,yystack.l_mark[-3].n, NULL,NULL,NULL); }
break;
case 84:
#line 191 "parser.y"
	{ yyval.n = makeNode("",yystack.l_mark[-1].n,NULL,NULL,NULL); }
break;
case 85:
#line 194 "parser.y"
	{ yyval.n = makeNode("ABS",yystack.l_mark[-1].n,NULL,NULL,NULL); }
break;
case 86:
#line 195 "parser.y"
	{ yyval.n = makeNode("ABS",yystack.l_mark[-1].n,NULL,NULL,NULL); }
break;
case 87:
#line 198 "parser.y"
	{ yyval.n = makeNode("&", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 88:
#line 199 "parser.y"
	{ yyval.n = makeNode("&", yystack.l_mark[0].n ,NULL,NULL,NULL); }
break;
case 89:
#line 202 "parser.y"
	{ yyval.n = makeNode("^", yystack.l_mark[0].n, NULL,NULL,NULL); }
break;
case 90:
#line 205 "parser.y"
	{ yyval.n = makeNode(""/*Multiple Expressions*/,yystack.l_mark[-2].n,yystack.l_mark[0].n,NULL,NULL); }
break;
case 91:
#line 206 "parser.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 92:
#line 209 "parser.y"
	{ yyval.n = makeNode(yytext,NULL,NULL,NULL,NULL); }
break;
case 93:
#line 212 "parser.y"
	{yyval.n=makeNode(yytext,NULL,NULL,NULL,NULL);}
break;
#line 1119 "y.tab.c"
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


#ifndef DEFINITIONS_H
#define DEFINITIONS_H


#define PROCEDURE_DEF 0             /*New function*/
#define IF_DEF 1                    /*If statement*/
#define END_OF_BLOCK 2              /*Thats hwo we know we ended some block*/
#define DECLARATION_DEF 3           /*Declaration before a variable*/
#define PARAMS_DEF 4                /*Parameters in a function*/
#define IDENTIFIER_DEF 5            /*Token of an identifier*/
#define PROC_CALL_DEF  6            /*When we call to function*/
#define PROC_STATEMENT 7            /*When we declare a function*/
#define END_OF_PARAMETERS_IN_FUNC 8 /*Thats how we know we ended the parameters in function*/


#define CHAR_DEF    9
#define CHARP_DEF   10
#define INT_DEF     11
#define INTP_DEF    12
#define STRING_DEF  13
#define VOID_DEF    14
#define BOOLEAN_DEF 15 /*Function, not expression*/

#define BOOL_DEF    16
#define NULL_DEF    17
#define NOT_DEF     18
#define LT_DEF      19
#define GT_DEF      20 
#define LE_DEF      21
#define GE_DEF      22
#define EQ_DEF      23
#define NE_DEF      24
#define AND_DEF     25
#define OR_DEF      26
#define START_BOOL  16
#define END_BOOL    26

#define FOR_DEF     27
#define END_OF_PARAMETERS_IN_STRING_INDEX 28
#define INTEGER_LITERAL_DEF 29
#define OP_DEF 30
#define ASSIGNMENT_DEF 31
#define STRING_LITERAL_DEF 32

typedef enum {false=0, true=1} bool;

//#define MAIN_SGINATURE 999          /*Mark main so we know we already checked it*/
#define NEW_ENVIRONMENT(x) ((x) == (PROCEDURE_DEF) /*|| (x) == (IF_DEF)*/ ? (1) : (0))
#define AM_I_BOOLEAN(x) ((x) < START_BOOL || (x) > END_BOOL ? (false) : (true))
#define IS_STATMENT(x) ((x) == (CHAR_DEF) || (x) == (CHARP_DEF) || (x) == (INTP_DEF) || (x) == (STRING_DEF) || (x) == (VOID_DEF) || (x) == (BOOLEAN_DEF) || (x) == (BOOLEAN_DEF) ? (1) : (0))


//Max debug mode for now 9
#define DEBUG_MODE 0
#endif

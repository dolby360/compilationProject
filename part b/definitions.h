
#ifndef DEFINITIONS_H
#define DEFINITIONS_H


#define PROCEDURE_DEF 0     /*New function*/
#define IF_DEF 1            /*If statement*/
#define END_OF_BLOCK 2      /*Thats hwo we know we ended some block*/
#define DECLARATION_DEF 3   /*Declaration before a variable*/
#define PARAMS_DEF 4        /*Parameters in a function*/

#define NEW_ENVIRONMENT(x) ((x) == (PROCEDURE_DEF) || (x) == (IF_DEF) ? (1) : (0))

typedef enum {false=0, true=1} bool;

//Max debug mode for now 4
#define DEBUG_MODE 4
#endif

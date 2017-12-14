
#ifndef DEFINITIONS_H
#define DEFINITIONS_H

#define PROCEDURE_DEF 0
#define IF_DEF 1

#define NEW_ENVIRONMENT(x) ((x) == (PROCEDURE_DEF) || (x) == (IF_DEF) ? (1) : (0))
#define END_OF_BLOCK 2

//#define DEBUG_MODE 
#endif

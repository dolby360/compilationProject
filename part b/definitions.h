
#ifndef DEFINITIONS_H
#define DEFINITIONS_H

#define PROCEDURE_DEF 0
#define IF_DEF 0

#define NEW_ENVIRONMENT(x) ((x) == (PROCEDURE_DEF) || (IF_DEF) ? (1) : (0))

#endif

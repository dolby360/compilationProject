#ifndef SEMANTIC_H
#define SEMANTIC_H


/*
Potential fail here
It may not recognize the folder.
*/
#include "../ast/print_ast.h"


typedef struct symbTable{
    int type;
    char* name;
    int scope;
    // if scope increased
    struct symbTable* child;
    struct symbTable* parent;
    struct symbTable* next;
    struct symbTable* before;
}symbTable;

static symbTable** smt;
static symbTable* head;
static symbTable* helper1;
static symbTable* helper2;
static int mainAlreadyExist;
static int lastType;
/*
TODO: Function that free all memory.
*/

void returnTheSmtPointerToTheBeginning();
void checkMain();
int lookup(symbTable* looker);
void buildSymbTable(node* root,int nest);
void printSymbTable();
void init();
void testingAfterSymbolTableBuiltUp();



/*Mission one*/
void checkIfMainDoseNotExist();
/*Mission two*/
void checkIfMainGetArguments();
/*Mission three*/
void thereAreNoTwoFunctionsWithTheSameNameInTheScope();
/*Mission four*/
void theAreNoTwoVariablesWithTheSameNmaeInTheScope();
/*Mission five*/
void functionsDefinedBeforeTheyHaveBeenCalled();
/*Mission six*/
void variablesAreDefinedBeforeUsed();
/*Mission seven*/
void numberOfArgumentsInTheCallingFunctionAreFits();
/*Mission */
#endif
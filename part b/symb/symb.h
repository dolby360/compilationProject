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
    //amout of recived parameters
    //int numOfRecivedPar;
    //char* returnVal;
}symbTable;

static symbTable** smt;
static symbTable* head;
static bool mainAlreadyExist;

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
#endif
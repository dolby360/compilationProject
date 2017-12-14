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

void lookup(symbTable* looker);
void buildSymbTable(node* root,int nest);
void printSymbTable();

#endif
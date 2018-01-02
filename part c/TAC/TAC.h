#ifndef TAC_H
#define TAC_H

#include "../ast/ast.h"

void genTacAssign(node* ast);
void genTacOp(node* ast);
void genIdentifier(node* ast);


tac* makeNewTac();
void makeButtomUp(node* ast);
void makeTopDown(node* ast);
void printTreeAddressCode(node* ast);

#endif
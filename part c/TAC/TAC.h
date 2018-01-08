#ifndef TAC_H
#define TAC_H

#include "../ast/ast.h"

void genTacAssign(node* ast);
void genTacOp(node* ast);
void genIdentifier(node* ast);
void genCondition(node* ast);
void genBooleanExp(node* ast);
void genWhile(node* ast);
void genFor(node* ast);
void ifConcatination(node* ast);
void countMemory(node* ast,int type);

char* freshLabel();
tac* makeNewTac();
void makeButtomUp(node* ast);
void makeTopDown(node* ast);
void printTreeAddressCode(node* ast);

#endif
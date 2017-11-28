#ifndef PRINT_AST
#define PRINT_AST

#include "ast.h"

void print_ast(node* ast);
void printPreOrder(node* root,int nest);

#endif
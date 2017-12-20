#ifndef AST_H
#define AST_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/*
Potential fail here
It may not recognize the folder.
*/
#include "../definitions.h"

typedef struct node{
    int     tokenDef;
    char*   token;
    int     numberOfParameters;/*Number of parameter in function*/
    struct  node* nodeOne;
    struct  node* nodeTwo;
    struct  node* nodeThree;
    struct  node* nodeFour;
}node;

node* makeNode(char* token_ ,node* nodeOne_ ,node* nodeTwo_,node* nodeThree_, node* nodeFour_);
node* makeNodeWithDef(int def, char* token_ ,node* nodeOne_ ,node* nodeTwo_,node* nodeThree_, node* nodeFour_);
node* endOfBlock();
node* endOfParameter();
node* endOfStringIndex();
node* getAstAsaTree();

#endif
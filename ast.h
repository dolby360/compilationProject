#ifndef AST_H
#define AST_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/*
typedef struct node{
    char *token;
    struct node *left;
    struct node *right;
}node;

node* mknode(char *token,node *left, node *right);
*/

typedef struct procedurList{
    int numberInTheNest
}procedurList;

typedef struct program{
    int token;
    procedurList* procedurNode;
}program;


program* makeProgram(procedurList* pl);

procedurList* makeProcedurList();

#endif
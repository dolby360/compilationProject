#ifndef AST_H
#define AST_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct node{
    char* token;
    struct node* nodeOne;
    struct node* nodeTwo;
    struct node* nodeThree;
    struct node* nodeFour;
}node;

node* makeNode(char* token_ ,node* nodeOne_ ,node* nodeTwo_,node* nodeThree_, node* nodeFour_);



#endif
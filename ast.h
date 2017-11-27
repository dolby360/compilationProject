#ifndef AST_H
#define AST_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct node{
    char* token;
    struct node* left;
    struct node* right;
    
}node;


node* makeNode(char* token ,node* nodeLeft ,node* nodeRight);

#endif
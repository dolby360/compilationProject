#ifndef AST_H
#define AST_H

typedef struct node{
    char *token;
    struct node *left;
    struct node *right;
}node;

node* mknode(char *token,node *left, node *right);


#endif
#ifndef AST_H
#define AST_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct exper{
    int token;
    exper*  exp;
    char*   leftCharVariable;
    char*   rightCharVariable; 
    int     leftIntVariable;
    int     rightIntVariable;   
}exper;

typedef struct ifNode{
    int     token;
    int     nestLocation;
    exper*  exp;
}ifNode;
 
typedef struct program{
    int token;
    ifNode* ifNode_;
}program;


exper* makeExper(int token,exper* e,char* cLeft,char* cRight,int l,int r);

ifNode* makeIfNode(int token,int nest,expr* e);

#endif
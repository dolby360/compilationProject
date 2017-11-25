


#include "ast.h"


exper* makeExper(int token,exper* e,char* cLeft,char* cRight,int l,int r){
    exper* toReturn = (exper*)malloc(sizeof(exper));

    toReturn->token = token;
    toReturn->exp = (exper*)malloc(sizeof(exper));
    toReturn->leftCharVariable = cLeft;
    toReturn->rightCharVariable = cRight;
    toReturn->leftIntVariable = l;
    toReturn->rightIntVariable = r;

    return toReturn;
}


ifNode* makeIfNode(int token,int nest,expr* e){
    ifNode* toReturn = (ifNode*)malloc(sizeof(ifNode));

    toReturn->token = token;
    toReturn->nest = nest;
    toReturn->exp = e;
    
    return toReturn;
}


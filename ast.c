


#include "ast.h"



program* makeProgram(procedurList* pl){
    program* toReturn = (program*)malloc(sizeof(program));          
    toReturn.token = 0;
    toReturn.procedurNode = NULL;

    return toReturn;
}

procedurList* makeProcedurList(){
    procedurList* procedurToReturn = (procedurList*)malloc(sizeof(procedurList));

    procedurToReturn.numberInTheNest = 0;
}

/*
node* mknode(char* token,node *left, node *right){
    char* newStr = (char*)malloc(sizeof(token) + 1);
    node* newNode= (node*)malloc(sizeof(node));
    newNode->left = left;
    newNode->right = right;
    strcpy(newStr,token);
    newNode->token = newStr;

    return newNode;
}
*/


/*
void pirntConditions(char* cond){
    
}
*/



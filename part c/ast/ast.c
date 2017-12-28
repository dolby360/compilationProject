
#include "ast.h"

node* makeNode(char* token_ ,node* nodeOne_ ,node* nodeTwo_,node* nodeThree_, node* nodeFour_){

    node* nodeToReturn = (node*)malloc(sizeof(node));

    nodeToReturn->token = (char*)malloc(sizeof(token_ + 1));
    strcpy(nodeToReturn->token,token_);

    //Debug;
    //printf("test    =>  %s\n",nodeToReturn->token);

    nodeToReturn->nodeOne = nodeOne_ ;
    nodeToReturn->nodeTwo = nodeTwo_;
    nodeToReturn->nodeThree = nodeThree_ ;
    nodeToReturn->nodeFour = nodeFour_;

    nodeToReturn->tokenDef = -1;
    return nodeToReturn;
}

node* endOfBlock(){
    node* nodeToReturn = (node*)malloc(sizeof(node));

    nodeToReturn->token = (char*)malloc(sizeof("endOfBlock")+1);
    strcpy(nodeToReturn->token,"endOfBlock");

    //Debug;
    //printf("test    =>  %s\n",nodeToReturn->token);

    nodeToReturn->nodeOne = NULL ;
    nodeToReturn->nodeTwo = NULL;
    nodeToReturn->nodeThree = NULL ;
    nodeToReturn->nodeFour = NULL;

    nodeToReturn->tokenDef = END_OF_BLOCK;

    return nodeToReturn;
}

node* endOfParameter(){
    node* nodeToReturn = (node*)malloc(sizeof(node));

    nodeToReturn->token = (char*)malloc(sizeof("endOfParameter")+1);
    strcpy(nodeToReturn->token,"endOfParameter");

    nodeToReturn->nodeOne = NULL ;
    nodeToReturn->nodeTwo = NULL;
    nodeToReturn->nodeThree = NULL ;
    nodeToReturn->nodeFour = NULL;

    nodeToReturn->tokenDef = END_OF_PARAMETERS_IN_FUNC;

    return nodeToReturn;
}

node* endOfStringIndex(){
    node* nodeToReturn = (node*)malloc(sizeof(node));

    nodeToReturn->token = (char*)malloc(sizeof("E.O.P.I.S.I")+1);
    strcpy(nodeToReturn->token,"E.O.P.I.S.I");

    nodeToReturn->nodeOne = NULL ;
    nodeToReturn->nodeTwo = NULL;
    nodeToReturn->nodeThree = NULL ;
    nodeToReturn->nodeFour = NULL;

    nodeToReturn->tokenDef = END_OF_PARAMETERS_IN_STRING_INDEX;

    return nodeToReturn;
}

node* makeNodeWithDef(int def, char* token_ ,node* nodeOne_ ,node* nodeTwo_,node* nodeThree_, node* nodeFour_){
    node* nodeToReturn = (node*)malloc(sizeof(node));

    nodeToReturn->token = (char*)malloc(sizeof(token_ + 1));
    strcpy(nodeToReturn->token,token_);

    //Debug;
    //printf("test    =>  %s\n",nodeToReturn->token);

    nodeToReturn->nodeOne = nodeOne_ ;
    nodeToReturn->nodeTwo = nodeTwo_;
    nodeToReturn->nodeThree = nodeThree_ ;
    nodeToReturn->nodeFour = nodeFour_;

    nodeToReturn->tokenDef = def;

    return nodeToReturn;
}


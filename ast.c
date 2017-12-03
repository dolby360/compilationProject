
#include "ast.h"

node* makeNode(char* token_ ,node* nodeOne_ ,node* nodeTwo_,node* nodeThree_, node* nodeFour_){
    node* nodeToReturn = (node*)malloc(sizeof(node));

    nodeToReturn->token = (char*)malloc(sizeof(token_ + 1));
    strcpy(nodeToReturn->token,token_);

    nodeToReturn->nodeOne = nodeOne_ ;
    nodeToReturn->nodeTwo = nodeTwo_;
    nodeToReturn->nodeThree = nodeThree_ ;
    nodeToReturn->nodeFour = nodeFour_;

    return nodeToReturn;
}



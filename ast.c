
#include "ast.h"

node* makeNode(char* token ,node* nodeLeft ,node* nodeRight){
    node* nodeToReturn = (node*)malloc(sizeof(node));

    nodeToReturn->token = (char*)malloc(sizeof(token + 1));
    strcpy(nodeToReturn->token,token);

    nodeToReturn->left = nodeLeft;
    nodeToReturn->right = nodeRight;

    return nodeToReturn;
}



#include ast.h

node* mknode(char* token,node *left, node *right){
    char* newStr = (char*)malloc(sizeof(token) + 1);
    node* newNode= (node*)malloc(sizeof(node));
    newNode->left = left;
    newNode->right = right;
    strcpy(newStr,token);
    newNode->token = newStr;

    return newNode;
}


#include "print_ast.h"

void printPreOrder(node* root,int nest){
    int i;

    if(root)
    {
        for(i = 0;i<nest;i++){
            //printf("\t");

            if(strcmp(root->token,"") == 0){/*Do nothing*/}
            else{printf("\t");}
        }

        if(strcmp(root->token,"") == 0){/*Do nothing*/}
        else{printf("->%s\n",root->token);}

        printPreOrder(root->left,nest++);
        printPreOrder(root->right,nest++);
    }

}
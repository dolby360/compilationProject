#include "print_ast.h"

void printPreOrder(node* root,int nest){
    int i;

    if(root != NULL)
    {
        for(i = 0;i<nest;i++){
            //printf("\t");

            if(strcmp(root->token,"") == 0){/*Do nothing*/}
            else{printf("\t");}
        }

        if(strcmp(root->token,"") == 0){/*Do nothing*/}
        else{printf("->%s\n",root->token);}

        printPreOrder(root->nodeOne,nest+1);
        printPreOrder(root->nodeTwo,nest+1);
        printPreOrder(root->nodeThree,nest+1);
        printPreOrder(root->nodeFour,nest+1);
        
    }

}
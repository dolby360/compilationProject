#include "print_ast.h"

void printPreOrder(node* root,int nest){
    int i;

    if(root != NULL)
    {
        if(strcmp(root->token,"") != 0){
            for(i = 0;i<nest;i++){
                //printf("\t");
                
                //There is no reason why this "if" is here
                //just my laziness to write 10 times comment instead of 
                //just remove the stupid thing
                if(strcmp(root->token,"") == 0){/*Do nothing*/}
                else{printf("\t");}
            }
        }else{
            nest = nest-1;
        }
        if(strcmp(root->token,"") == 0){/*Do nothing*/}
        else{printf("->%s\n",root->token);}

        printPreOrder(root->nodeOne,nest+1);
        printPreOrder(root->nodeTwo,nest+1);
        printPreOrder(root->nodeThree,nest+1);
        printPreOrder(root->nodeFour,nest+1);
        
    }

}
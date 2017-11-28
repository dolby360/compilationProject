#include "print_ast.h"

void printPreOrder(node* root,int nest){
    int i;

    if(root)
    {
        for(i = 0;i<nest;i++){
            printf("\t");
        }

        if(strcmp(root->token,"") == 0){/*Do nothing*/}
        //else {printf("-> %s\n",root->token);}
        else if(
        strcmp(root->token,"}") == 0 || 
        strcmp(root->token,";") == 0 ||
        strcmp(root->token,")") == 0 
        )
        {printf("-> %s\n",root->token);}
        
        else{printf("%s",root->token);}

        printPreOrder(root->left,nest++);
        printPreOrder(root->right,nest++);
    }

}
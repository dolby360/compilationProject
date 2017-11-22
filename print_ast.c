

#include print_ast;
 
/* Given a binary tree, print its nodes in preorder*/
void print_ast(struct node* node)
{
     if (node == NULL){
        printf("\n");  
        return;
    }
 
     /* first print data of node */
     printf("%c ", node->token);  
 
     /* then recur on left sutree */
     print_ast(node->left);  
 
     /* now recur on right subtree */
     print_ast(node->right);
}    
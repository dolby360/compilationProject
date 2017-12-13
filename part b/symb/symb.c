#include "symb.h"

void init(){

}

void printSymbTable(node* root){
    smt = (symbTable**)malloc(sizeof(symbTable*));
    (*smt)  = (symbTable*)malloc(sizeof(symbTable));
    head = *smt;

    printP(root,0);
    symbTable* hight = head;

    //head = head->next;
    //head = head->next;
    
    while(hight){
        while(head){
            printf("%s",head->name);
            printf(":  %d\t   ",head->scope);
            head = head->next;
        }
        hight = hight->parent;
        head = hight;
        printf("\n");
    }
}

void printP(node* root,int nest){
    int i;
    

    if(root != NULL)
    {
        if(strcmp(root->token,"") != 0){
            for(i = 0; i<nest;i++){
                
            }
        }else{
            nest = nest-1;
        }
        if(strcmp(root->token,"") == 0){/*Do nothing*/}
        else{

            if(*smt == NULL){
                    (*smt)->type = root->tokenDef;
                    (*smt)->name = (char*)malloc(sizeof(root->token));
                    strcpy((*smt)->name,root->token);
                    (*smt)->scope = nest;
                    (*smt)->next = NULL;
                    (*smt)->before = NULL;
                    (*smt)->parent = NULL;
                }
                else{
                    printf("%d",root->tokenDef);
                    if(NEW_ENVIRONMENT(root->tokenDef)){
                        getBackToTheHead(smt);
                        (*smt)->parent = (symbTable*)malloc(sizeof(symbTable));
                        (*smt)->parent->child = smt;
                        (*smt) = (*smt)->parent;
                        (*smt)->type = root->tokenDef;
                        (*smt)->name = (char*)malloc(sizeof(root->token));
                        strcpy((*smt)->name,root->token);
                        (*smt)->scope = nest;
                        (*smt)->next = NULL;
                        //printf("\n\n%s",(*smt)->child->name);
                    }else{
                        /*Create Temp and concate to the list
                        after that increase the pointer
                        */
                        (*smt)->next = (symbTable*)malloc(sizeof(symbTable));
                        (*smt)->next->parent = NULL;
                        (*smt)->next->type = root->tokenDef;
                        (*smt)->next->name = (char*)malloc(sizeof(root->token));
                        strcpy((*smt)->next->name,root->token);
                        (*smt)->next->scope = nest;
                        (*smt)->next->next = NULL;
                        (*smt)->next->before = (*smt);
                        (*smt) = (*smt)->next;
                    }
                }
        }

        printP(root->nodeOne,nest+1);
        printP(root->nodeTwo,nest+1);
        printP(root->nodeThree,nest+1);
        printP(root->nodeFour,nest+1);
    }
}

void getBackToTheHead(symbTable* theLastNodeInTheList){
    while(theLastNodeInTheList->before){
        theLastNodeInTheList = theLastNodeInTheList->before;
    }
}
#include "symb.h"

void lookup(symbTable* looker){
    
}

void printSymbTable(node* root){
    smt = (symbTable**)malloc(sizeof(symbTable*));
    (*smt)  = (symbTable*)malloc(sizeof(symbTable));
    (*smt)->name = NULL;
    head = *smt;

    buildSymbTable(root,0);
    symbTable* hight = head;
    
    while(hight){
        while(head){
            printf("%s",head->name);
            printf("\t");
            head = head->next;
        }
        hight = hight->parent;
        head = hight;
        printf("\n");
    }
}

void buildSymbTable(node* root,int nest){
    int i;
    

    if(root != NULL)
    {
        if(strcmp(root->token,"") != 0){
            for(i = 0; i<nest ; i++){
                
            }
        }else{
            nest = nest-1;
        }
        if( !root->token || strcmp(root->token,"") == 0){/*Do nothing*/}
        else{
            if(root->tokenDef == END_OF_BLOCK){
                /*TODO:
                Look up fnction and after checking that there is no 
                problem drop the whole layer
                */

                
                while((*smt)->before){
                    (*smt) = (*smt)->before;
                }
                printf("**debug: %s***\n",(*smt)->name);
                symbTable* deleteMe;
                deleteMe = (*smt);
                
                if((*smt)->child){
                    (*smt) = (*smt)->child;
                }

                /*
                TODO:
                Here we need to delete the list.
                */
                
                while((*smt)->next){
                    (*smt) = (*smt)->next;
                }
                
            }else if(NEW_ENVIRONMENT(root->tokenDef) && nest != 0){
                //In this case we see new environment.
                while((*smt)->before){
                    (*smt) = (*smt)->before;
                }

                (*smt)->parent = (symbTable*)malloc(sizeof(symbTable));
                (*smt)->parent->child = (*smt);
                (*smt) = (*smt)->parent;

                #ifdef DEBUG_MODE
                    printf("1)NEW ENV:   %s\n",(*smt)->child->name);
                #endif

                (*smt)->type = root->tokenDef;
                (*smt)->name = (char*)malloc(sizeof(root->token));
                strcpy((*smt)->name,root->token);
                #ifdef DEBUG_MODE
                    printf("NEW ENV:   %s\n",(*smt)->name);
                #endif
                //(*smt)->next = (symbTable*)malloc(sizeof(symbTable));
                (*smt)->scope = nest;
                (*smt)->before = NULL;
                //(*smt) = (*smt)->next;
            
            }else if((*smt)->name == NULL){
                //In this case this is the first node;
                
                (*smt)->type = root->tokenDef;
                (*smt)->name = (char*)malloc(sizeof(root->token));
                strcpy((*smt)->name,root->token);
                (*smt)->scope = nest;

                (*smt)->next = NULL;
                (*smt)->before = NULL;
                (*smt)->parent = NULL;
                (*smt)->child = NULL;

                #ifdef DEBUG_MODE
                    printf("first node:   %s\n",(*smt)->name);
                #endif
            }else{
                /*
                Here we are building a node for the general case. 
                */

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
                #ifdef DEBUG_MODE
                    printf("(*smt)->next->name:   %s\n",(*smt)->name);
                #endif
            }

        }

        buildSymbTable(root->nodeOne,nest+1);
        buildSymbTable(root->nodeTwo,nest+1);
        buildSymbTable(root->nodeThree,nest+1);
        buildSymbTable(root->nodeFour,nest+1);
    }
}
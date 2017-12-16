#include "symb.h"

void init(){
    smt = (symbTable**)malloc(sizeof(symbTable*));
    (*smt)  = (symbTable*)malloc(sizeof(symbTable));
    (*smt)->name = NULL;
    head = *smt;
    mainAlreadyExist;
}

int lookup(symbTable* looker){
    
}

void returnTheSmtPointerToTheBeginning(){
    while((*smt)->before){
        (*smt) = (*smt)->before;
    }
    while((*smt)->child){
        (*smt) = (*smt)->child;
    }
}

/*Mission one*/
void checkIfMainDoseNotExist(){
    if(!mainAlreadyExist){
        printf("ERROR: main not decleared\n");
        exit(0);
    }
}
/*Mission two*/
void checkIfMainGetArguments(){
    returnTheSmtPointerToTheBeginning();

    int prcedureToken = -1;
    char second[16];
    
    symbTable* hight = (*smt);
    while(hight){
        while((*smt)->next){


            prcedureToken = (*smt)->type;
            memset (second,'\0',16);
            strcpy(second,(*smt)->next->name);

            #if DEBUG_MODE == 3
                printf("second = %s\n",second);
                printf("prcedureToken = %d\n\n",prcedureToken);
            #endif


            if(second[0] == 'm' && prcedureToken == 0){
                if(strcmp(second,"main")==0){
                    if((*smt)->next->next->type == PARAMS_DEF){
                        printf("ERROR: main cannot contain parameters\n");
                        exit(0);
                    }
                }
            }
            (*smt) = (*smt)->next;
        }
        hight = hight->parent;
        if(!hight){
            break;
        }
        (*smt) = hight;
    }
    free(hight);
}

/*Mission three*/
void thereAreNoTwoFunctionsWithTheSameNameInTheScope(){
    int loop1 = 0;
    int loop2 = 0;
    char** functionsList;
    functionsList = (char**)malloc(sizeof(char*));
    int i=0;
    int k = 1;
    
    symbTable* hight = (*smt);
    returnTheSmtPointerToTheBeginning();
    
    while(hight){
        while((*smt)){
            if((*smt)->type == 0){
                functionsList[i] = (char*)malloc(sizeof((*smt)->next->name) + 1);
                strcpy(functionsList[i],(*smt)->next->name);
                #if DEBUG_MODE == 4
                    printf("%s  ",functionsList[i]);    
                #endif
                functionsList[i+1] = NULL;
                i = i+1;
            }        
            (*smt) = (*smt)->next;
        }
       

        printf("%d\n",i);
        for(loop1 = 0; loop1 < i; loop1 = loop1 + 1){
            for(loop2 = loop1 + 1; loop2 < i; loop2 = loop2 + 1){
                printf("functionsList[%d] = %s\n",loop1,functionsList[loop1]);
                printf("functionsList[%d] = %s\n",loop2,functionsList[loop2]);
                if(strcpy(functionsList[loop1],functionsList[loop2]) == 0){
                    printf("Two functions with the same name in the scope\n");
                    exit(0);
                }
            }
        }
        i = 0;

        /*
        loop1 = 0;
        loop2 = 0;
        for(loop1 = 0;loop1 < i;loop){
            for(){

            }
        }
        */
        /*
        #if DEBUG_MODE == 4
        while(functionsList[k]){
            printf("ss%s  ",functionsList[k-1]);
            k = k+1;
            printf("\n");
        }      
        #endif
            printf("I'm ok");
            */
        hight = hight->parent;
        if(!hight){
            break;
        }
        (*smt) = hight;
        printf("\n");
        
    }
}

void testingAfterSymbolTableBuiltUp(){
    /*Mission one*/
    checkIfMainDoseNotExist();
    /*Mission two*/
    checkIfMainGetArguments();
}

void printSymbTable(node* root){
    init();
    buildSymbTable(root,0);
    testingAfterSymbolTableBuiltUp();
    returnTheSmtPointerToTheBeginning();
    
    symbTable* hight = head;
    #if DEBUG_MODE == 0
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
    #endif
    free(hight);
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

                /*Mission three*/
                thereAreNoTwoFunctionsWithTheSameNameInTheScope();
                
                while((*smt)->before){
                    (*smt) = (*smt)->before;
                }
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
                checkMain();
                //In this case we see new environment.

                /*
                Firstable we need to concat new node that is the function 
                so we will be able to know all the function of this scope.
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

                /*
                Then a second node with the value
                */                
                (*smt)->next = (symbTable*)malloc(sizeof(symbTable));
                (*smt)->next->parent = NULL;
                (*smt)->next->type = root->nodeOne->tokenDef;
                (*smt)->next->name = (char*)malloc(sizeof(root->nodeOne->token));
                strcpy((*smt)->next->name,root->nodeOne->token);
                (*smt)->next->scope = nest;
                (*smt)->next->next = NULL;
                (*smt)->next->before = (*smt);
                (*smt) = (*smt)->next;
                
                #if DEBUG_MODE == 1
                    printf("1)NEW ENV:   %s\n",(*smt)->name);
                #endif

                /*
                Now we just going upstairs to open new layer
                */

                while((*smt)->before){
                    (*smt) = (*smt)->before;
                }

                (*smt)->parent = (symbTable*)malloc(sizeof(symbTable));
                (*smt)->parent->child = (*smt);
                (*smt) = (*smt)->parent;

                #if DEBUG_MODE == 1
                    printf("2)NEW ENV:   %s\n",(*smt)->child->name);
                #endif

                (*smt)->type = root->tokenDef;
                (*smt)->name = (char*)malloc(sizeof(root->token));
                strcpy((*smt)->name,root->token);
                #if DEBUG_MODE == 1
                    printf("3)NEW ENV:   %s\n",(*smt)->name);
                #endif
                (*smt)->scope = nest;
                (*smt)->before = NULL;
            
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

                /*
                Then a second node with the value
                */                
                (*smt)->next = (symbTable*)malloc(sizeof(symbTable));
                (*smt)->next->parent = NULL;
                (*smt)->next->type = root->nodeOne->tokenDef;
                (*smt)->next->name = (char*)malloc(sizeof(root->nodeOne->token));
                strcpy((*smt)->next->name,root->nodeOne->token);
                (*smt)->next->scope = nest;
                (*smt)->next->next = NULL;
                (*smt)->next->before = (*smt);

                
                
                (*smt)->parent = (symbTable*)malloc(sizeof(symbTable));
                (*smt)->parent->child = (*smt);
                (*smt) = (*smt)->parent;

                #if DEBUG_MODE == 1
                    printf("2)first node:   %s\n",(*smt)->child->name);
                #endif

                (*smt)->type = root->tokenDef;
                (*smt)->name = (char*)malloc(sizeof(root->token));
                strcpy((*smt)->name,root->token);
                #if DEBUG_MODE == 1
                    printf("3)first node:   %s\n",(*smt)->name);
                #endif
                (*smt)->scope = nest;
                (*smt)->before = NULL;
            }else{
                /*
                Here we are building a node for the general case. 
                */

                /*Create Temp and concate to the list
                after that increase the pointer
                */
                checkMain();
                (*smt)->next = (symbTable*)malloc(sizeof(symbTable));
                (*smt)->next->parent = NULL;
                (*smt)->next->type = root->tokenDef;
                (*smt)->next->name = (char*)malloc(sizeof(root->token));
                strcpy((*smt)->next->name,root->token);
                (*smt)->next->scope = nest;
                (*smt)->next->next = NULL;
                (*smt)->next->before = (*smt);
                (*smt) = (*smt)->next;
                #if DEBUG_MODE == 1
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

void checkMain(){
    //If this is a main function declaration.
    //And main already declared
    if( strcmp((*smt)->name,"main")==0 && 
    (*smt)->before != NULL && 
    (*smt)->before->type == PROCEDURE_DEF &&
    mainAlreadyExist
    ){
        printf("ERROR: main already decleared\n");
        exit(0);
    }
    #if DEBUG_MODE == 2
    if( (*smt)->before ){  
        printf("Before type = %d\n",(*smt)->before->type); 
        printf("(*smt)->name = %s\n\n",(*smt)->name); 
        }
    #endif
    //If this is a main function declaration.
    //And main not declared yet.
    if( strcmp((*smt)->name,"main")==0 && 
    (*smt)->before != NULL && 
    (*smt)->before->type == PROCEDURE_DEF &&
    !mainAlreadyExist
    ){
        #if DEBUG_MODE == 2
            printf("Set mainAlready... to true\n\n");
        #endif
        mainAlreadyExist = true;
    }
}
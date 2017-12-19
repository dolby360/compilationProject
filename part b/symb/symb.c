#include "symb.h"


void init(){
    smt = (symbTable**)malloc(sizeof(symbTable*));
    (*smt)  = (symbTable*)malloc(sizeof(symbTable));
    (*smt)->name = NULL;
    head = *smt;
    mainAlreadyExist = 0;
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
    if(mainAlreadyExist == 0){
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
    
    while((*smt)->before){
        (*smt) = (*smt)->before;
    }
    while((*smt)->next){
        if((*smt)->type == PROCEDURE_DEF){
            functionsList[i] = (char*)malloc(sizeof((*smt)->next->name) + 1);
            strcpy(functionsList[i],(*smt)->next->name);
            #if DEBUG_MODE == 4  
                printf("%s  ",functionsList[i]);    
            #endif
            functionsList[i+1] = NULL;
            i = i+1;
        }        
        if(!(*smt)->next){break;}
        (*smt) = (*smt)->next;
    }
    #if DEBUG_MODE == 4
        printf("\nNew entery:\n");
    #endif
    
    for(loop1 = 0; loop1 < i; loop1 = loop1 + 1){
        for(loop2 = loop1 + 1; loop2 < i; loop2 = loop2 + 1){
            #if DEBUG_MODE == 4
                printf("functionsList[%d] = %s\n",loop1,functionsList[loop1]);
                printf("functionsList[%d] = %s\n\n",loop2,functionsList[loop2]); 
            #endif
            
            if(strcmp(functionsList[loop1],functionsList[loop2]) == 0 
            && strcmp(functionsList[loop1],"main") != 0 
            ){
                printf("Two functions with the same name in the scope\n");
                exit(0);
            }
        }
    }
    static int llop = 0;
    while( llop < i ){
        free(functionsList[llop]);//WTF is going on here???
        llop = llop + 1;
    }
    free(functionsList);
    i = 0;
}

/*Mission four*/
void theAreNoTwoVariablesWithTheSameNmaeInTheScope(){
    static int loop1 = 0;
    static int loop2 = 0;
    char** functionsList;
    static int i = 0;
    functionsList = (char**)malloc(sizeof(char*));
    
    while((*smt)->before){
        (*smt) = (*smt)->before;
    }
    while((*smt)->next){
        if((*smt)->type == DECLARATION_DEF){
            while((*smt)->type != IDENTIFIER_DEF){
                if(!(*smt)->next){break;}
                //printf("%s  ",(*smt)->name); 
                (*smt) = (*smt)->next;
            }
            if(!(*smt)->next){break;}
            functionsList[i] = (char*)malloc(sizeof((*smt)->name) + 1);
            strcpy(functionsList[i],(*smt)->name);
            #if DEBUG_MODE == 5  
                printf("%s  ",functionsList[i]);    
            #endif
            functionsList[i+1] = NULL;
            i = i+1;
        }        
        if(!(*smt)->next){break;}
        (*smt) = (*smt)->next;
    }
    #if DEBUG_MODE == 5
        printf("\nNew entery:\n");
    #endif
    
    for(loop1 = 0; loop1 < i; loop1 = loop1 + 1){
        for(loop2 = loop1 + 1; loop2 < i; loop2 = loop2 + 1){
            #if DEBUG_MODE == 5
                printf("functionsList[%d] = %s\n",loop1,functionsList[loop1]);
                printf("functionsList[%d] = %s\n\n",loop2,functionsList[loop2]); 
            #endif
            
            if(strcmp(functionsList[loop1],functionsList[loop2]) == 0){
                printf("Two variables with the same name in the scope\n");
                exit(0);
            }
        }
    }
    static int llp = 0;
    for(llp = 0; llp < i; llp = llp + 1){
        free(functionsList[llp]);
    }
    free(functionsList);
    i = 0;
}
/*Mission five*/
void functionsDefinedBeforeTheyHaveBeenCalled(){
    
    if((*smt)->type != PROC_CALL_DEF){
        return;
    }
    static char* funcName;
    
    funcName = (char*)malloc(sizeof((*smt)->name)+1);
    strcpy(funcName,(*smt)->name);

    static symbTable* temp;
    temp = (*smt);

    while(temp->before){
        temp = temp->before;
    }
    while(temp->child){
        temp = temp->child;
    }

    static symbTable* hight;
    hight = temp;

    
    while(hight){
        while(temp){
            if(strcmp(temp->name,funcName) == 0 && (temp->before->type == PROC_STATEMENT ||
                temp->before->type == PROCEDURE_DEF)){
                /*TODO:*/
                //free(funcName);
                //free(temp);
                //free(hight);
                return;
            }
            temp = temp->next;
        }
        hight = hight->parent;
        temp = hight;
    }
    /*TODO:*/
    //free(funcName);
    //free(temp);
    //free(hight);
    printf("ERROR: no declaration for the function - %s",funcName);
    exit(0);
}

/*Mission six*/
void variablesAreDefinedBeforeUsed(){
    if(
    (*smt)->type != IDENTIFIER_DEF  
    ||((*smt)->before && (*smt)->before->type == PROCEDURE_DEF)
    ||((*smt)->before && (*smt)->before->type == DECLARATION_DEF)
    ||((*smt)->before && (*smt)->before->type == PROC_CALL_DEF)
    ||((*smt)->before && (*smt)->before->type == PROC_STATEMENT)
    ||((*smt)->before->before->before && (*smt)->before->before->before->type == DECLARATION_DEF)
    ){
        return;
    }
    #if DEBUG_MODE == 6
        printf("%s  %d  \n",(*smt)->name,(*smt)->type);
        //if(strcpy((*smt)->name,"b") == 0){ printf("%s  %d  \n",(*smt)->name,(*smt)->type); }
    #endif

    static char* variableName;
    
    variableName = (char*)malloc(sizeof((*smt)->name)+1);
    strcpy(variableName,(*smt)->name);
    
    static symbTable* temp;
    temp = (*smt);
    static bool stateToCheckIfItIsParameter = true;
    
    while(temp->before){
        if(strcmp(temp->name,"endOfParameter") == 0){
            while(temp->before){temp = temp->before;}
        }
        if(temp->type == PARAMS_DEF || temp->type == PROC_CALL_DEF){
            return;
        }
        if(temp->before){temp = temp->before;}
    }
    while(temp->child){
        temp = temp->child;
    }

    static symbTable* hight;
    hight = temp;

    while(hight){
        while(temp){
            if(!temp->before){
                if(!temp->before->before){
                }
            }else{
                if(strcmp(temp->name,variableName) == 0 && temp->before->type == DECLARATION_DEF
                ||strcmp(temp->name,variableName) == 0 && temp->before->before->type == DECLARATION_DEF
                ){
                    /*TODO:*/
                    //free(variableName);
                    //free(temp);
                    //free(hight);
                    return;
                }
            }
            temp = temp->next;
        }
        hight = hight->parent;
        temp = hight;
    }
    /*TODO:*/
    //free(variableName);
    //free(temp);
    //free(hight);
    printf("ERROR: no declaration for the variable - %s",variableName);
    exit(0);
}

/*Mission seven*/
void numberOfArgumentsInTheCallingFunctionAreFits(){
    
    if(strcmp((*smt)->name,"endOfParameter") != 0 || (*smt)->m7 == 1){
        return;
    }
    (*smt)->m7 = 1; // I have been here
    
    if((*smt)->before->before->type == PROCEDURE_DEF){
        return;
    }

    helper1 = (*smt);
    
    
    #if DEBUG_MODE == 7
        //printf("%s,  %s, %d\n",(*smt)->before->name,(*smt)->name,(*smt)->m7);
    #endif

    static int countPar1 = 0;
    while(helper1->before){
        //printf("helper1->type: %d\n",helper1->type);
        if(helper1->type == PARAMS_DEF){
            
            countPar1 = 0;
            return;
            
        }
        if( helper1->type == PROC_CALL_DEF ){
            #if DEBUG_MODE == 7
                //printf("\n=>%s\n",helper1->next->name);
            #endif
            countPar1 = countPar1 - 2;
            
            break;
        }     
        countPar1 = countPar1 + 1;
        helper1 = helper1->before;
    }
    helper2 = helper1;
    #if DEBUG_MODE == 7
        printf("num of parameters: %d,  %s\n",countPar1,helper2->name);
    #endif
    
    
    static char* funcName;
    funcName = helper2->name;
    //printf("==>%d\n",helper2->type);
    //printf("==>%s\n\n",funcName);
    
    // while(helper2->before){
    //     printf("==>%d\n",helper2->before->type);
    //     printf("==>%s\n\n",helper2->before->name);
    //     helper2 = helper2->before;
    // }

    static int countPar2 = 0;
    while(helper2->before){
        
        if(helper2->before->type == PROCEDURE_DEF && strcmp(helper2->name,funcName) == 0){          
            while(strcmp(helper2->name,"endOfParameter")!=0){
                if(helper2->type == IDENTIFIER_DEF){
                    countPar2 = countPar2 + 1;
                }
                helper2 = helper2->next;
            }
            countPar2 -= 1;
            if(countPar2 > countPar1){
                //printf("==>%d\n",countPar2);
                //printf("==>%d\n",countPar1);
                printf("To few arguments in function %s\n",funcName);
                exit(0);
            }
            else if( countPar2 < countPar1){
                //printf("==>%d\n",countPar2);
                //printf("==>%d\n",countPar1);
                printf("To many arguments in function %s\n",funcName);
                exit(0);
            }
            else{
                countPar1 = 0;
                return;
            }
        }
        helper2 = helper2->before;
    }
    countPar1 = 0;
}

int getVariableType(symbTable* local1){
    symbTable* local2;

    static char* saveVarName;
    saveVarName = local1->name;
        
    while(local1->before){
        local1 = local1->before;
    }
    while(local1->child){
        local1 = local1->child;
    }
    local2 = local1;

    // printf("%s\n",local1->next->name);
    while(local2){
        //printf("1%s\n",local1->name);
        while(local1){
            //printf("%d %s\n",local1->type,local1->name);
            if(strcmp(local1->name,saveVarName) == 0  
            && local1->before
            && local1->before->before
            && local1->before->before->type == DECLARATION_DEF)
            {
                //printf("3%s\n",local1->before->name);
                return local1->before->type;
            }
            //printf("4%s\n",local1->name);
            if(!local1->next){break;}
            local1 = local1->next;
        }
        //printf("5%s\n",local1->name);
        if(local2->parent == NULL){break;}
        local2 = local2->parent;
        local1 = local2;
    }
    return 666;
}


/*Mission eight*/
void typeOfArgumentsInTheCallingFunctionAreFits(){

    if(strcmp((*smt)->name,"endOfParameter") != 0 || (*smt)->m8 == 1){
        return;
    }
    (*smt)->m8 = 1; // I have been here
    
    if((*smt)->before->before->type == PROCEDURE_DEF){
        return;
    }
    static symbTable* temp;
    static int i = 0;

    int allTypes[256];

    helper1 = (*smt);

    while(helper1->before){
        
        if(helper1->type == PARAMS_DEF || helper1->before->type == PARAMS_DEF){
            //printf("%s   %d\n",helper1->before->name,helper1->before->type);
            return;
        }
        if( helper1->type == PROC_CALL_DEF ){
            break;
        }     
        if(helper1->type == IDENTIFIER_DEF){
            temp =  helper1;
            //printf("%s\n",temp->name);
            
            allTypes[i] = getVariableType(temp);
            //printf("=>%d\n",allTypes[i]);
            i += 1;
        }
        helper1 = helper1->before;
    }
    int n = 0;
    #if DEBUG_MODE == 8
        for(n = 0;n < i; n += 1){
            printf("%d\n",allTypes[n]);
        }
    #endif
    

    #if DEBUG_MODE == 8
        //printf("%s\n",getVariableType(temp));
    #endif
   

    helper2 = helper1;
    #if DEBUG_MODE == 8
        printf("=>%s\n",helper2->name);
    #endif
    
    
    static char* funcName;
    funcName = helper2->name;
    n = 0;

    while(helper2->before){
        if(helper2->before->type == PROCEDURE_DEF && strcmp(helper2->name,funcName) == 0){          
            while(strcmp(helper2->name,"endOfParameter")!=0){
                #if DEBUG_MODE == 8
                    printf("%s  %d\n",helper2->name,helper2->type);
                #endif
                
                if(IS_STATMENT(getProcedureNumber(helper2->name))){
                    
                    if(allTypes[n] != helper2->type){
                        printf("ERROR: variable type not match");
                        exit(0);
                    }
                    n = n+1;
                }
                helper2 = helper2->next;
            }
            break;
        }
        helper2 = helper2->before;
    }
}

/*Mission nine*/
void returnValueIsTheSameAsTheFunctioType(){
    if(strcmp((*smt)->before->name,"return") != 0){return;}
    static symbTable* local;
    static int type = 0;
    local = (*smt);
    type = getVariableType(local);
    while(local){
        
        local = local->before;
        if(!local->before){break;}
    }
    printf("%d",type);
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
                /*Mission four*/
                theAreNoTwoVariablesWithTheSameNmaeInTheScope();

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
                (*smt)->parent = NULL; 
                (*smt)->before = NULL;

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
                /*Mission five*/
                functionsDefinedBeforeTheyHaveBeenCalled();
                /*Mission six*/
                variablesAreDefinedBeforeUsed();
                /*Mission seven*/
                numberOfArgumentsInTheCallingFunctionAreFits();
                /*Mission eight*/
                typeOfArgumentsInTheCallingFunctionAreFits();
                /*Mission nine*/
                returnValueIsTheSameAsTheFunctioType();
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
    if( (*smt) && strcmp((*smt)->name,"main")==0 && 
    (*smt)->before != NULL && 
    (*smt)->before->type == PROCEDURE_DEF &&
    mainAlreadyExist > 1
    ){
        printf("ERROR: main already decleared\n");
        exit(0);
    }
    #if DEBUG_MODE == 2
    if((*smt) && (*smt)->before ){  
        printf("Before type = %d\n",(*smt)->before->type); 
        printf("(*smt)->name = %s\n\n",(*smt)->name); 
        }
    #endif
    //If this is a main function declaration.
    //And main not declared yet.
    if( (*smt) && strcmp((*smt)->name,"main")==0 && 
    (*smt)->before != NULL && 
    (*smt)->before->type == PROCEDURE_DEF
    ){
        #if DEBUG_MODE == 2
            printf("Set mainAlready... to true\n\n");
        #endif
        mainAlreadyExist = mainAlreadyExist + 1;
    }
}

int getProcedureNumber(char* p){
    if(strcmp(p,"char") == 0){
        return CHAR_DEF;
    }else if(strcmp(p,"charp") == 0){
        return CHARP_DEF;
    }else if(strcmp(p,"int") == 0){
        return INT_DEF;
    }else if(strcmp(p,"intp") == 0){
        return INTP_DEF;
    }else if(strcmp(p,"string") == 0){
        return STRING_DEF;
    }else if(strcmp(p,"void") == 0){
        return VOID_DEF;
    }else if(strcmp(p,"boolean") == 0){
        return BOOLEAN_DEF;
    }
    return 666;
}
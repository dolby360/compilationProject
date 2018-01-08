
#include "TAC.h"    

/*registers*/
static int registers = 0; 
/*labels*/
static int labels = 0;
/*memory*/
static int memoryCounter = 0;

char* freshLabel(){
    char* temp;
    temp = (char*)malloc(sizeof(char)*LABEL_SIZE);
    memset(temp,'\0',sizeof(char)*LABEL_SIZE);
    sprintf(temp,"L%d",labels++);
    return temp;
}

tac* makeNewTac(){
    tac* toReturn;
    toReturn = (tac*)malloc(sizeof(tac));
    toReturn->var = NULL;
    toReturn->code = NULL;

    return toReturn;
}
// void t(node* ast){
//     if(ast){
//         printf("%s\n",ast->token);
//         t(ast->nodeOne);
//         //printf("2%s\n",ast->token);
//         t(ast->nodeTwo);
//         //printf("3%s\n",ast->token);
//         t(ast->nodeThree);
//         //printf("4%s\n",ast->token);
//         t(ast->nodeFour);
        
//     }
// }

void ifConcatination(node* ast){

    // char* temp;
    // temp = (char*)malloc(sizeof(char)*LABEL_SIZE);
    // sprintf(temp,"\n%s:",ast->myTac->falseLabel);
    // if(!ast->nodeTwo->myTac->code){
    //     ast->nodeTwo->myTac->code = (char*)malloc(sizeof(char)*CODE_SIZE);
    // }
    // //printf("%s\n",ast->nodeTwo->myTac->code);
    // strcat(ast->nodeTwo->myTac->code,temp);

    char* temp1;
    temp1 = (char*)malloc(sizeof(char)*CODE_SIZE*CODE_SIZE);
    node* temp2;
    temp2 = (node*)malloc(sizeof(node));
    *temp2 = *ast;

    while(temp2->nodeTwo){
        temp2 = temp2->nodeTwo;
        //printf("%s\n",temp2->token);
        //printf("%s\n",ast->token);
    }
    //sprintf(temp1,"\n%s:",ast->myTac->falseLabel);
    sprintf(temp2->myTac->code,"\n%s:",ast->myTac->falseLabel);
    //printf("%s\n",ast->token);
}
void countMemory(node* ast,int type){
    if(ast){
        countMemory(ast->nodeOne,type);
        countMemory(ast->nodeTwo,type);
        countMemory(ast->nodeThree,type);
        countMemory(ast->nodeFour,type);

        memoryCounter = memoryCounter + type;
    }
}

/*Because the next function is recursive*/
void preCountMemory__figurOutWhatIsTheType(node* ast){
    switch(ast->nodeOne->tokenDef){
        case BOOLEAN_DEF:
            countMemory(ast,1);
            break;
        case CHAR_DEF:
            countMemory(ast,1);
            break;
        case INT_DEF:
            countMemory(ast,sizeof(int));
            break;
        case STRING_DEF:
            countMemory(ast,1);
            break;
    }
}

void makeTopDown(node* ast){
    if(ast){
        if(ast->tokenDef == PROCEDURE_DEF){
            if(!ast->myTac){
                ast->myTac = (tac*)malloc(sizeof(tac));
            }
            if(!ast->myTac->label){
                ast->myTac->label = (char*)malloc(sizeof(char) * LABEL_SIZE);
                strcpy(ast->myTac->label,ast->nodeOne->token);
            }
        }else if(ast->tokenDef == DECLARATION_DEF){
            preCountMemory__figurOutWhatIsTheType(ast);
            
        }else if(ast->tokenDef == IF_DEF){
            //If the "if" have "else"
            if(ast->nodeThree){
                return;
            }
            ifConcatination(ast);
        }else if(ast->tokenDef == WHILE_DEF){
            genWhile(ast);
        }else if(ast->tokenDef == FOR_DEF){
            genFor(ast);
        }
        makeTopDown(ast->nodeOne);
        makeTopDown(ast->nodeTwo);
        makeTopDown(ast->nodeThree);
        makeTopDown(ast->nodeFour);
    }
}
void genFor(node* ast){
    ast->myTac->falseLabel = (char*)malloc(sizeof(char)*LABEL_SIZE);
    strcpy(ast->myTac->falseLabel,freshLabel());
    ast->myTac->trueLabel = (char*)malloc(sizeof(char)*LABEL_SIZE);
    strcpy(ast->myTac->trueLabel,freshLabel());
    
    ast->nodeTwo->myTac->label = (char*)malloc(sizeof(char)*LABEL_SIZE);
    strcpy(ast->nodeTwo->myTac->label,ast->myTac->trueLabel);
    
    char* temp3;
    temp3 = (char*)malloc(sizeof(char)*CODE_SIZE);

    ast->myTac->code = (char*)malloc(sizeof(char)*CODE_SIZE);
    sprintf(temp3,"\nifz %s goto %s" 
    ,ast->nodeTwo->myTac->var
    ,ast->myTac->falseLabel
    );
    


    strcat(ast->nodeTwo->myTac->code,temp3);

    char* temp1;
    temp1 = (char*)malloc(sizeof(char)*CODE_SIZE*CODE_SIZE);
    node* temp2;
    temp2 = (node*)malloc(sizeof(node));
    *temp2 = *ast;

    temp2 = temp2->nodeFour; 

    while(temp2->nodeTwo){
        temp2 = temp2->nodeTwo;
        //printf("%s\n",temp2->token);
        //printf("%s\n",ast->token);
    }
    //sprintf(temp1,"\n%s:",ast->myTac->falseLabel);
    sprintf(temp2->myTac->code,"goto %s\n%s:",ast->myTac->trueLabel,ast->myTac->falseLabel);
    //printf("%s\n",ast->token);
}

void genWhile(node* ast){
    ast->myTac->falseLabel = (char*)malloc(sizeof(char)*LABEL_SIZE);
    strcpy(ast->myTac->falseLabel,freshLabel());
    ast->myTac->trueLabel = (char*)malloc(sizeof(char)*LABEL_SIZE);
    strcpy(ast->myTac->trueLabel,freshLabel());

    ast->nodeOne->myTac->label = (char*)malloc(sizeof(char)*LABEL_SIZE);
    strcpy(ast->nodeOne->myTac->label,ast->myTac->trueLabel);

    ast->myTac->code = (char*)malloc(sizeof(char)*CODE_SIZE);
    sprintf(ast->myTac->code,"ifz %s goto %s" 
    ,ast->nodeOne->myTac->var
    ,ast->myTac->falseLabel
    );
    char* temp1;
    temp1 = (char*)malloc(sizeof(char)*CODE_SIZE*CODE_SIZE);
    node* temp2;
    temp2 = (node*)malloc(sizeof(node));
    *temp2 = *ast;

    while(temp2->nodeTwo){
        temp2 = temp2->nodeTwo;
        //printf("%s\n",temp2->token);
        //printf("%s\n",ast->token);
    }
    //sprintf(temp1,"\n%s:",ast->myTac->falseLabel);
    sprintf(temp2->myTac->code,"goto %s\n%s:",ast->myTac->trueLabel,ast->myTac->falseLabel);
    //printf("%s\n",ast->token);
}

void makeButtomUp(node* ast){
    if(ast){
        makeButtomUp(ast->nodeOne);
        makeButtomUp(ast->nodeTwo);
        makeButtomUp(ast->nodeThree);
        makeButtomUp(ast->nodeFour);
    
        /*
        This condition is checking if we allready visit this node
        Becuase it makes problem with function name for example.
        */
        // printf("1\n");
        if(!ast->myTac){
            //printf("1\n");
            ast->myTac = makeNewTac();
            //printf("11\n"); 
        }

        if(ast->tokenDef == ASSIGNMENT_DEF){
            //printf("6\n");
            genTacAssign(ast);
            //printf("66\n");
        }
        else if(ast->tokenDef == OP_DEF){
            //printf("4\n");
            genTacOp(ast);
            //printf("44\n");
        //In this case the two sons are null.
        //Probebly an identifier.
        }else if(ast->tokenDef == IF_DEF){
            genCondition(ast);
        }else if(AM_I_BOOLEAN(ast->tokenDef)){
            // printf("9\n");
            genBooleanExp(ast);
            // printf("99\n");
        }else if(!ast->nodeOne && !ast->nodeTwo){
            //printf("5\n");
            if(ast->myTac->var == NULL){
            //printf("5\n");
            genIdentifier(ast);
            //printf("55\n");
            }
        }
    }
}

void genBooleanExp(node* ast){
    if(ast->tokenDef == BOOL_DEF
    ){
        ast->myTac->var = (char*)malloc(sizeof(char)*VAR_SIZE);
        memset(ast->myTac->var,'\0',sizeof(char)*VAR_SIZE);
        sprintf(ast->myTac->var,"t%d",registers++);

        ast->myTac->code = (char*)malloc(sizeof(char)*CODE_SIZE);
        memset(ast->myTac->code,'\0',sizeof(char)*CODE_SIZE);
        sprintf(ast->myTac->code,"%s = %s",ast->myTac->var,ast->nodeOne->token);
        return;
    }else if(ast->tokenDef == NOT_DEF){
        ast->myTac->var = (char*)malloc(sizeof(char)*VAR_SIZE);
        memset(ast->myTac->var,'\0',sizeof(char)*VAR_SIZE);
        sprintf(ast->myTac->var,"t%d",registers++);

        ast->myTac->code = (char*)malloc(sizeof(char)*CODE_SIZE);
        memset(ast->myTac->code,'\0',sizeof(char)*CODE_SIZE);
        sprintf(ast->myTac->code,"%s = not %s",

        ast->myTac->var,
        ast->nodeOne->token
        );
        return;
    }

    ast->myTac->var = (char*)malloc(sizeof(char)*VAR_SIZE);
    memset(ast->myTac->var,'\0',sizeof(char)*VAR_SIZE);
    sprintf(ast->myTac->var,"t%d",registers++);

    ast->myTac->code = (char*)malloc(sizeof(char)*CODE_SIZE);
    memset(ast->myTac->code,'\0',sizeof(char)*CODE_SIZE);
    sprintf(ast->myTac->code,"%s = %s %s %s"
    ,ast->myTac->var
    ,ast->nodeOne->myTac->var
    ,ast->token
    ,ast->nodeTwo->myTac->var);
}

void genCondition(node* ast){
    /*
    Here I alocate mamory for the var and code in assign node
    */
    if(!ast->myTac){
        ast->myTac = (tac*)malloc(sizeof(tac));
    }
    ast->myTac->code = (char*)malloc(sizeof(char) * CODE_SIZE * CODE_SIZE);
    ast->myTac->trueLabel = (char*)malloc(sizeof(char) *LABEL_SIZE);
    ast->myTac->falseLabel = (char*)malloc(sizeof(char) * LABEL_SIZE);
    sprintf(ast->myTac->trueLabel,"L%d",labels++);
    sprintf(ast->myTac->falseLabel,"L%d",labels++);

    sprintf(
        ast->myTac->code,"ifz %s goto %s",
        ast->nodeOne->myTac->var,
        ast->myTac->falseLabel
    );
    if(ast->nodeThree){
        if(!ast->nodeThree->myTac){
            ast->nodeThree->myTac = makeNewTac();
        }
        strcpy(ast->nodeThree->myTac->label,ast->myTac->falseLabel);
    }

    
}

void genIdentifier(node* ast){
    ast->myTac->var = (char*)malloc(sizeof(char)*4);
    ast->myTac->code = (char*)malloc(sizeof(char)+1);
    ast->myTac->code[0] = '\0';
    
    memset(ast->myTac->var,'\0',sizeof(char)*4);
    strcpy(ast->myTac->var,ast->token);
}


/*Here I'm taking care of the sring assign as well*/
void genTacAssign(node* ast){
    if(ast->nodeTwo->tokenDef == STRING_ARRAY){
        //When wee see this we do:
        /*
        x = y[i];
        We turning to =>

        t1 = &y
        t2 = t1+i
        x = *t2

        So here te temp is = t2
        */

        /*
        Here i'm giving register for &y
        */
        char* temp;
        temp = (char*)malloc(sizeof(char)*VAR_SIZE);
        memset(temp,'\0',sizeof(char)*VAR_SIZE);
        sprintf(temp,"t%d",registers++);

        /*
        Here I alocate mamory for the var and code in assign node
        */
        ast->myTac = (tac*)malloc(sizeof(tac));
        ast->myTac->var = (char*)malloc(sizeof(char)*VAR_SIZE);
        sprintf(ast->myTac->var,"t%d",registers++);
        ast->myTac->code = (char*)malloc(sizeof(char) * CODE_SIZE * CODE_SIZE);

        //Now copy all the needed code.
        sprintf(ast->myTac->code,
        "%s = &%s\n%s = %s + %s\n%s = *%s\n",
        ast->myTac->var,                    //t1
        ast->nodeTwo->nodeOne->myTac->var,  //y 
        temp,                               //t2
        ast->myTac->var,                    //t1
        ast->nodeTwo->nodeTwo->myTac->var,  //i
        ast->nodeOne->myTac->var,           //x
        temp                                //t2
        );
        return;

    /*
    In this case we got a[2] = 'd';
    */
    }else if(ast->nodeOne->tokenDef == STRING_ARRAY){
        //When wee see this we do:
        /*genTacAssign
        x[i] = y;
        We turning to =>

        t1 = &x
        t2 = t1+i
        *t2 = y

        So here te temp is = t2
        */
        
        char* temp;
        temp = (char*)malloc(sizeof(char)*VAR_SIZE);
        memset(temp,'\0',sizeof(char)*VAR_SIZE);
        sprintf(temp,"t%d",registers++);
        /*
        Here I alocate mamory for the var and code in assign node
        */
        ast->myTac = (tac*)malloc(sizeof(tac));
        ast->myTac->var = (char*)malloc(sizeof(char)*VAR_SIZE);
        sprintf(ast->myTac->var,"t%d",registers++);
        
        ast->myTac->code = (char*)malloc(sizeof(char) * CODE_SIZE * CODE_SIZE);
        sprintf(ast->myTac->code,
        "%s = &%s\n%s = %s + %s\n*%s = %s",
        ast->myTac->var,                    //t1
        ast->nodeOne->nodeOne->myTac->var,  //x
        temp,                               //t2
        ast->myTac->var,                    //t1
        ast->nodeOne->nodeTwo->myTac->var,  //i
        temp,                               //t2
        ast->nodeTwo->myTac->var            //y
        );
        return;
    }/*else if(ast->nodeTwo->tokenDef == NOT_DEF
    ||ast->nodeTwo->tokenDef == BOOL_DEF
    ||ast->nodeTwo->tokenDef == NULL_DEF
    ){
        return;
    }*/else{    
        
        ast->myTac = (tac*)malloc(sizeof(tac)); 
        ast->myTac->var = (char*)malloc(sizeof(ast->nodeOne->token) + 1);
        strcpy(ast->myTac->var,ast->nodeOne->myTac->var);
        
        char* temp;
        temp = (char*)malloc(sizeof(char)*CODE_SIZE);
        memset(temp,'\0',sizeof(char)*CODE_SIZE);
        char* temp2;
        temp2 = (char*)malloc(sizeof(char)*CODE_SIZE*CODE_SIZE);
        memset(temp,'\0',sizeof(char)*CODE_SIZE*CODE_SIZE);

        //ast->myTac->code = (char*)malloc(sizeof(char)*CODE_SIZE);
        
        if(!ast->nodeTwo->myTac->code || strcmp(ast->nodeTwo->myTac->code,"")!=0){
            if(!ast->nodeTwo->myTac->code){
                ast->myTac->code = (char*)malloc(sizeof(char)*CODE_SIZE);

                if(!ast->nodeTwo->myTac->var){
                    //printf("%s\n",ast->nodeTwo->token);
                    sprintf(ast->myTac->code,"%s = %s",
                    ast->nodeOne->myTac->var,
                    ast->nodeTwo->token);
                    return;
                }
                sprintf(ast->myTac->code,"%s = %s",
                ast->nodeOne->myTac->var,
                ast->nodeTwo->myTac->var);
            }

            return;
        }

        sprintf(temp2,"%s\n%s = %s",
        ast->nodeTwo->myTac->code,
        ast->nodeOne->myTac->var,
        ast->nodeTwo->myTac->var);

        // printf("%s\n",ast->token);
        // printf("=>%s\n",ast->nodeTwo->myTac->code);
        
        free(ast->nodeTwo->myTac->code);
        ast->nodeTwo->myTac->code = (char*)malloc(sizeof(char)*CODE_SIZE*CODE_SIZE);
        memset(ast->nodeTwo->myTac->code,'\0',sizeof(char)*CODE_SIZE*CODE_SIZE);

        strcpy(ast->nodeTwo->myTac->code,temp2);
    }
}

void genTacOp(node* ast){
    ast->myTac->var = (char*)malloc(sizeof(char)*4);
    memset(ast->myTac->var,'\0',sizeof(char)*4);
    sprintf(ast->myTac->var,"t%d",registers++);

    ast->myTac->code = (char*)malloc(sizeof(char)*CODE_SIZE);
    memset(ast->myTac->code,'\0',sizeof(char)*CODE_SIZE);
    sprintf(ast->myTac->code,"%s = %s %s %s"
    ,ast->myTac->var
    ,ast->nodeOne->myTac->var
    ,ast->token
    ,ast->nodeTwo->myTac->var);
}

void printAssignmment(node* ast){
    if(ast->myTac && ast->myTac->code 
    && strcmp(ast->myTac->code,"")!=0
    && ast->tokenDef == ASSIGNMENT_DEF
    ){
        printf("%s\n",ast->myTac->code);
    }
}
void printNotAssignmment(node* ast){
    if(ast->myTac && ast->myTac->code 
    && strcmp(ast->myTac->code,"")!=0
    && ast->tokenDef != ASSIGNMENT_DEF
    ){
        printf("%s\n",ast->myTac->code);
    }
}
void printSize(){
    static bool t = true;
    if(t){
        printf("Begin function: %d\n",memoryCounter);
        t = false;
    }
}
void printTreeAddressCode(node* ast){
    printSize();
    if(ast){
        // if(
        // (ast->myTac 
        // && ast->myTac->label 
        // && ast->myTac->code 
        // && strcmp(ast->myTac->code,"") != 0)||
        // ast->tokenDef == PROCEDURE_DEF
        // ){
        //     printf("\n%s:\n",ast->myTac->label);
        // }

        if(ast->myTac && ast->myTac->label){
            printf("\n%s:\n",ast->myTac->label);
        }

        printTreeAddressCode(ast->nodeOne);
        printNotAssignmment(ast);
        printAssignmment(ast);

        printTreeAddressCode(ast->nodeTwo);
        

        printTreeAddressCode(ast->nodeThree);
        printTreeAddressCode(ast->nodeFour);
    }
}

#include "TAC.h"    

/*registers*/
static int forGen = 0; 
/*labels*/
static int forNext = 0;

tac* makeNewTac(){
    tac* toReturn;
    toReturn = (tac*)malloc(sizeof(tac));
    toReturn->var = NULL;
    toReturn->code = NULL;

    return toReturn;
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
        }else if(ast->tokenDef == IF_DEF){    
            //Setup next
            ast->myTac->nextTrue = (char*)malloc(sizeof(char)*NEXT_SIZE);
            ast->myTac->nextFalse = (char*)malloc(sizeof(char)*NEXT_SIZE);
            //Give label
            ast->myTac->label = (char*)malloc(sizeof(char)*LABEL_SIZE);
            sprintf(ast->myTac->label,"L%d",forNext);
            //Set next
            sprintf(ast->myTac->nextTrue,"L%d",++forNext);
            sprintf(ast->myTac->nextFalse,"L%d",++forNext);

            genExpForIfStatment(ast,ast->nodeOne);
        }else if(ast->myTac->code && ast->tokenDef == IF_DEF){
            ast->myTac->label = (char*)malloc(sizeof(char)*LABEL_SIZE);
            sprintf(ast->myTac->label,"L%d",forNext);
        }
        makeTopDown(ast->nodeOne);
        makeTopDown(ast->nodeTwo);
        makeTopDown(ast->nodeThree);
        makeTopDown(ast->nodeFour);
    }
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
        //printf("1\n");
        if(!ast->myTac){
            //printf("1\n");
            ast->myTac = makeNewTac();
            //printf("11\n"); 
        }
        //printf("2\n");
        if(ast->tokenDef == IF_DEF){
            //printf("2\n");
            genCondition(ast);
            //printf("22\n");
        }
        //printf("3\n");
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

void genCondition(node* ast){
    ast->myTac->code = (char*)malloc(sizeof(char)*CODE_SIZE*CODE_SIZE);

    /*
    char* temp;
    temp = (char*)malloc(sizeof(char)*CODE_SIZE);
    sprintf(temp,"\n%s:",ast->myTac->nextFalse);
    strcat(ast->nodeTwo->myTac->code,temp);
    */
}

void genExpForIfStatment(node* ifNode,node* ex){
    if(ex){
        if(ex->nodeOne && ex->nodeTwo){
            if(ex->tokenDef == AND_DEF){
                ex->myTac->code = (char*)malloc(sizeof(char)*CODE_SIZE);
                sprintf(ex->myTac->code,"ifz %s %s %s goto %s",
                ex->nodeOne->myTac->var,
                ex->token,
                ex->nodeTwo->myTac->var,
                //ex->nodeTwo->myTac->label
                ifNode->myTac->nextTrue
                );
            }
        }
        genExpForIfStatment(ifNode,ex->nodeOne);
        genExpForIfStatment(ifNode,ex->nodeTwo);
    }
}

void genIdentifier(node* ast){
    /*Mybe I need to check if is this a node that I'm expecting for*/
    // if(ast->tokenDef != IDENTIFIER_DEF 
    //     && ast->tokenDef != INTEGER_LITERAL_DEF 
    //     && ast->tokenDef != INTEGER_LITERAL_DEF){return;}

    ast->myTac->var = (char*)malloc(sizeof(char)*4);
    ast->myTac->code = (char*)malloc(sizeof(char)+1);
    ast->myTac->code[0] = '\0';
    
    memset(ast->myTac->var,'\0',sizeof(char)*4);
    strcpy(ast->myTac->var,ast->token);
    //strcpy(ast->myTac->var,);
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
        sprintf(temp,"t%d",forGen++);

        /*
        Here I alocate mamory for the var and code in assign node
        */
        ast->myTac = (tac*)malloc(sizeof(tac));
        ast->myTac->var = (char*)malloc(sizeof(char)*VAR_SIZE);
        sprintf(ast->myTac->var,"t%d",forGen++);
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
        /*
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
        sprintf(temp,"t%d",forGen++);
        /*
        Here I alocate mamory for the var and code in assign node
        */
        ast->myTac = (tac*)malloc(sizeof(tac));
        ast->myTac->var = (char*)malloc(sizeof(char)*VAR_SIZE);
        sprintf(ast->myTac->var,"t%d",forGen++);
        
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
    }
    /*
    ast->myTac = (tac*)malloc(sizeof(tac)); 
    ast->myTac->var = (char*)malloc(sizeof(ast->nodeOne->token) + 1);
    strcpy(ast->myTac->var,ast->nodeOne->myTac->var);
    
    ast->myTac->code = (char*)malloc(sizeof(char)*CODE_SIZE);
    sprintf(ast->myTac->code,"%s = %s",ast->nodeOne->myTac->var,ast->nodeTwo->myTac->var);
    */
}

void genTacOp(node* ast){
    ast->myTac->var = (char*)malloc(sizeof(char)*4);
    memset(ast->myTac->var,'\0',sizeof(char)*4);

    sprintf(ast->myTac->var,"t%d",forGen++);

    ast->myTac->code = (char*)malloc(sizeof(char)*CODE_SIZE);
    memset(ast->myTac->code,'\0',sizeof(char)*CODE_SIZE);
    sprintf(ast->myTac->code,"%s = %s %s %s"
    ,ast->myTac->var
    ,ast->nodeOne->myTac->var
    ,ast->token
    ,ast->nodeTwo->myTac->var);
}

void printTreeAddressCode(node* ast){
    if(ast){
        if(
        (ast->myTac 
        && ast->myTac->label 
        && ast->myTac->code 
        && strcmp(ast->myTac->code,"") != 0)||
        ast->tokenDef == PROCEDURE_DEF
        ){
            printf("\n%s:\n",ast->myTac->label);
        }
        printTreeAddressCode(ast->nodeOne);
        printTreeAddressCode(ast->nodeTwo);

        if(ast->myTac && ast->myTac->code && strcmp(ast->myTac->code,"")!=0){
            printf("%s\n",ast->myTac->code);
        }
        printTreeAddressCode(ast->nodeThree);
        printTreeAddressCode(ast->nodeFour);
    }
}
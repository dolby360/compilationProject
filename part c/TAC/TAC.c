
#include "TAC.h"    

static int forGen = 0; 

tac* makeNewTac(){
    tac* toReturn;
    toReturn = (tac*)malloc(sizeof(tac));
    toReturn->var = NULL;
    toReturn->code = NULL;

    return toReturn;
}

void makeButtomUp(node* ast){
    if(ast){
        makeButtomUp(ast->nodeOne);
        makeButtomUp(ast->nodeTwo);
        makeButtomUp(ast->nodeThree);
        makeButtomUp(ast->nodeFour);
    
        
        ast->myTac = makeNewTac(); 

        if(ast->tokenDef == ASSIGNMENT_DEF){
            genTacAssign(ast);
            return;
        }
        else if(ast->tokenDef == OP_DEF){
            genTacOp(ast);
        //In this case the two sons are null.
        //Probebly an identifier.
        }else if(!ast->nodeOne && !ast->nodeTwo){
            genIdentifier(ast);
        }
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
        //When wee see string we do:

        /*
        x = y[i];
        We turning to =>

        t1 = &y
        t2 = t1+i
        x = *t2

        So here te temp is =
        */

        /*
        Here i'm giving register for &y
        */
        char* temp;
        temp = (char*)malloc(sizeof(char)*CODE_SIZE);
        memset(temp,'\0',sizeof(char)*CODE_SIZE);
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
        return;
        ast->myTac = (tac*)malloc(sizeof(tac)); 
        ast->myTac->var = (char*)malloc(sizeof(ast->nodeOne->token) + 1);

        strcpy(ast->myTac->var,ast->nodeOne->myTac->var);
        
        ast->myTac->code = (char*)malloc(sizeof(char)*CODE_SIZE);
        sprintf(ast->myTac->code,"%s = %s",ast->nodeOne->myTac->var,ast->nodeTwo->myTac->var);
        return;
    }
    ast->myTac = (tac*)malloc(sizeof(tac)); 
    ast->myTac->var = (char*)malloc(sizeof(ast->nodeOne->token) + 1);
    strcpy(ast->myTac->var,ast->nodeOne->myTac->var);
    
    ast->myTac->code = (char*)malloc(sizeof(char)*CODE_SIZE);
    sprintf(ast->myTac->code,"%s = %s",ast->nodeOne->myTac->var,ast->nodeTwo->myTac->var);
    
}

void genTacOp(node* ast){
            ast->myTac->var = (char*)malloc(sizeof(char)*4);
            memset(ast->myTac->var,'\0',sizeof(char)*4);
        
            sprintf(ast->myTac->var,"t%d",forGen++);

            ast->myTac->code = (char*)malloc(sizeof(char)*CODE_SIZE);
            memset(ast->myTac->code,'\0',sizeof(char)*CODE_SIZE);
            sprintf(ast->myTac->code,"%s = %s %s %s",ast->myTac->var,ast->nodeOne->myTac->var,ast->token,ast->nodeTwo->myTac->var);

}

void printTreeAddressCode(node* ast){
    if(ast){
        printTreeAddressCode(ast->nodeOne);
        printTreeAddressCode(ast->nodeTwo);
        if(ast->myTac && ast->myTac->code && strcmp(ast->myTac->code,"")!=0){
            printf("%s\n",ast->myTac->code);
        }
        printTreeAddressCode(ast->nodeThree);
        printTreeAddressCode(ast->nodeFour);
    }
}
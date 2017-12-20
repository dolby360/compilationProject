#include "symb.h"

void getThisPointerToTheBeginning(symbTable* takeMeBack){
    while(takeMeBack->before){
        takeMeBack = takeMeBack->before;    
    }
    while(takeMeBack->child){
        takeMeBack = takeMeBack->child;
    }
}

/*Mission eleven*/
void expressionInIfStatmentIsBoolean(symbTable* p){
    static symbTable* temp;
    static symbTable* temp2;

    //printf("=>%s\n\n",p->name);
    temp = p;
    
    while(temp){
        //printf("%s\n",temp->name);
        if(temp->type == IF_DEF){
            if(temp->next && !AM_I_BOOLEAN(temp->next->type)){
                printf("ERROR: expression in if statment is not bolean\n");
                exit(0);
            }
        }
        temp = temp->before;
    }
}

/*Mission twelfth*/
void theConditionTypeInForLoopIsBoolean(symbTable* p){
    static symbTable* temp;
    static symbTable* temp2;
 
    temp = p;
    
    while(temp){
        //printf("%s\n",temp->name);
        if(temp->type == FOR_DEF){
            //printf("%s\n",temp->next->next->next->next->name);
            if(!AM_I_BOOLEAN(temp->next->next->next->next->type)){
                printf("ERROR: expression in if statment is not bolean\n");
                exit(0);
            }
        }
        temp = temp->before;
    }
}

/*Mission thirteen*/
void variablesInStringIndexAreIntegers(symbTable* p){
    static symbTable* temp;
    static symbTable* temp2;
 
    temp = p;
    
    while(temp){
        
        if(temp->type == END_OF_PARAMETERS_IN_STRING_INDEX){
            while(strcmp(temp->name,"startIndex") != 0){temp = temp->before;}
                temp2 = temp->next->next;
                while(temp2->type != END_OF_PARAMETERS_IN_STRING_INDEX){
                    if(
                        temp2->type != INTEGER_LITERAL_DEF 
                        && getVariableType(temp2) != INT_DEF
                        && temp2->type != OP_DEF
                        ){
                        printf("ERROR: illegal type ->%s\n",temp2->name);
                        exit(0);
                    }
                    temp2 = temp2->next;
                }
        }
        temp = temp->before;
    }
}

/*Mission fourteen*/
void typeBeforeIndexIsString(symbTable* p){
    static symbTable* temp;
    static symbTable* temp2;
 
    temp = p;
    
    while(temp){
        if(temp->type == END_OF_PARAMETERS_IN_STRING_INDEX){
            while(strcmp(temp->name,"startIndex") != 0){temp = temp->before;}
                temp2 = temp->next;
                if(getVariableType(temp2) != STRING_DEF){
                    printf("ERROR: illegal type ->%s\n",temp2->name);
                    exit(0);
                }
        }
        temp = temp->before;
    }
}

/*Mission fiveteen*/
variablesFromTheBothAssignmentSideAreTheSame(symbTable* p){
    static symbTable* temp;
    static symbTable* temp2;
 
    temp = p;

    while(temp){
        if(temp->type == ASSIGNMENT_DEF){
            temp2 = temp;
            if(getVariableType(temp2->next) == CHARP_DEF || getVariableType(temp2->next) == INTP_DEF){
                if(
                    temp2->next->next->type != NULL_DEF 
                    && getVariableType(temp2->next) != getVariableType(temp2->next->next)
                ){
                    printf("ERROR: illegal types \n->%s\n->%s",temp2->next->name,temp2->next->next->name);
                    exit(0);
                }else{
                    temp = temp->before;
                    continue;
                }
            }
            if(getVariableType(temp2->next) == STRING_DEF){
                if(temp2->next->next->type != STRING_LITERAL_DEF){
                    printf("ERROR: illegal types \n->%s\n->%s",temp2->next->name,temp2->next->next->name);
                    exit(0);
                }else{
                    temp = temp->before;
                    continue;
                }
            }
            if(getVariableType(temp2->next) != getVariableType(temp2->next->next)){
                printf("ERROR: illegal types \n->%s\n->%s",temp2->next->name,temp2->next->next->name);
                exit(0);
            }
        }
        temp = temp->before;
    }
}
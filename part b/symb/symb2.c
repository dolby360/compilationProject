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
    
}
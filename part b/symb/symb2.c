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
            //printf("%s  %d\n",temp2->next->next->name,temp2->next->next->type);
            if(temp2->next->next->type == ABS_DEF || temp2->next->next->type == POINTER_DEF  || temp2->next->next->type == OP_ADDRESS_OF_DEF ){temp = temp->before;continue;}
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
            if(getVariableType(temp2->next) != getVariableType(temp2->next->next) 
                && (temp2->next->next->type < NOT_DEF || temp2->next->next->type > OR_DEF)
                && temp2->next->next->type != OP_DEF
                ){
                printf("ERROR: illegal types \n->%s\n->%s",temp2->next->name,temp2->next->next->name);
                exit(0);
            }
            if(temp2->next->next->type == OP_DEF && 
                (getVariableType(temp2->next) != getVariableType(temp2->next->next->next)
                ||getVariableType(temp2->next) != getVariableType(temp2->next->next->next->next)
            )    
            ){
                printf("ERROR: illegal types \n");
                exit(0);
            }
            //printf("%d  %d  %d  %d",temp2->next->type,temp2->next->next->type,(getVariableType(temp2->next->next)));
            // if(temp2->next->type == IDENTIFIER_DEF && temp2->next->next->type == IDENTIFIER_DEF
            //     && (getVariableType(temp2->next) != getVariableType(temp2->next->next)
            // )    
            // ){
            //     printf("ERROR: illegal types \n->%s\n->%s",temp2->next->name,temp2->next->next->name);
            //     exit(0);
            // }
        }
        temp = temp->before;
    }
}


/*Mission sixteen*/
void aBunchOfSemantics(symbTable* p){
    static symbTable* temp; 
    temp = p;

    while(temp){
        if(temp->type == OP_DEF){
            if(getVariableType(temp->next) != INT_DEF){
                printf("ERROR: type ->%s  should be int\n",temp->next->name);
                exit(0);
            }
            if(getVariableType(temp->next->next) != INT_DEF){
                printf("ERROR: type ->%s should be int\n",temp->next->next->name);
                exit(0);
            }
        }
        if(temp->type == AND_DEF || temp->type == OR_DEF){
            //printf("ERROR: type ->%s  %d  should be bolean\n",temp->next->next->name,temp->next->next->type);
            if(!AM_I_BOOLEAN(temp->next->next->type)){
                printf("ERROR: type ->%s  should be boolean\n",temp->next->next->name);
                exit(0);
            }
            //printf("ERROR: type ->%s  %d  should be bolean\n",temp->before->before->name,temp->before->before->type);
            if(!AM_I_BOOLEAN(temp->before->before->type)){
                printf("ERROR: type ->%s  should be boolean\n",temp->before->before->name);
                exit(0);
            }
        }
        if(temp->type == LT_DEF || temp->type == GT_DEF ||temp->type == LE_DEF ||temp->type == GE_DEF ){
            //printf("ERROR: type ->%s  %d  should be bolean\n",temp->before->before->name,temp->before->before->type);
            if(getVariableType(temp->next) != INT_DEF){
                printf("ERROR: type ->%s should be int\n",temp->next->name);
                exit(0);
            }
            //printf("ERROR: type ->%s  %d  should be bolean\n",temp->before->before->name,temp->before->before->type);
            if(getVariableType(temp->next->next) != INT_DEF){
                printf("ERROR: type ->%s should be int\n",temp->next->next->name);
                exit(0);
            }
            if(temp->before->before->type == ASSIGNMENT_DEF && getVariableType(temp->before) != BOOLEAN_DEF){
                printf("ERROR: type ->%s should be boolean\n",temp->before->name);
                exit(0);
            }
        }
        if(temp->type == EQ_DEF || temp->type == NE_DEF){
            //printf("ERROR: type ->%s  %d  should be bolean\n",temp->before->before->name,temp->before->before->type);
            if( 
            (getVariableType(temp->next) == INT_DEF && getVariableType(temp->next->next) != INT_DEF)
            ||(getVariableType(temp->next) != INT_DEF && getVariableType(temp->next->next) == INT_DEF)
            ){
                //printf("->%s  %d\n",temp->next->next->name,temp->next->next->type);
                if(getVariableType(temp->next->next) != INTEGER_LITERAL_DEF && temp->next->next->type != IDENTIFIER_DEF){temp = temp->before;continue;}
                printf("ERROR: types ->%s  \n->%s   \nnot matches\n",temp->next->name,temp->next->next->name);
                exit(0);
            }
            //printf("ERROR: type ->%s  %d  should be bolean\n",temp->before->before->name,temp->before->before->type);
            if( 
            (getVariableType(temp->next) == BOOLEAN_DEF && getVariableType(temp->next->next) != BOOLEAN_DEF)
            ||(getVariableType(temp->next) != BOOLEAN_DEF && getVariableType(temp->next->next) == BOOLEAN_DEF)
            ){
                if(getVariableType(temp->next->next) != INTEGER_LITERAL_DEF && temp->next->next->type != IDENTIFIER_DEF){temp = temp->before;continue;}
                printf("ERROR: types ->%s  \n->%s   \nnot matches\n",temp->next->name,temp->next->next->name);
                exit(0);
            }
            //printf("ERROR: type ->%s  %d  should be bolean\n",temp->before->before->name,temp->before->before->type);
            if( 
            (getVariableType(temp->next) == CHAR_DEF && getVariableType(temp->next->next) != CHAR_DEF)
            ||(getVariableType(temp->next) != CHAR_DEF && getVariableType(temp->next->next) == CHAR_DEF)
            ){
                if(getVariableType(temp->next->next) != INTEGER_LITERAL_DEF && temp->next->next->type != IDENTIFIER_DEF){temp = temp->before;continue;}
                printf("ERROR: types ->%s  \n->%s   \nnot matches\n",temp->next->name,temp->next->next->name);
                exit(0);
            }
            //printf("ERROR: type ->%s  %d  should be bolean\n",temp->before->before->name,temp->before->before->type);
            if( 
            (getVariableType(temp->next) == INTP_DEF && getVariableType(temp->next->next) != INTP_DEF)
            ||(getVariableType(temp->next) != INTP_DEF && getVariableType(temp->next->next) == INTP_DEF)
            ){
                if(getVariableType(temp->next->next) != INTEGER_LITERAL_DEF && temp->next->next->type != IDENTIFIER_DEF){temp = temp->before;continue;}
                printf("ERROR: types ->%s  \n->%s   \nnot matches\n",temp->next->name,temp->next->next->name);
                exit(0);
            }
            //printf("ERROR: type ->%s  %d  should be bolean\n",temp->before->before->name,temp->before->before->type);
            if( 
            (getVariableType(temp->next) == CHARP_DEF && getVariableType(temp->next->next) != CHARP_DEF)
            ||(getVariableType(temp->next) != CHARP_DEF && getVariableType(temp->next->next) == CHARP_DEF)
            ){
                if(getVariableType(temp->next->next) != INTEGER_LITERAL_DEF && temp->next->next->type != IDENTIFIER_DEF){temp = temp->before;continue;}
                printf("ERROR: types ->%s  \n->%s   \nnot matches\n",temp->next->name,temp->next->next->name);
                exit(0);
            }
            if(temp->before->before->type == ASSIGNMENT_DEF && getVariableType(temp->before) != BOOLEAN_DEF){
                printf("ERROR: type ->%s should be boolean\n",temp->before->name);
                exit(0);
            }
        }
        if(temp->type == ABS_DEF){
            if(temp->before->before->type == ASSIGNMENT_DEF && getVariableType(temp->before) != INT_DEF){
                printf("ERROR: type ->%s should be int\n",temp->before->name);
                exit(0);
            }
            if(getVariableType(temp->next) != INT_DEF && getVariableType(temp->next) != STRING_DEF){
                printf("ERROR: type ->%s should be int or string\n",temp->next->name);
                exit(0);
            }
        }
        if(temp->type == NOT_DEF){
            if(temp->before->before->type == ASSIGNMENT_DEF && getVariableType(temp->before) != BOOLEAN_DEF){
                printf("ERROR: type ->%s should be boolean\n",temp->before->name);
                exit(0);
            }
            if(getVariableType(temp->next) != BOOLEAN_DEF){
                printf("ERROR: type ->%s should be boolean\n",temp->next->name);
                exit(0);
            }
        }

        temp = temp->before;
    }
}

/*Mission eighteen*/
void ampersandIsJustBeforefitsType(symbTable* p){
    static symbTable* temp;
    static symbTable* temp2;
    static int i = 0;
    temp = p;

    while(temp){
        if(temp->type == OP_ADDRESS_OF_DEF){
            i = getVariableType(temp->next);
            if(i != CHAR_DEF && i != INT_DEF && i != STRING_DEF){
                printf("ERROR: illegal type ->%s\n",temp->next->name);
                exit(0);
            }
        }
        temp = temp->before;
    }
}

/*Mission nineteen*/
void pointerJustForPointer(symbTable* p){
    static symbTable* temp;
    static symbTable* temp2;
    static int i = 0;
    temp = p;

    while(temp){
        if(temp->type == POINTER_DEF){
            i = getVariableType(temp->next);
            if(i != CHARP_DEF && i != INTP_DEF){
                printf("ERROR: illegal type ->%s\n",temp->next->name);
                exit(0);
            }
        }
        temp = temp->before;
    }
}

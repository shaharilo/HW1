//
// Created by shahar on 22/11/2021.
//
#include "amount_set_str.h"
#include <stdio.h>
#include <stdbool.h>

#define INITIAL_SIZE 10
#define STR_IS_NULL NULL

typedef struct Node_t{
    char* product_name;
    int product_amount;
    struct Node_t* next_product;
}*Node;

typedef struct AmountSet_t{
   Node* elements; //set of nodes
   Node iterator; //walks through set
   int size_of_set;
}*AmountSet;

//create empty node
AmountSet asCreate(){
    AmountSet new_amount_set = malloc(sizeof(*new_amount_set));
    if(!new_amount_set){
        return NULL;
    }
    new_amount_set->elements = malloc(INITIAL_SIZE*sizeof(*Node));
    if(new_amount_set->elements == NULL){
        free(new_amount_set);
        return NULL;
    }

    new_amount_set->iterator = 0;
    new_amount_set->size_of_set = INITIAL_SIZE;
    return new_amount_set;
}
//destroy list
void asDestroy(AmountSet set){
    if(set==NULL){
        return;
    }
    while(set->size_of_set>0){
    //use asRemove!!!!!!!!!!!!!!!!!!!!!!!!
    }
}

AmountSet asRemove(AmountSet set, const char* str_to_remove){
    assert(set!=NULL)
    if(str_to_remove == NULL){
        return STR_IS_NULL;
    }

    //continue this from lecture 3 page 38!!!!!!!!!!!!!!!!!!!
}

AmountSet asCopy(AmountSet set){
    if(!set)
        return NULL;
    AmountSet set_after_copy = asCreate();
    if(!set_after_copy)
        return NULL;

    //contine this!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
}



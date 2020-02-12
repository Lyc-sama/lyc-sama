#define NULL 0
#include"stack.h"
#include <stdlib.h>
#include <stdio.h>
//模拟stack
stack* ceate_stack()
{
    stack* pointer=(stack*)malloc(sizeof(stack));
    pointer->location=NULL;
    return pointer;

}

void stack_push(stack* pointer,node* value)
{
    stack_node* fresh_new=(stack_node*)malloc(sizeof(stack_node));
    fresh_new->after=NULL;
    fresh_new->before=pointer->location;
    pointer->location=fresh_new;
    fresh_new->data=value;
}

node* stack_pop(stack* pointer)
{
    if(pointer->location==NULL)
    {
        printf("不能pop，因为是空的");
        return NULL;
    }
    if(pointer->location->before==NULL)
    {
        node* value=pointer->location->data;
        free(pointer->location);
        pointer->location=NULL;
        return value;
    }
    node* value=pointer->location->data;
    pointer->location->before->after=NULL;
    stack_node*temp=pointer->location->before;
    free(pointer->location);
    pointer->location=temp;
    return value;
}

void free_stack(stack* pointer)
{
    if(pointer->location==NULL)
    {
        free(pointer);
        return;
    }
    while(pointer->location->before!=NULL)
    {
        stack_node*  temp=pointer->location->before;
        free(pointer->location);
        pointer->location=temp;
    }
    free(pointer->location);
    free(pointer);
}



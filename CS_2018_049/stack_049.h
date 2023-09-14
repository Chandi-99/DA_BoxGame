/*CS_2018_049*/
#define STACK_049_H_INCLUDED
#define STACK_049_H_INCLUDED
#define MAXSTACK 20
#include <stdio.h>
#include <math.h>

typedef int stackEntry;

typedef struct{

    int top;
    stackEntry entry[MAXSTACK]
    }Stack;

void createStack(Stack *s){
    s->top = -1;
}

typedef enum {FALSE, TRUE} Boolean;

Boolean isStackEmpty(const Stack *s){
    return(s->top == -1);
}

Boolean isStackFull(const Stack *s){
    return(s->top == MAXSTACK - 1);
}

void push(stackEntry item, Stack *s){
    if(!isStackFull(s)){
        s->entry[++s->top]=item;
    }
    else{
        printf("---Stack is Full !!!---");
        exit(1);
    }
}

void pop(stackEntry *item, Stack *s){
    if(!isStackEmpty(s)){
        *item = s->entry[s->top--];
    }
    else{
        printf("---Stack is Empty !!!---");
        exit(1);
    }
}



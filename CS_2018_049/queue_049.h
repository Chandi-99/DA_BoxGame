/*CS_2018_049*/
#define QUEUE_049_H_INCLUDED
#define MAXQUEUE 20
#include <stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0
typedef char QueueElement;

typedef struct{
    QueueElement items[MAXQUEUE];
    int front;
    int rear;
    int count;
}Queue;

void CreateQueue(Queue *q){
    q->count=0;
    q->front=0;
    q->rear=-1;
}

int IsQueueEmpty(Queue *q){
    if(q->rear < q->front)
        return(TRUE);
    else
        return(FALSE);
}

int IsQueueFull(Queue *q){
    if(q->rear == MAXQUEUE-1)
        return(TRUE);
    else
        return(FALSE);

}

void Append(Queue *q, QueueElement x){
    if(IsQueueFull(q)){
       printf("Queue Full\n");
       exit(1);
    }
    else{
        q->items[++(q->rear)] = x;
        q->count++;
    }
}

void Serve(Queue *q, QueueElement *x){
    if(IsQueueEmpty(q)){
        printf("Queue is empty, underflow\n");
        exit(1);
    }
    else{
        *x = q->items[(q->front)++];
        q->count--;
    }
}


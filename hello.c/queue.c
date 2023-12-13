#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct Queue{
    struct node*front;
    struct node*rear;}; 

void initializeQueue(struct Queue*queue){
    queue->front=NULL;
    queue->rear=NULL;
}
void enqueue(struct Queue*queue, int value){
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    if(new_node==NULL){
        printf("Memory Allocation failed");
        return;
    }
    new_node->data = value;
    new_node->next = NULL;
    if(queue->front==NULL){
        queue->front=new_node;
        queue->rear=new_node;
    }
    else{
        queue->rear->next=new_node;
        queue->rear=new_node;
    }
    printf("%d enqueued into the queue\n",value);
}

int dequeue(struct Queue*queue)
{
    if(queue->front == NULL){
        printf("Queue Underflow.");
        return -1;
    }
    int popped_value = queue->front->data;
    struct node*temp= queue->front->next;
    free(temp);
    if(queue->front==NULL){
        queue->rear=NULL;
    }
    return popped_value;
}

void display(struct Queue *queue){
    struct node*current=queue->front;
        if(current==NULL){
            printf("Queue is empty");
        return;
    }
    printf("Queue elements: ");
    while(current!=NULL){
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main(){
    struct Queue queue;
    initializeQueue(&queue);
    enqueue(&queue, 10);
    enqueue(&queue,20);
    enqueue(&queue,30);
    int dequeuedvalue=dequeue(&queue);
    if(dequeuedvalue!=-1){
        printf("Dequeud Value:%d\n",dequeuedvalue);
        display(&queue);
        return 0;
    }
}
#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

void push(node **top, int data) {
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = *top;
    *top = new_node;
}

int pop(node **top) {
    if(*top == NULL) {
        printf("Stack is empty\n");
        return -1;
    }
    node *temp = *top;
    int popped_data = temp->data;
    *top = temp->next;
    free(temp);
    return popped_data;
}

void traverse(node *top) {
    node *temp = top;
    if(temp == NULL) {
        printf("Stack is empty\n");
        return;
    }
    printf("Elements in the stack are:\n");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while(temp != top);
    printf("\n");
}

int main() {
    node *top = NULL;
    int choice, data;
    do {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter the value to be pushed: ");
                scanf("%d", &data);
                push(&top, data);
                break;
            case 2:
                data = pop(&top);
                if(data != -1) {
                    printf("Popped value is: %d\n", data);
                }
                break;
            case 3:
                traverse(top);
                break;
            case 4:
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 4);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

// Defining structure of student node
typedef struct StudentNode {
    int id;
    char name[50];
    struct StudentNode* next;
} StudentNode;

// Function to insert node at specified position in the linked list
void insertNodeAtPosition(StudentNode** head, int position, int id, char* name) {
    // Check if position is valid
    if (position < 0) {
        printf("Position is negative.\n");
        return;
    }

    // Creating new node
    StudentNode* newNode = (StudentNode*)malloc(sizeof(StudentNode));
    newNode->id = id;
    strcpy(newNode->name, name);
    newNode->next = NULL;

    // If the list is empty, set head as new node
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    // If the position is 0, set new node as head
    if (position == 0) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    // Navigating to the node at the specified position
    StudentNode* currentNode = *head;
    for (int i = 0; i < position - 1; i++) {
        if (currentNode->next == NULL) {
            printf("Position is more than the length of the list.\n");
            free(newNode);
            return;
        }
        currentNode = currentNode->next;
    }

    // Inserting new node at the specified position
    newNode->next = currentNode->next;
    currentNode->next = newNode;
}

// Function to print linked list
void printList(StudentNode* node) {
    while (node != NULL) {
        printf("ID: %d, Name: %s\n", node->id, node->name);
        node = node->next;
    }
}

int main() {
    StudentNode* head = NULL;

    insertNodeAtPosition(&head, 0, 1, "Alice");
    insertNodeAtPosition(&head, 1, 2, "Bob");
    insertNodeAtPosition(&head, 2, 3, "Charlie");

    printList(head);

    return 0;
}
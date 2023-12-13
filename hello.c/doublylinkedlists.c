#include <stdio.h>
#include <stdlib.h>

typedef struct Employee {
    int id;
    char name[50];
    float salary;
} Employee;

typedef struct Node {
    Employee employee;
    struct Node* next;
    struct Node* prev;
} Node;

typedef struct DoublyLinkedList {
    Node* head;
} DoublyLinkedList;

DoublyLinkedList* create_dll() {
    DoublyLinkedList* dll = (DoublyLinkedList*) malloc(sizeof(DoublyLinkedList));
    dll->head = NULL;
    return dll;
}

void insert_at_front(DoublyLinkedList* dll, int id, char* name, float salary) {
    Node* new_node = (Node*) malloc(sizeof(Node));
    new_node->employee.id = id;
    strcpy(new_node->employee.name, name);
    new_node->employee.salary = salary;
    new_node->next = dll->head;
    new_node->prev = NULL;

    if(dll->head != NULL) {
        dll->head->prev = new_node;
    }
    dll->head = new_node;
}

void delete_at_end(DoublyLinkedList* dll) {
    if(dll->head == NULL) {
        printf("The list is empty\n");
        return;
    }

    Node* current = dll->head;
    while(current->next != NULL) {
        current = current->next;
    }

    current->prev->next = NULL;
    free(current);
}

void print_list(DoublyLinkedList* dll) {
    Node* current = dll->head;
    while(current != NULL) {
        printf("ID: %d\n", current->employee.id);
        printf("Name: %s\n", current->employee.name);
        printf("Salary: %.2f\n", current->employee.salary);
        current = current->next;
    }
}

int main() {
    DoublyLinkedList* dll = create_dll();
    insert_at_front(dll, 1, "John", 5000.0);
    insert_at_front(dll, 2, "Jane", 6000.0);
    insert_at_front(dll, 3, "Mike", 5500.0);
    print_list(dll);

    delete_at_end(dll);
    print_list(dll);

    return 0;
}
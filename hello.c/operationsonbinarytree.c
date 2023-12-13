#include <stdio.h>
#include <stdlib.h>

typedef struct car {
    char type[50];
    char company[50];
    int year;
} Car;

typedef struct node {
    Car *car;
    struct node *left;
    struct node *right;
} Node;

Node* newNode(Car *car) {
    Node *node = (Node*)malloc(sizeof(Node));
    node->car = car;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node* insert(Node *node, Car *car) {
    if (node == NULL) {
        return newNode(car);
    }
    if (strcmp(car->type, node->car->type) < 0) {
        node->left = insert(node->left, car);
    } else if (strcmp(car->type, node->car->type) > 0) {
        node->right = insert(node->right, car);
    }
    return node;
}

void inorder(Node *node) {
    if (node == NULL) {
        return;
    }
    inorder(node->left);
    printf("Type: %s, Company: %s, Year: %d\n", node->car->type, node->car->company, node->car->year);
    inorder(node->right);
}

void preorder(Node *node) {
    if (node == NULL) {
        return;
    }
    printf("Type: %s, Company: %s, Year: %d\n", node->car->type, node->car->company, node->car->year);
    preorder(node->left);
    preorder(node->right);
}

void postorder(Node *node) {
    if (node == NULL) {
        return;
    }
    postorder(node->left);
    postorder(node->right);
    printf("Type: %s, Company: %s, Year: %d\n", node->car->type, node->car->company, node->car->year);
}

int main() {
    Node *root = NULL;
    Car *car = (Car*)malloc(sizeof(Car));
    strcpy(car->type, "Honda");
    strcpy(car->company, "Civic");
    car->year = 2020;
    root = insert(root, car);
    inorder(root);
    preorder(root);
    postorder(root);
    return 0;
}
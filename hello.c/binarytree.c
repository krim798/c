#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the binary tree
typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

// Function to create a new node with the given data
TreeNode* NewNode(int data) {
    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Function to perform preorder traversal
void PreorderTraversal(TreeNode *root) {
    if (root == NULL) return;
    printf("%d ", root->data);
    PreorderTraversal(root->left);
    PreorderTraversal(root->right);
}

// Function to perform inorder traversal
void InorderTraversal(TreeNode *root) {
    if (root == NULL) return;
    InorderTraversal(root->left);
    printf("%d ", root->data);
    InorderTraversal(root->right);
}

// Function to perform postorder traversal
void PostorderTraversal(TreeNode *root) {
    if (root == NULL) return;
    PostorderTraversal(root->left);
    PostorderTraversal(root->right);
    printf("%d ", root->data);
}

int main() {
    TreeNode *root = NewNode(1);
    root->left = NewNode(2);
    root->right = NewNode(3);
    root->left->left = NewNode(4);
    root->left->right = NewNode(5);

    printf("Preorder traversal: ");
    PreorderTraversal(root);
    printf("\n");

    printf("Inorder traversal: ");
    InorderTraversal(root);
    printf("\n");

    printf("Postorder traversal: ");
    PostorderTraversal(root);
    printf("\n");

    return 0;
}
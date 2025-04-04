#include <stdio.h>
#include <stdlib.h>

struct node {
    int item;
    struct node* left;
    struct node* right;
};

// Inorder traversal
void inorderTraversal(struct node* root) {
    if (root == NULL) return;
    inorderTraversal(root->left);
    printf("%d ", root->item);  // Changed to print without '->' for simplicity
    inorderTraversal(root->right);
}

// Preorder traversal
void preorderTraversal(struct node* root) {
    if (root == NULL) return;
    printf("%d ", root->item);  // Changed to print without '->'
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// Postorder traversal
void postorderTraversal(struct node* root) {
    if (root == NULL) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ", root->item);  // Changed to print without '->'
}
// Create a new Node
struct node* createNode(int value) {
    // Cast the result of malloc to node* to avoid 'void*' to 'node*' conversion error
    struct node* newNode = (struct node*)malloc(sizeof(struct node));  // Cast malloc to node*
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1); // Exit program if memory allocation fails
    }
    newNode->item = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// Insert on the left of the node
struct node* insertLeft(struct node* root, int value) {
    root->left = createNode(value);
    return root->left;
}

// Insert on the right of the node
struct node* insertRight(struct node* root, int value) {
    root->right = createNode(value);
    return root->right;
}
int main() {
    struct node* root = createNode(1);
    insertLeft(root, 2);
    insertRight(root, 3);
    insertLeft(root->left, 4);

    printf("Inorder traversal:\n");
    inorderTraversal(root);
    printf("\n");

    printf("Preorder traversal:\n");
    preorderTraversal(root);
    printf("\n");

    printf("Postorder traversal:\n");
    postorderTraversal(root);
    printf("\n");

}
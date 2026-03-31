#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

// Insert in BST
struct node* insert(struct node *root, int x) {
    if(root == NULL) {
        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = x;
        newnode->left = newnode->right = NULL;
        return newnode;
    }

    if(x < root->data)
        root->left = insert(root->left, x);
    else
        root->right = insert(root->right, x);

    return root;
}

// Inorder Traversal (Sorted output)
void inorder(struct node *root) {
    if(root == NULL)
        return;

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

// Search in BST
int search(struct node *root, int key) {
    if(root == NULL)
        return 0;

    if(root->data == key)
        return 1;
    else if(key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

int main() {
    struct node *root = NULL;
    int n, x, i, key;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &x);
        root = insert(root, x);
    }

    printf("Inorder Traversal: ");
    inorder(root);

    printf("\nEnter element to search: ");
    scanf("%d", &key);

    if(search(root, key))
        printf("Element Found");
    else
        printf("Element Not Found");

    return 0;
}
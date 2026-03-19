#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node *create() {
    int x;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter value: ");
    scanf("%d", &x);
    if (x == -1) {
        free(newnode);
        return NULL;
    }
    newnode->data = x;
    printf("Enter the left child of %d: ", x);
    newnode->left = create();
    printf("Enter the right child of %d: ", x);
    newnode->right = create();
    return newnode;
}

int main() {
    struct node *root;
    root = create();
    return 0;
}

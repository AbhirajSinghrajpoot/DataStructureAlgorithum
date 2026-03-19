#include <stdio.h>
#include <stdlib.h>

// Define the maximum size of the stack
#define MAX 5 

// Declare stack and top globally
int stack[MAX];
int top = -1;

// Function to push an element onto the stack
void push() {
    int x;
    printf("\n Enter data: ");
    scanf("%d", &x);
    if (top == MAX - 1) {
        printf("\n Overflow");
    } else {
        top++;
        stack[top] = x;
        printf("\n %d pushed onto the stack", x);
    }
}

// Function to pop an element from the stack
void pop() {
    if (top == -1) {
        printf("\n Underflow");
    } else {
        int item = stack[top];
        top--;
        printf("\n %d popped from the stack", item);
    }
}

// Function to peek the top element of the stack
void peek() {
    if (top == -1) {
        printf("\n Stack is empty");
    } else {
        printf("\n Top element is %d", stack[top]);
    }
}

// Function to display the stack
void display() {
    if (top == -1) {
        printf("\n Stack is empty");
    } else {
        printf("\n Stack elements are:");
        for (int i = top; i >= 0; i--) {
            printf("\n %d", stack[i]);
        }
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n 1->PUSH \n 2->POP \n 3->PEEK \n 4->DISPLAY \n 5->Exit \n Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("\n Invalid choice");
        }
    }
    return 0;
}

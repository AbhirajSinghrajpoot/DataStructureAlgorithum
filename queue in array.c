#include <stdio.h>
#include <stdlib.h>
#define N 5

int queue[N];
int front = -1;
int rear = -1;

// Function to enqueue an element to the queue
void enqueue() {
    int x;
    printf("Enter the value: ");
    scanf("%d", &x);
    if (rear == N - 1) {
        printf("OVERFLOW\n");
    } else if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = x;
    } else {
        rear++;
        queue[rear] = x;
    }
}

// Function to dequeue an element from the queue
void dequeue() {
    if (front == -1 && rear == -1) {
        printf("UNDERFLOW\n");
    } else if (front == rear) {
        front = rear = -1;
    } else {
        printf("Dequeued element: %d\n", queue[front]);
        front++;
    }
}

// Function to peek the front element of the queue
void peek() {
    if (front == -1 && rear == -1) {
        printf("QUEUE IS EMPTY\n");
    } else {
        printf("Front element: %d\n", queue[front]);
    }
}

// Function to display all elements in the queue
void display() {
    if (front == -1 && rear == -1) {
        printf("Queue is Empty\n");
    } else {
        printf("Queue elements are: \n");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n1->ENQUEUE \n2->DEQUEUE \n3->PEEK \n4->DISPLAY \n5->Exit \nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
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
                printf("Invalid choice\n");
        }
    }
    return 0;
}

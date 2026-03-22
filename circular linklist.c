#include <stdio.h>
#include <stdlib.h>

// Node ka structure
struct slist {
    int data;
    struct slist *next;
};
typedef struct slist node;
node *head = NULL;

// Circular Linked List Create Function
void createLinkedList() {
    node *newNode, *temp;
    int data;

    // Node ka data le lo
    printf("Enter the data for the new node: ");
    scanf("%d", &data);

    newNode = (node *)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) { // Pehla node insert karna
        head = newNode;
        newNode->next = head; // Circular banane ke liye
    } else {
        temp = head;
        while (temp->next != head) { // Last node tak jao
            temp = temp->next;
        }
        temp->next = newNode; // Last node ko naye node se jodo
        newNode->next = head; // Naya node head ko point kare
    }
}

// Circular Linked List Display Function
void displayLinkedList() {
    node *temp = head;

    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Circular Linked List: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head); // Jab tak wapas head na aa jaye
    printf("(Head)\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n1 -> Create List\n2 -> Display List\n3 -> Exit\nEnter Your Choice: ");
        scanf("%d", &choice);

        if (choice == 1) 
            createLinkedList();
        else if (choice == 2) 
            displayLinkedList();
        else if (choice == 3) 
            break;
        else 
            printf("\nWrong Choice!\n");
    }

    return 0;
}

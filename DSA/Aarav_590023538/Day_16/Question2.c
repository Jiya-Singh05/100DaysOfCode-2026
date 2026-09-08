#include <stdio.h>
#include <stdlib.h>

// Structure of a doubly linked list node
struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

// Function to delete the last node
struct Node* deleteLastNode(struct Node *head) {
    // If the list is empty
    if (head == NULL)
        return NULL;
    // If the list contains only one node
    if (head->next == NULL) {
        free(head);
        return NULL;
    }
    // Traverse to the last node
    struct Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    // Remove the last node from the list
    temp->prev->next = NULL;
    // Free the memory of the deleted node
    free(temp);
    // Return the updated head
    return head;
}

// Function to print the linked list
void printList(struct Node *head) {
    // If the list is empty
    if (head == NULL) {
        printf("NULL");
        return;
    }
    // Print all nodes
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}

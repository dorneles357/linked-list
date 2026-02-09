#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"

Node* createLinkedList() {
    return NULL;
}

void append(Node** head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node)); 
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }
}
#include "linked_list.h"
#include <stdio.h>

int testInsertElement(void);

int testDeleteElement(void);

int main(void) {
    if (testInsertElement() == 0) {
        printf("[🟢 PASS] Insert element test\n");
    } else {
        printf("[🔴 FAIL] Insert element test\n");
    }

    if (testDeleteElement() == 0) {
        printf("[🟢 PASS] Delete element test\n");
    } else {
        printf("[🔴 FAIL] Delete element test\n");
    }

    return 0;
}

int testInsertElement(void) {
    int expected[5] = {1, 2, 3, 4, 5};
    Node* head = createLinkedList();
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    append(&head, 5);
    
    int i = 0;
    Node* current = head;
    while (current != NULL) {
        if (current->data != expected[i]) {
            return 1;
        }
        current = current->next;
        i++;
    }

    freeList(head);
    return 0;
}

int testDeleteElement(void) {
    Node* head = createLinkedList();
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    append(&head, 5);
    
    deleteNode(&head, 3);
    
    int expected[4] = {1, 2, 4, 5};
    int i = 0;
    Node* current = head;
    while (current != NULL) {
        if (current->data != expected[i]) {
            return 1;
        }
        current = current->next;
        i++;
    }

    freeList(head);
    return 0;
}

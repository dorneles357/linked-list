#include "linked_list.h"
#include <stdio.h>

int main() {
    Node* head = createLinkedList();
    printList(head);
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    append(&head, 5);
    
    printList(head);

    deleteNode(&head, 3);
    printf("After deleting node with value 3:\n");
    printList(head);
    freeList(head);
    printf("After freeing the list:\n");
    printList(head);

    return 0;
}
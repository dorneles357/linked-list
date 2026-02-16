#include "linked_list.h"
#include <stdio.h>

int main() {
    Node* head = createLinkedList();
    printList(head);

    printf("Appending nodes\n");
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    append(&head, 5);
    
    printList(head);

    printf("Deleting node with value 3\n");
    deleteNode(&head, 3);
    printList(head);

    return 0;
}
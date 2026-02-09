#include "linked_list.h"

int main() {
    Node* head = createLinkedList();

    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    append(&head, 5);
    
    printList(head);

    return 0;
}
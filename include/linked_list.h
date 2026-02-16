#ifndef LINKED_LIST_H
#define LINKED_LIST_H

/**
 * @file linked-list.h
 * 
 * @brief Definição da estrutura LinkedList e funções relacionadas.
 */


/** * @brief Estrutura de um nó da lista ligada.
 */
typedef struct Node {
    int data;           /**< Dado armazenado no nó */
    struct Node* next;  /**< Ponteiro para o próximo nó */
} Node;

/** * @brief Criar uma lista ligada vazia.
 */
Node* createLinkedList();

/** * @brief Adicionar um elemento ao final da lista ligada.
 * 
 * @param head Ponteiro para o ponteiro do início da lista.
 * @param data Dado a ser adicionado à lista.
 */
void append(Node** head, int data);

/** * @brief Liberar a memória alocada para a lista ligada.
 * 
 * @param head Ponteiro para o início da lista.
 */
void freeList(Node* head);

/** * @brief Deletar um nó específico da lista ligada.
 * 
 * @param head Ponteiro para o ponteiro do início da lista.
 * @param key Valor do nó a ser deletado.
 */
void deleteNode(Node** head, int key);

/** * @brief Imprimir os elementos da lista ligada.
 * 
 * @param head Ponteiro para o início da lista.
 */
void printList(Node* head);

#endif

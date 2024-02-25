#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 *
 * @head: A pointer to the first node of the list
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *node;

    /* Traverse the list and free each node */
    while (head)
    {
        /* Save the current node */
        node = head;
        /* Move to the next node */
        head = head->next;
        /* Free the current node */
        free(node);
    }
}

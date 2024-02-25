#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Free a dlistint_t list
 * @head: Head of the list
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL) /* Loop until the end of the list */
	{
		dlistint_t *next = head->next; /* Store the next node */
		free(head); /* Free the current node */
		head = next; /* Move to the next node */
	}
}

#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Add a node at the end of a list
 *
 * @head: The address of the pointer to the first element of the list
 * @n: The number to store in the new element
 *
 * Return: A pointer to the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    /* Allocate memory for the new node */
    dlistint_t *new;
    /* Traverse the list to find the last node */
    dlistint_t *l;

    /* Allocate memory for the new node */
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        return (NULL);
    }
    /* Initialize the new node with the given value */
    new->n = n;
    new->next = NULL;

    /* If the list is empty, make the new node the head */
    if (*head == NULL)
    {
        *head = new;
        new->prev = NULL;
        return (new);
    }

    /* Traverse the list to find the last node */
    l = *head;
    while (l->next != NULL)
    {
        l = l->next;
    }

    /* Add the new node at the end of the list */
    l->next = new;
    new->prev = l;
    return (new);
}

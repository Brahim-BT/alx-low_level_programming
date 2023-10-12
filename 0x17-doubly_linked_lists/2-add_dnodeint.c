#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @h: pointer to dlinkedlist
 * @n: the new node
 * Return: integer
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node;

    dlistint_t *h = *head;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);
    new_node->n = n;
    new_node->prev = NULL;
    if (h != NULL)
    {
        h->prev = new_node;
        new_node->next = h;
    }
    else
        new_node->next = NULL;

    h = new_node;
    return (h);
}
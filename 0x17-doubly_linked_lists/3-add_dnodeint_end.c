#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to dlinkedlist
 * @n: the value of new node
 * Return: pointer
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node;

    dlistint_t *h;

    h = *head;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (0);
    new_node->n = n;
    new_node->next = NULL;
    if (h != NULL)
    {
        while (h->next != NULL)
            h = h->next;
        h->next = new_node;
        new_node->prev = h;
    }
    else
    {
        new_node->prev = NULL;
        *head = new_node;
    }
    return (new_node);
}
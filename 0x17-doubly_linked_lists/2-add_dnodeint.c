#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @h: pointer to dlinkedlist
 * @n: the new node
 * Return: integer
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (0);

    new->n = n;
    new->prev = NULL;
    if (*head != NULL)
    {
        (*head)->prev = new;
        new->next = *head;
    }
    else
        new->next = NULL;
    *head = new;
    return (new);
}
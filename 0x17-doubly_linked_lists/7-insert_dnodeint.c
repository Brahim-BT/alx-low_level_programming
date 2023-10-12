#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @head: pointer to dlinkedlist
 * @index: index of node
 * @n: integer
 * Return: pointer
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int m;

    dlistint_t *new_head;

    dlistint_t *new;

    m = 0;
    new_head = *h;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);
    new->n = n, new->prev = NULL, new->next = NULL;
    if (*h == NULL && idx == 0)
    {
        *h = new;
        return (new);
    }
    while (new_head != NULL && m < idx)
    {
        if (new_head->next == NULL && m + 1 == idx)
        {
            new_head->next = new, new->prev = new_head;
            return (new);
        }
        new_head = new_head->next;
        m++;
    }
    if (new_head == NULL && m < idx)
    {
        free(new);
        return (NULL);
    }
    if (new_head->prev == NULL)
        *h = new;
    else
    {
        new_head->prev->next = new;
        new->prev = new_head->prev;
    }
    new->next = new_head;
    new_head->prev = new;
    return (new);
}
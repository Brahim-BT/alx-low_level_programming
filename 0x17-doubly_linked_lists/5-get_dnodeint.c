#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to dlinkedlist
 * @index: index of node
 * Return: pointer
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int n;

    dlistint_t *new_head;

    n = 0;
    new_head = head;

    while (new_head != 0)
    {
        if (n == index)
            return (new_head);
        new_head = new_head->next;
        n++;
    }
    return (0);
}
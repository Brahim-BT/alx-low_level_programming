#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list.
 * @head: pointer to dlinkedlist
 * Return: integer
 */

int sum_dlistint(dlistint_t *head)
{
    int s;

    dlistint_t *new_head;

    s = 0;
    new_head = head;

    if (new_head == NULL)
        return (0);
    while (new_head != 0)
    {
        s = s + new_head->n;
        new_head = new_head->next;
    }
    return (s);
}
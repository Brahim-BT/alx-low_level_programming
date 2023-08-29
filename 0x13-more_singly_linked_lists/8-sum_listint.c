#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list.
 * @head: the head of the list
 * Return: int
 */

int sum_listint(listint_t *head)
{
    int s;

    s = 0;
    if (head == NULL)
        return (0);
    while (head != NULL)
    {
        s += head->n;
        head = head->next;
    }
    return (s);
}

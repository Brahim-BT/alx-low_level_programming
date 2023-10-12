#include "lists.h"

/**
 * print_dlistint - print the elements of a dlinkedlist
 * @h: pointer to dlinkedlist
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
    int n;

    const dlistint_t *head = h;

    n = 0;

    while (head != NULL)
    {
        printf("%d\n", head->n);
        head = head->next;
        n++;
    }

    return (n);
}
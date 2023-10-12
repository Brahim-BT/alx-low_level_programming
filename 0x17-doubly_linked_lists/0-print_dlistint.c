#include "lists.h"

/**
 * print_dlistint - print the elements of a dlinkedlist
 * @h: pointer to the double linked list
 * Return: integer
 */

size_t print_dlistint(const dlistint_t *h)
{
    int n;

    n = 0;

    while (h != NULL)
    {
        printf("%d", (*h).n);
        h = (*h).next;
        n++;
    }
    return (n);
}
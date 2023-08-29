#include "lists.h"

/**
 * print_listint - this function will prints all the elements of a list_t list.
 * @h: the list to be printed
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
    int n;

    n = 0;
    while ((*h).next != NULL)
    {
        printf("%d\n", (*h).n);
        n++;
        h = (*h).next;
    }
    printf("%d\n", (*h).n);
    n++;
    return (n);
}

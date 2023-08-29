#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: the list to be printed
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
    int n;

    for (n = 0; (*h).next != NULL; n++)
        h = (*h).next;
    n++;
    return (n);
}
#include "lists.h"

/**
 * list_len - this function will return the number of elements in a linked list_t list.
 * @h: the list to be printed
 * Return: list_t
 */

size_t list_len(const list_t *h)
{
    int n;

    for (n = 0; h != NULL; n++)
        h = h->next;

    return (n);
}

#include "lists.h"

/**
 * print_list - this function will prints all the elements of a list_t list.
 * @h: the list to be printed
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
    unsigned long n;

    n = 0;
    while (h != NULL)
    {
        if (h->str == NULL)
            printf("[0] (nil)");
        else
            printf("[%d] %s\n", h->len, h->str);
        h = h->next;
        n++;
    }
    return n;
}

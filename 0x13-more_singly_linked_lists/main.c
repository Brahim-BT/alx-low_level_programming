#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

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

int main(int argc, char const *argv[])
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = print_listint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}

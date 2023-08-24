#include "lists.h"

/**
 * add_node_end - this function will free a list_t list.
 * @head: the head of list_t
 * Return: void
 */

void free_list(list_t *head)
{
    if (head == NULL)
        return;
    list_t *newhead;

    newhead = head;

    while (newhead->next != NULL)
    {
        free(newhead->str);
        newhead = newhead->next;
    }
    free(head);
}
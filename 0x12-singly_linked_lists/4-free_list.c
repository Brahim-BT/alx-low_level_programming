#include "lists.h"

/**
 * free_list - this function will free a list_t list.
 * @head: the head of list_t
 * Return: void
 */

void free_list(list_t *head)
{
    list_t *newhead;

    while (head != NULL)
    {
        newhead = head->next;
        free(head->str);
        free(head);
        head = newhead;
    }
}
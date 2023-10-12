#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to dlinkedlist
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
    dlistint_t *tmp_node;

    while (head != NULL)
    {
        tmp_node = head->next;
        free(head);
        head = tmp_node;
    }
}
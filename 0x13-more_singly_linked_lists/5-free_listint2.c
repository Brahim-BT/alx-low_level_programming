#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: the head of the list
 * Return: void
 */

void free_listint2(listint_t **head)
{
    listint_t *head2;

    while (*head != NULL)
    {
        head2 = (*head)->next;
        free(head);
        *head = head2;
    }
    *head = NULL;
}

#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: the head of the list
 * Return: void
 */

void free_listint(listint_t *head)
{
    listint_t *head2;

    head2 = head->next;
    while (head->next != NULL)
    {
        free(head);
        head = head2;
        head2 = head->next;
    }
    free(head);
}
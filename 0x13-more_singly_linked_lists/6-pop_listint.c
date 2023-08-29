#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns the head node’s data (n).
 * @head: the head of the list
 * Return: int
 */

int pop_listint(listint_t **head)
{
    listint_t *head2;

    head2 = (*head)->next;
    free(*head);
    *head = head2;
}
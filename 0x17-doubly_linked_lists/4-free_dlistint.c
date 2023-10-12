#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to dlinkedlist
 * @n: the value of new node
 * Return: pointer
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
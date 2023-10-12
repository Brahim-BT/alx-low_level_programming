#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to dlinkedlist
 * @n: the value of new node
 * Return: pointer
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;
    new_node->n = n;
    new_node->next = NULL;
    if ((*head) != NULL)
    {
        while ((*head)->next != NULL)
            (*head) = (*head)->next;
        (*head)->next = new_node;
        new_node->prev = (*head);
        (*head) = new_node;
    }
    else
    {
        (*head)->next = new_node;
        new_node->prev = (*head);
    }
    return (new_node);
}
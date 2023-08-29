#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: the head of the list
 * @n: the value of the new node
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *last_node;

    listint_t *h;

    last_node = malloc(sizeof(listint_t));

    if (last_node == NULL)
        return (NULL);
    h = *head;
    last_node->n = n;
    last_node->next = NULL;
    if (*head == NULL)
    {
        *head = last_node;
        return (*head);
    }
    while (h->next != NULL)
        h = h->next;
    h->next = last_node;
    return (last_node);
}

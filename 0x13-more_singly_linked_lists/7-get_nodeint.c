#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: the head of the list
 * @index: the index of the node
 * Return: pointer of listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    int i;

    listint_t *node;

    node = head;

    if (head == NULL)
        return (NULL);
    for (i = 0; i < index; i++)
    {
        node = node->next;
    }
    return (node);
}

#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer of linked list
 * @idx: index
 * @n: the value to be added to node
 * Return: pointer to new linked list
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    int k;
    listint_t *node, *prev;

    k = 0;
    node = malloc(sizeof(listint_t));
    if (node == NULL || head == NULL || idx > list_len(*head))
    {
        free(node);
        return (0);
    }
    node->n = n;
    node->next = NULL;
    while (head != 0)
    {
        if (k == idx)
        {
            if (k == 0)
            {
                node->next = *head;
                *head = node;
                return (node);
            }
            node->next = prev->next;
            prev->next = node;
            return (node);
        }
        else if (k == idx - 1)
            prev = *head;
        head = &((*head)->next);
        k++;
    }
    return (0);
}

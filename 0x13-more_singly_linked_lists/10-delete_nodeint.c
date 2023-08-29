#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list.
 * @head: pointer to pointer of linked list
 * @idx: index
 * Return: 1 or -1
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    int i;

    listint_t *prev;

    listint_t *h;

    i = 0;

    if (index > list_len(*head) || list_len(*head) == 0)
        return (-1);
    while (head != NULL)
    {
        if (index == i)
        {
            h = *head;
            if (i == 0)
            {
                *head = h->next;
                free(h);
                return (1);
            }
            prev->next = h->next;
            free(h);
            return (1);
        }
        else if (i == index - 1)
            prev = *head;
        head = &((*head)->next);
        i++;
    }
    return (-1);
}

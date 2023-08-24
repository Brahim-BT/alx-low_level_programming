#include "lists.h"

/**
 * add_node_end - this function will adds a new node at the end of a list_t list.
 * @h: the list of list_t
 * @str: string
 * Return: list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *newnode;

    newnode = (list_t *)malloc(sizeof(list_t));
    if (newnode == NULL)
        return (NULL);
    while (*head != NULL)
    {
        if ((**head).next == NULL)
        {
            newnode->str = strdup(str);
            newnode->len = strlen(str);
            (**head).next = newnode;
        }
        (*head) = (**head).next;
    }
    return (*head);
}

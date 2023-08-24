#include "lists.h"

/**
 * list_len - this function will return the number of elements in a linked list_t list.
 * @h: the list to be printed
 * Return: list_t
 */

list_t *add_node(list_t **head, const char *str)
{
    list_t *newnode;

    newnode = (list_t *)malloc(sizeof(list_t));
    if (newnode == NULL)
        return (NULL);
    newnode->str = strdup(str);
    newnode->len = (**head).len;
    newnode->next = (*head);
    (*head) = newnode;
    return (newnode);
}
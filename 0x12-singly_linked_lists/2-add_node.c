#include "lists.h"

/**
 * add_node - this function will adds a new node at the beginning of a list_t list.
 * @h: the list to be printed
 * @str: string
 * Return: list_t
 */

list_t *add_node(list_t **head, const char *str)
{
    list_t *newnode;

    newnode = (list_t *)malloc(sizeof(list_t));
    if (newnode == NULL)
        return (NULL);
    newnode->str = strdup(str);
    newnode->len = strlen(str);
    newnode->next = (*head);
    (*head) = newnode;
    return (*head);
}
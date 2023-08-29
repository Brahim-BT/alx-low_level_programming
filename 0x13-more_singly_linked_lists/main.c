#include "lists.h"

size_t print_listint(const listint_t *h)
{
    int n;

    n = 0;
    while ((*h).next != NULL)
    {
        printf("%d\n", (*h).n);
        n++;
        h = (*h).next;
    }
    printf("%d\n", (*h).n);
    n++;
    return (n);
}

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node = malloc(sizeof(listint_t));

    if (new_node == NULL)
        return (NULL);
    new_node->n = n;
    new_node->next = *head;
    *head = new_node;
    return (*head);
}

int main()
{
    listint_t *head;

    head = NULL;
    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint(head);
    return (0);
}

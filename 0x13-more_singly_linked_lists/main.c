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

int main()
{
    listint_t *head;
    listint_t *node;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    node = get_nodeint_at_index(head, 5);
    printf("%d\n", node->n);
    print_listint(head);
    return (0);
}

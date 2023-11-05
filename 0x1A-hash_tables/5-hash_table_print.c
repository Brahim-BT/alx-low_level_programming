#include "hash_tables.h"

/**
 * hash_table_print - prints the keys and values of the hash table
 *
 * @ht: pointer to the hash table
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int n;
    hash_node_t *temp;
    char *seper;

    if (ht == NULL)
        return;

    printf("{");
    seper = "";

    for (n = 0; n < ht->size; n++)
    {
        temp = ht->array[n];
        while (temp != NULL)
        {
            printf("%s'%s': '%s'", seper, temp->key, temp->value);
            seper = ", ";
            temp = temp->next;
        }
    }
    printf("}\n");
}
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: pointer to the hash table
 * Return: no return
 */
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int n;

    hash_node_t *temp1;

    hash_node_t *temp2;

    if (ht == NULL)
        return;

    for (n = 0; n < ht->size; n++)
    {
        temp1 = ht->array[n];
        while ((temp2 = temp1) != NULL)
        {
            temp1 = temp1->next;
            free(temp2->key);
            free(temp2->value);
            free(temp2);
        }
    }
    free(ht->array);
    free(ht);
}
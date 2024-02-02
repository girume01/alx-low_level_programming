#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table.
 * @ht: pointer to the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *counter = ht;
	hash_node_t *node_int, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node_int = ht->array[i];
			while (node_int != NULL)
			{
				tmp = node_int->next;
				free(node_int->key);
				free(node_int->value);
				free(node_int);
				node_int = tmp;
			}
		}
	}
	free(counter->array);
	free(counter);
}

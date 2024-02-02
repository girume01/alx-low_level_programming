#include "hash_tables.h"
/**
 * hash_table_print - prints hash table.
 * @ht: pointer to the hash table for print.
 * Description: value pairs are printed in the order
 *              they appear in the array of the hash tables.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node_int;
	unsigned long int i;
	unsigned char j = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (j == 1)
				printf(", ");

			node_int = ht->array[i];
			while (node_int != NULL)
			{
				printf("'%s': '%s'", node_int->key, node_int->value);
				node_int = node_int->next;
				if (node_int != NULL)
					printf(", ");
			}
			j = 1;
		}
	}
	printf("}\n");
}

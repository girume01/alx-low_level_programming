#include "hash_tables.h"

/**
 * hash_table_get - retrieve the values.
 * @ht: pointer to the hash table.
 * @key: key to get the value.
 * @Return: If the key not matched - NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node_int;
	unsigned long int indx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	indx = key_index((const unsigned char *)key, ht->size);
	if (indx >= ht->size)
		return (NULL);

	node_int = ht->array[indx];
	while (node_int && strcmp(node_int->key, key) != 0)
		node_int = node_int->next;
	return ((node_int == NULL) ? NULL : node_int->value);
}

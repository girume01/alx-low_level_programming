#include "hash_tables.h"

/**
 * hash_table_set -  update elements in hash tables.
 * @ht: pointer to hash table.
 * @key: key to add.
 * @value: value associated with the key.
 * Return: if fail - 0., else - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *counter;
	char *value1;
	unsigned long int j, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value1 = strdup(value);
	if (value1 == NULL)
		return (0);

	j = key_index((const unsigned char *)key, ht->size);
	for (i = j; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value1;
			return (1);
		}
	}

	counter = malloc(sizeof(hash_node_t));
	if (counter == NULL)
	{
		free(value1);
		return (0);
	}
	counter->key = strdup(key);
	if (counter->key == NULL)
	{
		free(counter);
		return (0);
	}
	counter->value = value1;
	counter->next = ht->array[j];
	ht->array[j] = counter;

	return (1);
}

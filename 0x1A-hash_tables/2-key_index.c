#include "hash_tables.h"

/**
 * key_index - Get the index at which a key/value
 *      pair should be stored in array of a hash table.
 * @key: The key to get the index of.
 * @size: The size of the array of the hash table.
 *
 * Return: The index of the key.
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = 0;
	unsigned long int index;

	while (*key)
	{
		hash_value = (hash_value * 33) ^ (*key);
		key++;
	}

	index = hash_value % size;
	return (index);
}

#include "main.h"
/**
 * create_array - creates an array of characters and initializes.
 * @size: size of the array to create.
 * @c: character to initialize the array element.
 * Return: pointer it created, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int y;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
		array = (char *)malloc(size * sizeof(char));
		if (array == NULL)
		{
			return (NULL);
		}
		for (y = 0; y < size; y++)
		{
			array[y] = c;
		}
		return (array);
}

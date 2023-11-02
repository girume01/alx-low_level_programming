#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using malloc.
 * @nmemb: number of elements in the array.
 * @size: size in bytes of each element.
 * Return: pointer to allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	size_t totalmembers;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	totalmembers = nmemb * size;
	ptr = malloc(totalmembers);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, totalmembers);
	return (ptr);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates memory block using malloc.
 * @ptr: pointer to the memory previously allocated with malloc.
 * @old_size: size in bytes of the allocated space for ptr.
 * @new_size: new size in bytes of the new memory block.
 * Return: pointer to the newly allocated memory block or NULL on failure.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *helloworld;
	unsigned int xy;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	xy = (old_size < new_size) ? old_size : new_size;
	helloworld = malloc(new_size);
	if (helloworld == NULL)
	{
		return (NULL);
	}
	if (xy > 0)
	{
		memcpy(helloworld, ptr, xy);
	}
	free(ptr);
	{
	return (helloworld);
	}
}

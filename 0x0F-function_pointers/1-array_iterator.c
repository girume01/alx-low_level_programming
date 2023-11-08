#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - that iterates the array.
 * @array: an array.
 * @size: element to print.
 * @action: pointer to print.
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t xy;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (xy = 0; xy < size; xy++)
	{
		action(array[xy]);
	}
}

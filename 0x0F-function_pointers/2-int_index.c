#include "function_pointers.h"
/**
 * int_index - return index place if comparison true else -1.
 * @array: size of array.
 * @size: size of elements.
 * @cmp: pointer to func of one.
 * Return: by -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int xy;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (xy = 0; xy < size; xy++)
	{
		if (cmp(array[xy]))
		return (xy);
	}
	return (-1);
}

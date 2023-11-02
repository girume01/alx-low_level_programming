#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - this creates an arrayof integer.
 * @min: minimum value of range.
 * @max: maximum value of range.
 * Return: pointer to the newly created array or NULL on failure.
 */
int *array_range(int min, int max)
{
	int yz;
	int *string;
	int xy;

	if (min > max)
	{
		return (NULL);
	}
	yz = max - min + 1;
	string = (int *)malloc(yz * sizeof(int));
	if (string == NULL)
	{
		return (NULL);
	}
	for (xy = 0; xy < yz; xy++)
	{
		string[xy] = min + xy;
	}
	return (string);
}

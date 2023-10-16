#include "main.h"
#include <stdio.h>
/**
 * print_array - prints the element of array
 *
 * @a: array integers
 *
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}

#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - to calculate and print sum of diagonals
 * @a: the pointer to 2d array
 * @size: the size of the square 2d array
 */
void print_diagsums(int *a, int size)
{
	int val1 = 0;
	int val2 = 0;
	int z = 0;

	while (z < size)
	{
		val1 += a[z * size + z];
		z++;
	}
	z = size - 1;
	while (z >= 0)
	{
		val2 += a[z * size + (size - z - 1)];
		z--;
	}
	printf("%d, %d\n", val1, val2);
}

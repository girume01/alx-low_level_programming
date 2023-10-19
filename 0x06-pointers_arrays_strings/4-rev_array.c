#include "main.h"
/**
 * reverse_array - reverse array of numbers
 * @a: array to be reverse
 * @n: describe number of elements
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int y = 0;
	int z;

	while (y < n--)
	{
		z = a[y];
		a[y] = a[n];
		a[n] = z;
		y++;
	}
}

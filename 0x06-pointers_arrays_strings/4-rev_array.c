#include "main.h"
/**
 *
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

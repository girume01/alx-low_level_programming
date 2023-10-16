#include "main.h"
/**
 * swap_int - swap the two integers
 * @a: integer 1
 * @b: integer 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

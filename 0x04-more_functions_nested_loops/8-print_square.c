#include "main.h"
/**
 * print_square - this prints a square of specified size
 *
 * @a: size of square
 */
void print_square(int a)
{
	int y, z;

	if (a <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < a; y++)
		{
			for (z = 0; z < a; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

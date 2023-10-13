#include "main.h"
/**
 * print_diagonal - print diagonal line by backslash
 *
 * @a: the number of backslash
 *
 */
void print_diagonal(int a)
{
	int b, c;

	if (a <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (b = 0; b < a; b++)
	{
		for (c = 0; c < b; c++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
}

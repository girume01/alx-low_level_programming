#include "main.h"
/**
 * print_line - print a  straight line by  underscore
 *
 * @a: the number of times the character
 *
 */
void print_line(int a)
{
	int j;

	if (a <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < a; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

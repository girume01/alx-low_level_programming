#include "main.h"
/**
 * times_table - check description
 *
 * description - it prints 9 times table
 *
 * Return: 0
 */

void times_table(void)
{
	int result, i;

	for (i = 0; i <= 9; i++)
	{
		result = i * 9;
		_putchar('0' + (i / 10));
		_putchar('0' + (i % 10));
		_putchar(' ');
		_putchar('x');
		_putchar(' ');
		_putchar('9');
		_putchar(' ');
		_putchar('=');
		_putchar(' ');
		_putchar('0' + (result / 10));
		_putchar('0' + (result % 10));
		_putchar('\n');
	}
}

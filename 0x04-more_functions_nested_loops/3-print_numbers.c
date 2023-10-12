#include "main.h"
#include <stdio.h>
/**
 * print_numbers - print number 0 to 9
 */

void print_numbers(void)
{
	char number;

	number = '0';
	while (number <= '9')
	{
		_putchar(number);
		number++;
	}
	_putchar('\n');
}

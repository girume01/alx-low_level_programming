#include "main.h"
/**
 *print_last_digit
 *@a: functio parameter
 *Return: b
 */
int print_last_digit(int a)
{
	int b;
       
	b = a % 10;

	if (a < 0)
	{
		b = -b;
	}
	_putchar('0' + b);
	return (b);
}

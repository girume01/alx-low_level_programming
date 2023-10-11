#include "main.h"
/**
 * print_last_digit - prints the last digit
 *
 * @number: the int to extract the last digit
 *
 * Return: return the value of last digit
 *
 */

int print_last_digit(int number)

{
	int lastdigit;

	if (number < 0)

		number = -number;

	lastdigit = number % 10;

	_putchar(lastdigit + '0');

	return (lastdigit);
}

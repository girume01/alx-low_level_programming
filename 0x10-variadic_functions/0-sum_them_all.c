#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that sum all numbers.
 * @n: integer value.
 * Return: 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int val1;
	va_list anumber;

	va_start(anumber, n);
	for (i = 0; i < (int)n; i++)
	{
		val1 += va_arg(anumber, int);
	}
	va_end(anumber);
	if (n == 0)
	{
		return (0);
	}
	return (val1);
}

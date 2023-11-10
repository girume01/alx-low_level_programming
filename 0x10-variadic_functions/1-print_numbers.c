#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints a numbers.
 * @separator: the string to be printed.
 * @n: the number of integers.
 * @...: to be add more data types
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list anumbers;
	unsigned int xy;

	va_start(anumbers, n);
	for (xy = 0; xy < n; xy++)
	{
		printf("%d", va_arg(anumbers, int));
		if (xy != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(anumbers);
}

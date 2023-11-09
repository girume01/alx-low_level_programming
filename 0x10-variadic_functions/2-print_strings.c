#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - a function to print strings.
 * @separator: the string to be printed.
 * @n: number of strings.
 * @...: for continious declaration.
 * Return: string.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int xy;
	va_list st;
	char *str;

	va_start(st, n);
	for (xy = 0; xy < n; xy++)
	{
		str = va_arg(st, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		if (xy != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(st);
}

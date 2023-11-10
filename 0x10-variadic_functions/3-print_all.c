#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function to print all numbers.
 * @...: argument to be added.
 * @format: list of types of arguments.
 */
void print_all(const char * const format, ...)
{
	va_list anumber;
	int i = 0;
	char *s;
	char c;

	va_start(anumber, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(anumber, int);
				printf("%c", c);
				break;
			case 'i':
				printf("%d", va_arg(anumber, int));
				break;
			case 'f':
				printf("%f", va_arg(anumber, double));
				break;
			case 's':
				s = va_arg(anumber, char *);
				if (s)
				printf("%s", s);
				else
					printf("(nil)");
				break;
			default:
				break;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(anumber);
}

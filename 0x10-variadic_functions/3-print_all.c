#include "variadic_functions.h"
/**
 * print_all - function to print all numbers.
 * @...: argument to be added.
 * @format: list of types of arguments.
 */
void print_all(const char * const format, ...)
{
	va_list anumber;
	int yz;
	char *xy, *vall = "";
	
	yz = 0;
	va_start(anumber, format);
	if (format)
	{
	while (format && format[yz])
	{
		switch (format[yz])
		{
			case 'c':
				printf("%s%c", vall, va_arg(anumber, int));
				break;
			case 'i':
				printf("%s%d", vall, va_arg(anumber, int));
				break;
			case 'f':
				printf("%s%f", vall, va_arg(anumber, double));
				break;
			case 's':
				xy = va_arg(anumber, char *);
				if (!xy)
					xy = "(nil)";
				printf("%s%s", vall, xy);
				break;
			default:
				yz++;
				continue;
		}
		vall = ", ";
		yz++;
	}
	}
	printf("\n");
	va_end(anumber);
}

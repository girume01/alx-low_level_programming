#include "main.h"
/**
 * print_rev - print string reverse
 * @s: input string
 */
void print_rev(char *s)
{
	int digit = 0;
	int j;

	for (j = 0; s[j] != '\0'; j++)
		digit++;
	for (j = digit - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}

#include "main.h"
/**
 * print_rev - print string reverse
 * @s: input string
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int count;

	i = 0;
	count = 0;
	do {
		count++;
		i++;
	} while (s[i] != '\0');
	i = count - 1;
	do {
		_putchar(s[i]);
		i--;
	} while (i >= 0);
	_putchar('\n');
}

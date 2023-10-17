#include "main.h"
/**
 * print_rev - print string reverse
 * @s: input string
 * Return: void
 */
void print_rev(char *s)
{
	int longi = 0;
	int x;

	do {
		longi++;
		s++;
	} while (*s != '\0');

	s--;
	for (x = longi; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

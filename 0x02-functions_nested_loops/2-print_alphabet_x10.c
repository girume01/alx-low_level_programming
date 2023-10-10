#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabets 10 time followed by new line
 *
 * Return: return by 0
 */
void print_alphabet_x10(void)
{
	char alpha;

	int count;

	for (count = 0; count < 10; count++)

	{
		alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	}
}

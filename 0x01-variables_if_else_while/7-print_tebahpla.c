#include <stdio.h>

/**
 * main - lowercase reverse alphabet
 *
 * Return: always 0
 *
 */

int main(void)
{
	char code;

	for (code = 'z'; code >= 'a'; code--)

		putchar(code);

	putchar('\n');

	return (0);
}

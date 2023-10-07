#include <stdio.h>

/**
 * main - number of base 16 in lowercase
 *
 * Return: always 0
 *
 */

int main(void)
{
	int num;
	char k;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (k = 'a'; k <= 'f'; k++)
		putchar(k);

	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - alphabets in lowercase and uppercase
 *
 * Return: always 0
 */
int main(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		if (j != 'e' && j != 'q')
			putchar(j);
	}

	putchar('\n');

	return (0);
}

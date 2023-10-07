#include <stdio.h>

/**
 * main - combination of two digit
 *
 * Return: always 0
 *
 */
int main(void)
{
	int code1;

	int code2;

	for (code1 = 0; code1 <= 98; code1++)
	{
		for (code2 = code1 + 1; code2 <= 99; code2++)
		{
			putchar((code1 / 10) + '0');
			putchar((code1 % 10) + '0');
			putchar(' ');
			putchar((code2 / 10) + '0');
			putchar((code2 % 10) + '0');
			if (code1 == 98 && code2 == 99)
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

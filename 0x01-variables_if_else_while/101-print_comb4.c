#include <stdio.h>

/**
 * main - combinaton of three digit in ascending order
 *
 * Return: always 0
 *
 */
int main(void)
{
	int object1, object2, object3;

	for (object1 = 0; object1 < 8; object1++)
	{
		for (object2 = object1 + 1; object2 < 9; object2++)
		{
			for (object3 = object2 + 1; object3 < 10; object3++)
			{
				putchar((object1 % 10) + '0');
				putchar((object2 % 10) + '0');
				putchar((object3 % 10) + '0');
				if (object1 == 7 && object2 == 8 && object3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

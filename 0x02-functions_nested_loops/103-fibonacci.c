#include <stdio.h>
/**
 * main - finds and prints the sum of the even
 *
 * this program is to find and prints the
 * sum of the even valued terms followed by
 * a new line
 * project 15
 *
 * Return: return by zero
 *
 */

int main(void)
{
	long int i, x = 1, y = 2, sum = 0, tsum = 0;

	for (i = 0; i < 49; i++)
	{
		if ((y % 2 == 0) && (y <= 4000000))
		{
			tsum = tsum + y;
		}
		sum = x + y;
		x = y;
		y = sum;
	}
	printf("%ld", tsum);
	printf("\n");
	return (0);
}

#include "main.h"
/**
 * print_times_table - print the n time
 * @n: number of time table
 *
 */
void print_times_table(int n)
{
	int digit, m, product;

	if (n < 0 || n > 15)
	{
		return;
	}


		for (digit = 0; digit <= n; digit++)
		{
			for (m = 0; m <= n; m++)
			{
				product = digit * m;

				if (m > 0)
					_putchar(',');

				_putchar(' ');
				if (product < 10)
					_putchar(' ');
				else if (product < 100)
					_putchar(' ');


				if (product >= 100)
					_putchar(product / 100 + '0');
				if (product >= 10)
					_putchar((product / 10) % 10 + '0');
				_putchar(product % 10 + '0');
			}
			_putchar('\n');
		}
}

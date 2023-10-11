#include <stdio.h>
/**
 * main - finds and prints the sum of the even valued
 *
 * Return: zeo
 *
 */

int main(void)
{
	int limit = 4000000;

	long long int sum = 0;

	int fib1 = 1;

	int fib2 = 2;

	while  (fib2 <= limit)
	{
		if (fib2 % 2 == 0)
		{
			sum += fib2;
		}

		int next_fib = fib1 + fib2;

		fib1 = fib2;
		fib2 = next_fib;
	}
	printf("%d: %lld\n", limit, sum);
	return (0);
}

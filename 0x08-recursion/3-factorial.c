#include "main.h"
/**
 * factorial - calculate the factorial of the number
 * @n: input number
 * Return: factorial of n, or -1 for error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

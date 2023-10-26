#include "main.h"
/**
 * clear_sqrt - recursiely find the squre root of number
 * @n: number to find the squre root
 * @square: parameter in the function
 * Return: natural squre root if found or (-1) if no natural
 * square root exists
 */
int clear_sqrt(int n, int square)
{
	if (square * square == n)
{
	return (square);
}
else if (square * square > n)
{
	return (-1);
}
else
{
	return (clear_sqrt(n, square + 1));
}
}
/**
 * _sqrt_recursion - calculate natural square root of a number
 * @n: number to find the square root
 * Return: natural square root of n, or (-1) if n is negative
 * or if there's no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (clear_sqrt(n, 1));
	}
}

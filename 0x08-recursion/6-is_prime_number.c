#include "main.h"
/**
 * primary - helper function to check for primality
 * @n: number to check for primality
 * @y: current divisor to test
 * Return: (1) if n is primr (0) otherwise
 */
int primary(int n, int y)
{
	if (y * y > n)
	{
		return (1);
	}
	if (n % y == 0)
	{
		return (0);
	}
	return (primary(n, y + 1));
}
/**
 * is_prime_number - check if number is prime
 * @n: number to check if number is prime
 * Return: (1) if n is prime, (0) otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (primary(n, 2));
}

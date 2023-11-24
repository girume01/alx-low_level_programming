#include <stdio.h>
#include "main.h"
/**
 * flip_bits - return the number of bits.
 * @n: first number.
 * @m: second number
 * Return: number of bits neede to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned int y;

	x = n ^ m;
	y = 0;

	while (x > 0)
	{
		y += x & 1;
		x >>= 1;
	}
	{
		return (y);
	}
}

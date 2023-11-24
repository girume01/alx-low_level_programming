#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0.
 * @n: pointer to the number.
 * @index: index of the bit to clear.
 * Return: 1 if success, -1 if there is an error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	{
		return (1);
	}
}

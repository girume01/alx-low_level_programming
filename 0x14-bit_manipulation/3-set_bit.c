#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * set_bit - sets the value of a bit.
 * @n: pointer to the number.
 * @index: index of the bit.
 * Return: 1 if successful, -1 if there is error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n | (1UL << index);
	{
		return (1);
	}
}

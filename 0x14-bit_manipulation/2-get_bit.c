#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * get_bit - Returns the value of a bit.
 * @n: number to extract the bit.
 * @index: inedx of the bit to retrieve.
 * Return: value of the bit at the index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		return ((n >> index) & 1);
	}
}

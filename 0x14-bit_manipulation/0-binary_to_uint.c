#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_unit - convert binary number to unsigned int.
 * @b: pointer to string of 0 and 1 chars.
 * Return: converted number.
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		result <<= 1;
		if (b[i] == '1')
			result += 1;
	}
	return (result);
}

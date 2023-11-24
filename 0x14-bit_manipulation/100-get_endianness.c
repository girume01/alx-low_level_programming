#include <stdio.h>
#include "main.h"
/**
 * get_endianness - checks the endianness.
 * Return: o if endian is big, 1 if little.
 */
int get_endianness(void)
{
	unsigned int x;
	char *encheck;

	x = 1;
	encheck = (char *)&x;
	{
		return (*encheck = 1);
	}
}

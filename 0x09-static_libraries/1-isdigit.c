#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check if the character is digit, 0-9
 *
 * @c: character to check
 *
 * Return: return 1 if c is digit, else 0
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

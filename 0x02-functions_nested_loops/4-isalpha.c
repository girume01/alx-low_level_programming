#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: character to check
 *
 * Return: if c is lower or uppercase 1, else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);
	else
		return (0);
}

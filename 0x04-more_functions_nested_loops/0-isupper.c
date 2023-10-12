#include "main.h"
/**
 * _isupper - checks the character upper or lwer
 *
 * @c: character to check
 *
 * Return: return 1 if c is upper, otherwise 0
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

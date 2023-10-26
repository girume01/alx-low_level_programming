#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_palindrome - check if string is palindrome or not.
 * @s: the input string to be checked.
 * pal - declaration for palindrome
 * Return: 1 if it is palindrome, 0 if it is not a palindrome
 */
int is_palindrome(char *s)
{
	int pal = strlen(s);
	int y, z;

	for (y = 0, z = pal - 1; y < z; y++, z--)
	{
		if (s[y] != s[z])
		{
			return (0);
		}
	}
	return (1);
}

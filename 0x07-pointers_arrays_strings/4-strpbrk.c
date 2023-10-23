#include "main.h"
/**
 * _strpbrk - locate the first occurence
 * @s: input string
 * @accept: character to accept
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int y;

	while (*s)
	{
		y = 0;
		while (accept[y])
		{
			if (*s == accept[y])
			{
				return (s);
			}
			y++;
		}
		s++;
	}
	return ('\0');
}

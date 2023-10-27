#include "main.h"
/**
 * _strspn - get the length of prfix substrng
 * @s: the input string
 * @accept: character to accept
 * Return: number of bytes in initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	int y;

	n = 0;
	while (*s)
	{
		y = 0;
		while (accept[y])
		{
			if (*s == accept[y])
			{
				n++;
				break;
			}
			else if (accept[y + 1] == '\0')
			{
				return (n);
			}
			y++;
		}
		s++;
	}
	return (n);
}

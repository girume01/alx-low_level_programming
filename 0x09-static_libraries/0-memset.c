#include "main.h"
/**
 * _memset - This fills block of memory with value
 *
 * @s: starting address
 *
 * @b: desired value
 *
 * @n: number of bytes
 *
 * Return: new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int y;

	y = 0;
	for (; n > 0; y++)
	{
		s[y] = b;
		n--;
		if (n == 0)
			break;
	}
	return (s);
}

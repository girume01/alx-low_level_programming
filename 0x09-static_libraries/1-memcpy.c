#include "main.h"
/**
 * _memcpy - copy memory place
 * @dest: destination of memory
 * @src: source of memory
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
	{
		dest[y] = src[y];
	}
	return (dest);
}

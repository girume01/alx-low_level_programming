#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: destination of string
 * @src: source of string to be oppened
 * @n: max number of characters
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int z = 0;

	while (z < n && *src != '\0')
	{
		dest[len + z] = *src;
		src++;
		z++;
	}
	dest[len + z] = '\0';
	return (dest);
}

#include "main.h"
/**
 * _strncpy - copy characters from src to dest
 * @dest: destination string
 * @src: source string
 * @n: max number of character to copy to dest
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include "main.h"
/**
 * _strcat - concatenate strings
 * @dest: destination of string
 * @src: source of string to be append
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int i = 0;

	while (dest[i] != '\0')
	{
		destlen++;
		i++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		srclen++;
		i++;
	}
	i = 0;
	while (i <= srclen)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	return (dest);
}

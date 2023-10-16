#include "main.h"
/**
 * _strcpy - copies string
 * @dest: destination
 * @src:source string
 * Return: pointer to dust
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	for (; *src != '\0'; src++, dest++)
	{
		*dest = *src;
	}
	*dest = '\0';
	return (start);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicate string to the new memory location.
 * @str: string to duplicate.
 * Return: pointer to the duplicated string or NULL if strr is NULL.
 */
char *_strdup(char *str)
{
	int y;
	char *destination;
	int z;

	if (str == NULL)
	{
		return (NULL);
	}
	y = 0;
	while (str[y] != '\0')
	{
		y++;
	}
	destination = malloc((y + 1) * sizeof(char));
	if (destination == NULL)
	{
		return (NULL);
	}
	for (z = 0; str[z] != '\0'; z++)
		destination[z] = str[z];
	destination[y] = str[z];
	destination[y] = '\0';
	{
	return (destination);
	}
}

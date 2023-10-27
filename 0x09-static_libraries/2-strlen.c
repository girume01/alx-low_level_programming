#include "main.h"
/**
 * _strlen - finds lenth of string
 * @s: input string
 * Return:length of string
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

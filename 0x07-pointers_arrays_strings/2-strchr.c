#include "main.h"
/**
 * _strchr - locates the first occurence of a character
 * @s: string to search
 * @c: character
 * Return: zero
 */
char *_strchr(char *s, char c)
{
	int y;

	y = 0;
	for (y = 0; s[y] != '\0'; y++)
	{
		if (s[y] == c)
			return (&s[y]);
	}
	return (0);
}

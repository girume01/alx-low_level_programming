#include "main.h"
/**
 * _strchr - locates the first occurence of a character
 * @s: string to search
 * @c: character
 * Return: zero
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}

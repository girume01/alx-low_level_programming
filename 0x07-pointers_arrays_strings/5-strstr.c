#include "main.h"
/**
 * _strstr - locates the first occurence
 * @haystack: string to search
 * @needle: substring to find
 * Return: zero
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *y = haystack;
		char *z = needle;

		while (*y == *z && *z != '\0')
		{
			y++;
			z++;
		}
		if (*z == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}

#include "main.h"
/**
 * cap_string - capitalize the first letter
 * @str: string to be capitalized
 * Return: a pointer resulting string
 */
char *cap_string(char *str)
{
	int z = 0;
	int y = 0;
	char sign[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\t', '\n'};

	while (str[y] != '\0')
	{
		if (y == 0 && str[y] >= 'a' && str[y] <= 'z')
		{
			str[y] = str[y] - 32;
		}
	z = 0;
	while (sign[z] != '\0')
	{
		if (sign[z] == str[y] && (str[y + 1] >= 'a' && str[y + 1] <= 'z'))
		{
			str[y + 1] = str[y + 1] - 32;
		}
		z++;
	}
	y++;
	}
	return (str);
}


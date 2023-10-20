#include "main.h"
/**
 * cap_string - capitalize the first letter
 * @str: string to be capitalized
 * Return: a pointer resulting string
 */
char *cap_string(char *str)
{
	int y;

	y = 0;
	while (str[y])
	{
		while (!(str[y] >= 'a' && str[y] <= 'z'))
			y++;
		if (str[y - 1] == ' ' || str[y - 1] == '\t' ||
				str[y - 1] == '\n' || str[y - 1] == ',' ||
				str[y - 1] == ';' || str[y - 1] == '.' ||
				str[y - 1] == '!' || str[y - 1] == '?' ||
				str[y - 1] == '"' || str[y - 1] == '(' ||
				str[y - 1] == ')' || str[y - 1] == '{' ||
				str[y - 1] == '}' || y == 0)
		{
			str[y] -= 32;
		}
		y++;
	}
	return (str);
}


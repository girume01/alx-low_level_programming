#include "main.h"
/**
 * rot13 - encode string
 * @str: input string
 * Return: str
 */
char *rot13(char *str)
{
	int y = 0, z;

	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[y] != '\0')
	{
		z = 0;
		while (c[z] != '\0')
		{
			if (str[y] == c[z])
			{
				str[y] = d[z];
				break;
			}
			z++;
		}
		y++;
	}
	return (str);
}

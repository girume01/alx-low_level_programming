#include "main.h"
/**
 * leet - encodes string to leet
 * @str: string to be encoded
 * Return: return by string
 */
char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	while (str[i] != '\0')
	{
		j = 0;
		while (c[j] != '\0')
		{
			if (str[i] == c[j])
			{
				str[i] = d[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}

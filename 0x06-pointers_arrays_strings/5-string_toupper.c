#include "main.h"
/**
 * string_toupper - convert strings to uppercase
 * @n: string to be converted
 * Return: a pointer to the result of string
 */
char *string_toupper(char *n)
{
	int i = 0;

	do {
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}
		i++;
	} while (n[i] != '\0');
	return (n);
}

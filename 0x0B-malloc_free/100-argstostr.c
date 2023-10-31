#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenate command line arguments into a single string.
 * @ac: number of arguments.
 * @av: array of argument string.
 * Return: pointer to the concatenated or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int yz = 0, n = 0, raw = 0;
	int l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (yz < ac)
	{
		while (av[yz][n])
		{
			l++;
			n++;
		}
		l++;
		n = 0;
		yz++;
	}
	str = malloc(sizeof(char) * (l + 1));
	if (str == NULL)
		return (NULL);
	yz = 0;
	while (yz < ac)
	{
		while (av[yz][n])
		{
			str[raw] = av[yz][n];
			raw++;
			n++;
		}
		str[raw] = ' ';
		raw++;
		n = 0;
		yz++;
	}
	str[raw] = '\0';
	return (str);
}

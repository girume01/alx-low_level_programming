#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenate the two strings.
 * @s1: the first string.
 * @s2: pointer to the concatenated string or NULL on failure.
 * Return: pointer to the concatenated string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int xy = 0;
	int xz = 0;
	int tall = 0;
	char *helloworld;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[xy] != '\0')
	{
		xy++;
		tall++;
	}
	while (s2[xz] != '\0')
	{
		xz++;
		tall++;
	}
	helloworld = (char *)malloc(sizeof(char) * (tall + 1));
	if (helloworld == NULL)
		return (NULL);
	xy = 0;
	xz = 0;
	while (s1[xy] != '\0')
	{
		helloworld[xy] = s1[xy];
		xy++;
	}
	while (s2[xz] != '\0')
	{
		helloworld[xy] = s2[xz];
		xy++;
		xz++;
	}
	helloworld[xy] = '\0';
	return (helloworld);
}

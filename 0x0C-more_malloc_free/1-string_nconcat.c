#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - this conactenates two strings using n bytes.
 * @s1: first string.
 * @s2: second string.
 * @n: max number of bytes.
 * Return: pointer to the newly allocated concatenated string or NULL
 * if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;

	arr = malloc(strlen(s1) + n + 1);
	if (arr == NULL)
	{
		return (NULL);
	}
	strncpy(arr, s1, strlen(s1));
	strncat(arr, s2, n);
	{
	return (arr);
	}
}

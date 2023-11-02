#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *resut = malloc(strlen(s1) + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	strncpy(result, s1, strlen(s1));
	strncat(result, s2, n);
	return (result);
}

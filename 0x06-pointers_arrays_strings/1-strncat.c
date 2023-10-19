#include "main.h"
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int z = 0;

	while (z < n && *src != '\0')
	{
		dest[len + z] = *src;
		src++;
		z++;
	}
	dest[len + z] = '\0';
	return (dest);
}

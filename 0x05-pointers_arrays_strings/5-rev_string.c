#include "main.h"
/**
 * rev_string - reverse string in place
 *
 * @s: the input string
 */
void rev_string(char *s)
{
	int i, count;
	char j;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = 0; i < count / 2; i++)
	{
		j = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = j;
	}
}

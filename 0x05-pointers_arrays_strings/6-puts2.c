#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of the string
 *
 * @str: the input string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
	}
	putchar('\n');
}


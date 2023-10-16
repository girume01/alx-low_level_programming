#include "main.h"
#include <stdio.h>
/**
 * puts_half - print second half of string
 *
 * @str: input string
 */
void puts_half(char *str)
{
	int length = 0;
	int i;
	int index;

	while (str[length] != '\0')
	{
		length++;
	}
	index = (length - 1) / 2;
	for (i = index + 1; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

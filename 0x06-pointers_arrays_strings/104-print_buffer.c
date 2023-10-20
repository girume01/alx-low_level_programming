#include "main.h"
#include <stdio.h>
/**
 * print_buffer - this print buffer
 * @b: buffer
 * @size: size
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int o = 0;

	int z, y, c;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		z = (size - o < 10) ? size - o : 10;
		printf("%08x: ", o);
		for (y = 0; y < 10; y++)
		{
			if (y < z)
				printf("%02x", b[o + y]);
			else
				printf(" ");
			if (y % 2)
				printf(" ");
		}
		for (y = 0; y < z; y++)
		{
			c = b[o + y];
			if (c < 32 || c > 126)
				c = '.';
			printf("%c", c);
		}
		printf("\n");
		o += 10;
	}
}

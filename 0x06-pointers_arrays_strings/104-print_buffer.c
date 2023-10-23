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
	int off = 0, odd, even, y, c;

	if (size <= 0)
	{
		printf("\n");
}
while (off < size)
{
	odd = size - off;
	even = (odd < 10) ? odd : 10;

	printf("%08x: ", off);

	for (y = 0; y < 10; y++)
	{
		if (y < even)
		{
			printf("%02x", b[off + y]);
		}
		else
			printf("  ");
		if (y % 2)
		{
			printf(" ");
		}
	}
	for (y = 0; y < even; y++)
	{
		c = b[off + y];
		if (c < 32 || c > 126)
		{
			c = '.';
		}
		printf("%c", c);
	}
	printf("\n");
	off += 10;
}
}

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
	int y, z;

	for (y = 0; y < size; y += 10)
	{
		printf("%08x: ", y);
		for (z = 0; z < 10; z++)
		{
			if (y + z < size)
				printf("%02x%s", b[y + z], (z % 2 == 1) ? " " : "");
			else
				printf(" ");
		}
		for (z = 0; z < 10; z++)
		{
			if (y + z < size)
				printf("%c", (b[y + z] >= 32 && b[y + z] <= 126) ? b[y + z] : '.');
		}
		printf("\n");
	}
}

#include <stdio.h>
#include <unistd.h>
/**
 * main - function
 * description char below 10
 * Return: always 0
 */

int main(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
	putchar(j + '0');
	}
	putchar('\n');
	return (0);
}

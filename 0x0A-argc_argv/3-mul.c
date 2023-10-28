#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two integers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0(success) 1(Error).
 */
int main(int argc, char *argv[])
{
	int y, z, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	y = atoi(argv[1]);
	z = atoi(argv[2]);
	result = y * z;
	printf("%d\n", result);
	return (0);
}

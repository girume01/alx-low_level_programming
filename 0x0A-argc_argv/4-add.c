#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of program.
 * @argc: number of command line argument.
 * @argv: array of command line argument string
 * Return: 0(on success)
 */
int main(int argc, char *argv[])
{
	int y = 0;
	int i = 1;
	int z;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		z = atoi(argv[i]);
		if (z >= 0)
		{
			y += z;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	} while (i < argc);
	printf("%d\n", y);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point of program.
 * @argc: number of command line argument.
 * @argv: array of command line argument string
 * Return: 0(on success).
 */
int main(int argc, char *argv[])
{
	int y = 0;
	int z = 1;
	int j;
	int number;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	do {
		j = 0;
		while (argv[z][j] != '\0')
		{
			if (!isdigit(argv[z][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		number = atoi(argv[z]);
		y += number;
		z++;
	} while (z < argc);
	printf("%d\n", y);
	return (0);
}

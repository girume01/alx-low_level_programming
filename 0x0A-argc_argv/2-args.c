#include <stdio.h>
/**
 * main - entry point of program.
 * @argc: number of arguments passed to the program.
 * @argv: array of strings containing the arguments..
 * Return: always 0(success).
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

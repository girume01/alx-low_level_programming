#include <stdio.h>
/**
 * main - entry point of program.
 *
 * @argc: the number of command line argument.
 * @argv: an array of command line argument string.
 * Return: 0 on success.
 *
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

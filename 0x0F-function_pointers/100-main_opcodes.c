#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * main - entry of the program.
 * @anum: number of arguments.
 * @achar: array of arguments.
 * Return: 0.
 */
int main(int anum, char *achar[])
{
	int ab;
	int xy;
	char *func1;

	if (anum != 2)
	{
		printf("Error\n");
		exit(1);
	}
	ab = atoi(achar[1]);
	if (ab < 0)
	{
		printf("Error\n");
		exit(2);
	}
	func1 = (char *)main;
	for (xy = 0; xy < ab; xy++)
	{
		if (xy == ab - 1)
		{
			printf("%02hhx\n", func1[xy]);
			break;
		}
		printf("%02hhx ", func1[xy]);
	}
	return (0);
}

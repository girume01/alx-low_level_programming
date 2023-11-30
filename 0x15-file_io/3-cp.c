#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * errf - checks if the file can be opened.
 * @ff: file from.
 * @ft: file to.
 * @argv: argument vector.
 * Return: nothing will return.
 */
void errf(int ff, int ft, char *argv[])
{
	if (ff == -1)
	{
		dprintf(STDERR_FILENO, "Error %s\n", argv[1]);
		{
			exit(98);
		}
	}
	if (ft == -1)
	{
		dprintf(STDERR_FILENO, "Error %s\n", argv[2]);
		{
			exit(99);
		}
	}
}
/**
 * main - entry of program.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int errc;
	int ff, ft;
	ssize_t newchars;
	ssize_t newr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage ");
		{
			exit(97);
		}
	}
	ff = open(argv[1], O_RDONLY);
	ft = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	errf(ff, ft, argv);

	newchars = 1024;
	while (newchars == 1024)
	{
		newchars = read(ff, buff, 1024);
		if (newchars == -1)
			errf(-1, 0, argv);
		newr = write(ft, buff, newchars);
		if (newr == -1)
			errf(0, -1, argv);
	}

	errc = close(ff);
	if (errc == -1)
	{
		dprintf(STDERR_FILENO, "Error %d\n", ff);
		{
			exit(100);
		}
	}

	errc = close(ft);
	if (errc == -1)
	{
		dprintf(STDERR_FILENO, "Error %d\n", ff);
		{
			exit(100);
		}
	}
	return (0);
}

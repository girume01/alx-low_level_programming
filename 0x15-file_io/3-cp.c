#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * errorf - checks if the file can be opened.
 * @ff: file from.
 * @ft: file to.
 * @argv: argument vector.
 * Return: nothing will return.
 */
void errorf(int ff, int ft, char *argv[])
{
	if (ff == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	if  (ft == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - entry of program.
 * @argc: number of argument.
 * @argv: argument vector.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int ff, ft, errc;
	ssize_t n, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ff = open(argv[1], O_RDONLY);
	ft = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	errorf(ff, ft, argv);

	while ((n = read(ff, buf, 1024)) == 1024)
	{
		if (n == -1)
			errorf(-1, 0, argv);
		if ((nwr = write(ft, buf, n)) == -1)
			errorf(0, -1, argv);
	}
	if ((errc = close(ff)) == -1 || (errc = close(ft)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", errc);
		exit(100);
	}
	return (0);
}

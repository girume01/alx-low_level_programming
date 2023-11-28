#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - function to read text file.
 * @filename: name of the file.
 * @letters: initialization for the letters.
 * Return: if filename is NULL return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	size_t new;
	size_t n;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
	{
		return (0);
	}
	n = read(fd, buffer, letters);
	new = write(STDOUT_FILENO, buffer, n);

	close(fd);
	free(buffer);
	{
		return (new);
	}
}

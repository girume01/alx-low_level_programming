#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - function to read text file.
 * @filename: name of the file.
 * @letters: initialization for the letters.
 * Return: if filename is NULL return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	size_t x;
	size_t y;

	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	y = fread(buffer, 1, letters, file);
	if (y == 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	buffer[y] = '\0';
	x = fwrite(buffer, 1, y, stdout);
	if (x != y)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	free(buffer);
	fclose(file);
	return (y);
}


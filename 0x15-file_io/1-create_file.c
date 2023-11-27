#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: name of the file to create.
 * @text_content: NULL terminated string.
 * Return: if not success -1, if success 1.
 */
int create_file(const char *filename, char *text_content)
{
	int f1;
	size_t text1;
	ssize_t x;

	if (filename == NULL)
	{
		return (-1);
	}
	f1 = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f1 == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		text1 = strlen(text_content);
		x = write(f1, text_content, text1);
		if (x == -1)
		{
			close(f1);
			return (-1);
		}
	}
	close(f1);
	return (1);
}

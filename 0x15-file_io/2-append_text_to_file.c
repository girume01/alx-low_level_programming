#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * append_text_to_file - append text to the end of file.
 * @filename: name of the file.
 * @text_content: NULL terminated string.
 * Return: 1 if success, -1 if not success.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x;
	ssize_t byt;

	if (!filename || !text_content)
	{
		return (-1);
	}
	x = open(filename, O_WRONLY | O_APPEND);
	if (x == -1)
	{
		return (-1);
	}
	byt = write(x, text_content, strlen(text_content));
	close(x);
	return (byt == -1);
}

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
	int fil, let, r;

	if (!filename)
	{
		return (-1);
	}
	fil = open(filename, O_WRONLY | O_APPEND);
	if (fil == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (let = 0; text_content[let]; let++)
			r = write(fil, text_content, let);
		if (r == -1)
		{
			return (-1);
		}
	}
	close(fil);
	{
		return (1);
	}
}

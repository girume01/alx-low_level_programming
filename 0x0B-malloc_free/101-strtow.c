#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - characgter.
 * @str: string
 * Return: with 0
 */
char **strtow(char *str)
{
	int word;
	int y;
	char **words;
	char *token;
	char **temp;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	word = 0;
	**words = NULL;

	for (token = strtok(str, " "); token; token = strtok(NULL, " "))
	{
		word++;
		temp = (char **)realloc(words, (word + 1) * sizeof(char *));
		if (temp == NULL)
		{
			for (y = 0; y < word - 1; y++)
			{
				free(words[y]);
			}
			free(words);
			return (NULL);
		}
		words = temp;
		words[word - 1] = strdup(token);
	}
	words[word] = NULL;
	return (words);
}

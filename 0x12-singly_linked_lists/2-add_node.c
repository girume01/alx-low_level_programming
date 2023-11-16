#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beggining.
 * @head: pointer to pointer.
 * @str: string to be duplicated and added to new node.
 * Return: address of new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *yy;

	if (str == NULL)
	{
		return (NULL);
	}
	yy = malloc(sizeof(list_t));
	if (yy == NULL)
	{
		return (NULL);
	}
	yy->str = strdup(str);
	if (yy->str == NULL)
	{
		free(yy);
		return (NULL);
	}
	yy->len = strlen(str);
	yy->next = *head;
	*head = yy;
	{
		return (yy);
	}
}

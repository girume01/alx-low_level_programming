#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the beggining.
 * @head: poinetr to pointer.
 * @str: string to be duplicated and added.
 * Return: address of new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *xy;

	if (str == NULL)
	{
		return (NULL);
	}
	xy = malloc(sizeof(list_t));
	if (xy == NULL)
	{
		return (NULL);
	}
	xy->str = strdup(str);
	if (xy->str == NULL)
	{
		free(xy);
		return (NULL);
	}
	xy->len = strlen(str);
	xy->next = *head;
	*head = xy;
	{
		return (xy);
	}
}

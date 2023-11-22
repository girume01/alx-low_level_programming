#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node of listint_t.
 * @head: pointer to the head of linked list.
 * @index: index of the node.
 * Return: the pointer to the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *xy;

	xy = head;
	while (xy != NULL && index > 0)
	{
		xy = xy->next;
		index--;
	}
	if (index == 0)
	{
		return (xy);
	}
	else
	{
		return (NULL);
	}
}

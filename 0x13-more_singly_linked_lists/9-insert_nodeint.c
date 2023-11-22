#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node.
 * @head: pointer to a pointer to start of list.
 * @idx: index of the list.
 * @n: value to be added to new node.
 * Return: address of new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *x;
	listint_t *y = *head;

	i = 0;
	x = malloc(sizeof(listint_t));
	if (x == NULL)
	{
		return (NULL);
	}

	x->n = n;
	if (idx == 0)
	{
		x->next = *head;
		*head = x;
		return (x);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (y == NULL)
		{
			free(x);
			return (NULL);
		}
		y = y->next;
	}
	x->next = y->next;
	y->next = x;
	{
	return (x);
	}
}

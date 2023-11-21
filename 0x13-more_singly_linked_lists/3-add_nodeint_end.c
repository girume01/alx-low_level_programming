#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end.
 * @head: pointer to the pointer.
 * @n: integer to be added to new node
 * Return: pointer to the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *y;
	listint_t *x;

	y = malloc(sizeof(listint_t));
	if (y == NULL)
	{
		return (NULL);
	}
	y->n = n;
	y->next = NULL;
	if (*head == NULL)
	{
		*head = y;
	}
	else
	{
		x = *head;
		while (x->next != NULL)
		{
			x = x->next;
		}
		x->next = y;
	}
	return (y);
}

#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint_end - ads a new node at the end
 * @head: struct
 * @n: const int
 *
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node1 = malloc(sizeof(dlistint_t));

	if (node1 == NULL)
		return (NULL);

	node1->n = n;
	node1->prev = NULL;
	node1->next = NULL;

	if (*head == NULL)
	{
		*head = node1;
	}
	else
	{
		dlistint_t *end = *head;

		while (end->next != NULL)
		{
			end = end->next;
		}

		node1->prev = end;
		end->next = node1;
	}
	return (node1);
}

#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at nth index
 * @head: head of node
 * @index: index
 * Return: 1 succeec, -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count;
	dlistint_t *next_node = current->next;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;

		free(current);
		return (1);
	}

	for (count = 0; current != NULL && count < index - 1; count++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);

	if (next_node->next != NULL)
	{
		current->next = next_node->next;
		free(next_node->prev);
		current->next->prev = current;
	}
	else
	{
		free(next_node);
		current->next = NULL;
	}
	return (1);
}

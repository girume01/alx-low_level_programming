#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function to delete nodeint.
 * @head: a pointer
 * @index: index value.
 * Return: 1 if successful -1 if not successful.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int xy;
	listint_t *temp;
	listint_t *i;

	if (*head == NULL || index == 0)
	{
		temp = *head;
		*head = (*head) ? (*head)->next : NULL;
		free(temp);
		return (*head != NULL);
	}
	i = *head;
	for (xy = 0; xy < index - 1 && i && i->next; ++xy)
	{
		i = i->next;
	}
	if (!i || !i->next)
	{
		return (-1);
	}
	temp = i->next;
	i->next = temp->next;
	free(temp);
	return (1);
}

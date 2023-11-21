#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * pop_listint - delete the head node of listint_t.
 * @head: pointer to head of linked list.
 * Return: the data n.
 */
int pop_listint(listint_t **head)
{
	listint_t *y = *head;
	int x = y->n;

	*head = (*head)->next;

	if (*head == NULL)
	{
		return (0);
	}
	free(y);
	return (x);
}

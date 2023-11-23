#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * reverse_listint - a function for reversing.
 * @head: pointer to pointer.
 * Return: a pointer.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *j;
	listint_t *x;
	listint_t *y;

	j = NULL;
	x = *head;
	y = x->next;

	while (x)
	{
		y = x->next;
		x->next = j;
		j = x;
		x = y;
	}
	*head = j;
	return (*head);
}

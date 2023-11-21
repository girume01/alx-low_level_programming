#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_listint2 - frees listint list.
 * @head: pointer to the pointer of the head.
 */
void free_listint2(listint_t **head)
{
	listint_t *x;
	listint_t *y;

	if (!head || !*head)
		return;
	x = *head;
	while (x)
	{
		y = x->next;
		free(x);
		x = y;
	}
	*head = NULL;
}

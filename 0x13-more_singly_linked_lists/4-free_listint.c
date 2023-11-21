#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_listint - free a listint_t list.
 * @head: pointer to the head.
 */
void free_listint(listint_t *head)
{
	listint_t *x;
	listint_t *y;

	while (x != NULL)
	{
		x = head;
		y = x->next;
		free(x);
		x = y;
	}
}

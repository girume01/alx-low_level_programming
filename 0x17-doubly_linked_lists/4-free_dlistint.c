#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - free list
 * @head: struct
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		dlistint_t *temp = head;

		head = head->next;
		free(temp);
	}
}

#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - nth node
 * @head: pointer to head node
 * @index: int
 *
 * Return: dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head != NULL && index > 0)
	{
		head = head->next;
		index--;
	}
	return (head);
}

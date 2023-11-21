#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_listint - prints a list.
 * @h: pointer to the head of the list.
 * Return: node
 */
size_t print_listint(const listint_t *h)
{
	size_t xy;

	xy = 0;
	while (h != NULL)
	{
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		xy++;
	}
	return (xy);
}

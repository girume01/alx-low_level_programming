#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - return number of elements in linked list
 * @h: pointer to the list.
 *
 * Return: number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t xy;

	xy = 0;
	while (h)
	{
		xy++;
		h = h->next;
	}
	return (xy);
}

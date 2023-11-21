#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * listint_len - return number of element.
 * @h: pointer to the head of list.
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t xy;
	
	xy = 0;
	while (h != NULL)
	{
		h = h->next;
		xy++;
	}
	return (xy);
}

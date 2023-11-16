#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_list - print all the elements of linked list.
 * @h: pointer to the list_t to print.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *yy = h;
	size_t xy = 0;

	while (yy != NULL)
	{
		if (yy->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", yy->len, yy->str);

		xy++;
		yy = yy->next;
	}
	return (xy);
}

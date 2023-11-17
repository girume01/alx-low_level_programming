#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - function for free list.
 * @head: pointer.
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *xyz;

		xyz = head;
		head = head->next;
		free(xyz->str);
		free(xyz);
	}
}

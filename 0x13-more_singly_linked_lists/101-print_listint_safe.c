#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_listint_safe - print a listint_t.
 * @head: pointer to the head of linked list.
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *x;
	size_t node;
	const listint_t *vi[10000];
	size_t i;

	x = head;
	node = 0;

	while (x != NULL)
	{
		for (i = 0; i < node; ++i)
		{
			if (x == vi[i])
			{
				printf("[%p] %d\n", (void *)x, x->n);
				printf("-> [%p] %d\n", (void *)x->next, x->next->n);
				fprintf(stderr, "Linked list has a loop\n");
				exit(98);
			}
		}
		printf("[%p] %d\n", (void *)x, x->n);
		vi[node++] = x;
		x = x->next;
	}
	return (node);
}

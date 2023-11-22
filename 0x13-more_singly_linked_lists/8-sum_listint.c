#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of all the data.
 * @head: pointer to start of the list.
 * Return: sum of all data.
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *xy;

	sum = 0;
	xy = head;
	while (xy != NULL)
	{
		sum += xy->n;
		xy = xy->next;
	}
	return (sum);
}

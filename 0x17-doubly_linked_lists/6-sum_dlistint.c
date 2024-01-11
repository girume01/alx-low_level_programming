#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - sum of all the data of dlistint_t list
 * @head: pointer to the beginning of the list
 *
 * Return: sum of all data, 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head != NULL; head = head->next)
	{
		sum += head->n;
	}
	return (sum);
}

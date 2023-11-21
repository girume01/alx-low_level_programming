#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint - add a new node at the beggining.
 * @head: pointer to the head of the list.
 * @n: value to be assigned.
 * Return: address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));
	if (x == NULL)
	{
		return (NULL);
	}
	x->n = n;
	x->next = *head;
	*head = x;
	{
		return (x);
	}
}

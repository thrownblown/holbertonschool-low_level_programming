#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_dnodeint_end - adds a new node at the end of a list_t list.
 * @head: start of list
 * @n: value to set in new node
 *
 * Return: ptr to new head
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	h = *head;
	while (h->next)
		h = h->next;
	h->next = new;
	new->prev = h;
	return (*head);
}

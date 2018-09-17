#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_dnodeint_at_index - node getter
 * @h: start of list
 * @index: position of node to be gotten
 *
 * Return: list node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *h, unsigned int index)
{
	size_t count;

	for (count = 0; h->next != 0 && count < index; count++)
		h = h->next;
	return (h);
}

/**
 * insert_dnodeint_at_index - adds a new node at the end of a list_t list.
 * @h: start of list
 * @idx: position of insertion
 * @n: value to set in new node
 *
 * Return: ptr to new head
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *head;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*h == NULL)
	{
		*h = new;
		return (*h);
	}
	head = get_dnodeint_at_index(*h, idx - 1);
	if (!head)
		return (NULL);
	new->next = head->next;
	new->prev = head;
	head->next = new;
	return (new);
}

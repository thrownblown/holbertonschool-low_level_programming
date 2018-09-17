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

	for (count = 0; h != 0 && count < index; count++)
		h = h->next;
	return (h);
}

/**
 * add_dnodeint - adds a new node at the beginning of a list_t list.
 * @head: start of list
 * @n: int to add
 *
 * Return: ptr to new head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
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
		return (add_dnodeint(head, n));

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
	head = get_dnodeint_at_index(*head, idx - 1);
	if (!head)
		return (NULL);
	new->next = head->next;
	nev->prev = head;
	head->next = new;
	return (new);
}

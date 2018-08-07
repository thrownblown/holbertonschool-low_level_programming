#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_nodeint_end - adds a new node at the end of a list_t list.
 * @head: start of list
 * @n: value to set in new node
 *
 * Return: ptr to new head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *h;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	h = *head;
	while (h->next)
		h = h->next;
	h->next = new;
	return (*head);
}

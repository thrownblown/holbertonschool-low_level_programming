#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_nodeint_at_index - node getter
 * @h: start of list
 * @index: position of node to be gotten
 *
 * Return: list node
 */

listint_t *get_nodeint_at_index(listint_t *h, unsigned int index)
{
	size_t count;

	for (count = 0; h != 0 && count < index; count++)
		h = h->next;
	return (h);
}

/**
 * add_nodeint - adds a new node at the beginning of a list_t list.
 * @head: start of list
 * @n: int to add
 *
 * Return: ptr to new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

/**
 * insert_nodeint_at_index - adds a new node at the end of a list_t list.
 * @head: start of list
 * @idx: position of insertion
 * @n: value to set in new node
 *
 * Return: ptr to new head
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *h;

	if (!head)
		return (NULL);
	if (idx == 0)
		return (add_nodeint(head, n));

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
	h = get_nodeint_at_index(*head, idx - 1);
	if (!h)
		return (NULL);
	new->next = h->next;
	h->next = new;
	return (new);
}

#include "lists.h"
/**
 * delete_dnodeint_at_index - removes a node at index
 * @head: dbl ptr to ead
 * @index: position to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h = NULL;
	size_t i;

	if (!head || !*head)
		return (-1);
	for (i = 0, h = *head; i < index && h; i++, h = h->next)
		;
	if (!h)
		return (-1);
	if (h == *head)
		*head = h->next;
	if (h->prev)
		h->prev->next = h->next;
	if (h->next)
		h->next->prev = h->prev;
	free(h);
	return (1);
}

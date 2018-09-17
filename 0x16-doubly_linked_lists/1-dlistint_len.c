#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len - the number of elements in a linked list_t list.
 * @h: start of list
 *
 * Return: length of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != 0; i++)
		h = h->next;
	return (i);
}

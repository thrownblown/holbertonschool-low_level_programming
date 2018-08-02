#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - the number of elements in a linked list_t list.
 * @h: start of list
 *
 * Return: length of list
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != 0; i++)
		h = h->next;
	return (i);
}

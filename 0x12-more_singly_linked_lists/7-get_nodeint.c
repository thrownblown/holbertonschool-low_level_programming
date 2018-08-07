#include "lists.h"
#include <stdlib.h>

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

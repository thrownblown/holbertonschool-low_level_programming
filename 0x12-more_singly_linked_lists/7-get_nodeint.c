#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - prints all the elements of a list_t list.
 * @h: start of list
 *
 * Return: length of list
 */

listint_t *get_nodeint_at_index(listint_t *h, unsigned int index)
{
	size_t count;

	for (count = 0; h != 0 && count < index; count++)
		h = h->next;
	return (h);
}

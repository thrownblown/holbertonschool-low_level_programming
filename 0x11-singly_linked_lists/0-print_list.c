#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h: start of list
 *
 * Return: length of list
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		if (h->str && h->len)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
	}
	return (i);
}

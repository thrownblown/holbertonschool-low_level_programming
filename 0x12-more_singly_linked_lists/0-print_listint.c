#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list_t list.
 * @h: start of list
 *
 * Return: length of list
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0; h != 0; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}

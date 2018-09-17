#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a list_t list.
 * @h: start of list
 *
 * Return: length of list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != 0; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}

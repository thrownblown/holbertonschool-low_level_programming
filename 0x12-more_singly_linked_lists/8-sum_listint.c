#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sums all the elements of a list_t list.
 * @h: start of list
 *
 * Return: sum of vals stored in list nodes
 */

int sum_listint(listint_t *h)
{
	size_t count;
	int sum = 0;

	for (count = 0; h != 0; count++)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}

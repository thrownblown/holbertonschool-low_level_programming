#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - clears a linked list from mem
* @head: ptr to head of linked list
*
* Return: nope void
*/

int pop_listint(listint_t **head)
{
	listint_t *h;
	int n;

	if (head == NULL)
		return (0);

	h = *head;
	n = h->n;
	*head = h->next;
	free(h);
	return (n);
}

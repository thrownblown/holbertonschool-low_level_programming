#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - clears a linked list from mem
* @head: ptr to head of linked list
*
* Return: nope void
*/

void free_listint2(listint_t **head)
{
	listint_t *new, *h;

	h = *head;

	while (h)
	{
		new = h->next;
		free(h);
		h = new;
	}
	*head = NULL;
}

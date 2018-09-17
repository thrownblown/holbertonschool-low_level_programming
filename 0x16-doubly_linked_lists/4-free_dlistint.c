#include "lists.h"
#include <stdlib.h>

/**
* free_dlistint - clears a linked list from mem
* @head: ptr to head of linked list
*
* Return: nope void
*/

void free_dlistint(dlistint_t *head)
{
	listint_t *new;

	while (head)
	{
		new = head;
		head = head->next;
		free(new);
	}
}

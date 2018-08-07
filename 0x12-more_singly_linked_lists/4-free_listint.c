#include "lists.h"
#include <stdlib.h>

/**
* free_listint - clears a linked list from mem
* @head: ptr to head of linked list
*
* Return: nope void
*/

void free_listint(listint_t *head)
{
	listint_t *new;

	while (head)
	{
		new = head;
		head = head->next;
		free(new);
	}
}

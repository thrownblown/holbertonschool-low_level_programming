#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - clears a linked list from mem
* @head: ptr to head of linked list
*
* Return: nope void
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *new, *h = NULL;

	while (*head)
	{
		new = (*head)->next;
		(*head)->next = h;
		h = *head;
		*head = new;
	}
	*head = h;

	return (*head);
}

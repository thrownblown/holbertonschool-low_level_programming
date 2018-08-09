#include "lists.h"
#include <stdlib.h>

/**
* reverse_listint - reveses the order of a linked list
* @head: ptr to head of linked list
*
* Return: ptr to new first node
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

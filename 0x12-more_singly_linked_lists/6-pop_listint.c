#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - removes a head from a linked list and returns stored int val
* @head: ptr to head of linked list
*
* Return: value stored in popped head node
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

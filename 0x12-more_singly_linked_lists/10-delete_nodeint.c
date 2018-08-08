#include"lists.h"
#include <stdlib.h>

/**
 *delete_nodeint_at_index- unlinks and frees a target node
 *@head: start of linked list
 *@index: position of target node
 *Return: -1 if err, else 1
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t i;
	listint_t *new;
	listint_t *next;

	if (*head == NULL)
		return (-1);

	new = *head;

	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}

	for (i = 0 ; i < index - 1 ; i++)
	{
		if (new->next == NULL)
			return (-1);
		new = new->next;
	}

	next = new->next;
	next = next->next;

	free(new->next);
	new->next = next;

	return (1);
}

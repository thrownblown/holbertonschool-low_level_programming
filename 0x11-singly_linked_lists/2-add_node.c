#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: start of list
 * @str: to add
 *
 * Return: ptr to new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	while (str[i])
		i++;
	new->len = i;
	new->next = *head;
	*head = new;

	return (new);
}

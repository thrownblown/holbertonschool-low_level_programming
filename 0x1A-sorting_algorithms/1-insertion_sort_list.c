#include "sort.h"
/**
 * insertion_sort_list - Runs a bubble sort on an array
 * @list: pointer to the head of a dbl linked list
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *next, *tmp2, *tmp;

	if (!list || !*list || !(*list)->next)
		return;
	tmp = *list;
	while (tmp)
	{
		next = tmp->next;
		if (next && tmp->n > tmp->next->n)
		{
			if (tmp->prev)
				tmp->prev->next = next;
			else
				*list = next;
			tmp->next = next->next;
			if (next->next)
				next->next->prev = tmp;
			next->next = tmp;
			next->prev = tmp->prev;
			tmp->prev = next;
			print_list(*list);
		}
		while (tmp->prev && tmp->n < tmp->prev->n)
		{
			tmp2 = tmp->prev;
			tmp2->next = tmp->next;
			if (tmp2->next)
				tmp2->next->prev = tmp2;
			tmp->prev = tmp->prev->prev;
			tmp2->prev = tmp;
			if (tmp->prev)
				tmp->prev->next = tmp;
			else
				*list = tmp;
			tmp->next = tmp2;
			print_list(*list);
		}
		tmp = next;
	}
}

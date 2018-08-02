#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h: start of list
 *
 * Return: length of list
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		if (h->str && h->len)
		{
			printf("[%d] %s\n", h->len, h->str);
			/*
			str = h->str;
			_putchar('[');
			_putchar('0' + h->len);
			_putchar(']');
			_putchar(' ');
			for (j = 0; j < h->len; j++)
			{
				_putchar(str[j]);
			}
			*/
		}
		else
		{
			printf("[0] (nil)\n");
			/*
			_putchar('[');
			_putchar('0');
			_putchar(']');
			_putchar(' ');
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
			*/
		}
		h = h->next;
	}
	return (i);
}

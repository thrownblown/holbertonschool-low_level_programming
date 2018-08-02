#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: start of list
 *
 * Return: length of list
 */

size_t print_list(const list_t *h)
{
	size_t j, i;
	char *str;

	for (i = 0; h; i++)
	{
		if (h->str && h->len)
		{
			str = h->str;
			_putchar('[');
			_putchar('0' + h->len);
			_putchar(']');
			_putchar(' ');
			for (j = 0; j < h->len; j++)
			{
				_putchar(str[j]);
			}
		}
		else
		{
			_putchar('[');
			_putchar('0');
			_putchar(']');
			_putchar(' ');
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
		}
		_putchar('\n');
		h = h->next;
	}
	_putchar('\n');
	return (i);
}

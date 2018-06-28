#include "holberton.h"
/**
 * print_most_numbers - writes 0-9 to the terminal
 *
 * Return: void.
 *
 */
void print_most_numbers(void)
{
	char s;

	for (s = '0'; s <= '9'; s++)
	{
		if (s != '2' && s != '4')
			_putchar(s);
	}
	_putchar('\n');
}

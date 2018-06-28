#include "holberton.h"
/**
 * print_numbers - writes 0-9 to the terminal
 *
 * Return: void.
 *
 */
void print_numbers(void)
{
	char s = '0';

	while (s <= '9')
	{
		_putchar(s);
		s++;
	}
	_putchar('\n');
}

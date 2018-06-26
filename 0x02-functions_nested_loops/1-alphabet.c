#include "holberton.h"
/**
 * print alphabet - writes the lowercase a-z  to the terminal
 *
 * Return: void.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	char s = 'a';

	while (s <= 'z')
	{
		_putchar(s);
		s++;
	}
	_putchar('\n');
}

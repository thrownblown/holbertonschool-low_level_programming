#include "holberton.h"
/**
 * print_alphabet_x10 - writes the lowercase a-z to the terminal 10 times
 *
 * Return: void.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	char s;
	int i = 0;

	while (i++ < 10)
	{
		s = 'a';
		while (s <= 'z')
			_putchar(s++);
		_putchar('\n');
	}
}

#include "holberton.h"
#include "2-strlen.c"
/**
 * print_rev - prints a string to the terminal, backwards!
 * @s: string to print
 *
 * Return: void just prints
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s) - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

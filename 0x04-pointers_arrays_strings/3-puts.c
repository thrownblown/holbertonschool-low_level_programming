#include "holberton.h"
/**
 * _puts - prints a string to the terminal
 * @s: string to print
 *
 * Return: void just prints
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		_putchar(str[i++]);
	_putchar('\n');
}

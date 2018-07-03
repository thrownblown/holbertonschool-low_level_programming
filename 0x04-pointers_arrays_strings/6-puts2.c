#include "holberton.h"
/**
 * puts2 - prints every other char of a string to the terminal
 * @str: string to print
 *
 * Return: void just prints
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

#include "holberton.h"
#include "2-strlen.c"
/**
 * puts_half - prints 2nd half of a string to the terminal
 * @str: string to print
 *
 * Return: void just prints
 */
void puts_half(char *str)
{
	int i;

	i = _strlen(str);
	if (i % 2 != 0)
	{
		i = (i - 1) / 2;
	}

	else
	{
		i = i / 2;
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

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
	int i, len;
	

	len = _strlen(str);
	if (len % 2 != 0)
	{
		i = (len - 1) / 2;
	}
	else
	{
		i = len / 2;
	}

	while (i <= len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

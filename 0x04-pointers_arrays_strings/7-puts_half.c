#include "holberton.h"
/**
 * puts_half - prints 2nd half of a string to the terminal
 * @str: string to print
 *
 * Return: void just prints
 */
void puts_half(char *str)
{
	int i, len;


	len = 0;
	while (str[len] != '\0')
		len++;

	i = (len + 1) / 2;
	while (i < len)
	{
		if (str[i] != '\0')
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

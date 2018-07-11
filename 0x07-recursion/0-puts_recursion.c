#include "holberton.h"

/**
 * _puts_recursion - prints a string to the term followed by nes line
 * @s: string to put
 *
 * Return: void i give you nothing
 */
void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

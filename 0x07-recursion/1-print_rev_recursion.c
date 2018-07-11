#include "holberton.h"

/**
 * _print_rev_recursion - prints a string to the term in reverse
 * @s: string to put
 *
 * Return: void i give you nothing
 */
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}

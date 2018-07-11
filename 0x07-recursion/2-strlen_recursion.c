#include "holberton.h"

/**
 * _strlen_recursion - calculates the len of an str recursivly
 * @s: string to len
 *
 * Return: len of str
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

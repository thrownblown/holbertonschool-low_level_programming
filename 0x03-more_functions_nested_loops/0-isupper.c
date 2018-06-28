#include "holberton.h"
/**
 * _isupper - determines if a character is uppercase
 * @c: The character to evaluate
 *
 * Return: 1 if uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}

#include "holberton.h"
/**
 * _isalpha - determines if a character is an a-z or A-Z
 * @c: The character to evaluate
 *
 * Return: 1 if c is an alphabetical character lower or upper, otherwise 0
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}

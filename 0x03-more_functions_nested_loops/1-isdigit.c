#include "holberton.h"
/**
 * _isdigit - determines if a character is a number
 * @c: The character to evaluate
 *
 * Return: 1 if digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}

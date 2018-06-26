#include "holberton.h"
/**
 * _islower - determines if a character is lowercase
 *
 * Return: 1 if lowercase, otherwise 0
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}

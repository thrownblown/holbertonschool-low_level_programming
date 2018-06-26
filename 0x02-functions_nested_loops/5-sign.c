#include "holberton.h"
/**
 * print_sign - determines if an is posi or neg is 0
 * @n: The number to evaluate
 *
 * Return: 1 if n is greater than 0, 0 if n is 0, or -1 if n is less than 0
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return(-1);
	}
	_putchar('0');
	return (0);
}

#include "holberton.h"
/**
 * print_last_digit - prints and returns the last digit of a supplied val.
 * @n: The number to evaluate.
 *
 * Return: last digit of n
 *
 */
int print_last_digit(int n)
{
	int r;

	r = n  % 10;
	r = _abs(r);
	_putchar('0' + r);
	return (r);
}
/**
 * _abs - computes the absolute value of an integer.
 * @n: The number to evaluate.
 *
 * Return: abs val of n
 *
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (n * -1);
	return (0);
}

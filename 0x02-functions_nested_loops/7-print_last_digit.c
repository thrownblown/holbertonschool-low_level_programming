#include "holberton.h"
#include "6-abs.c"
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

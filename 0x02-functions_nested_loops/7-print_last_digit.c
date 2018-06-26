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

	if (n < 0)
		r = _abs(n);
	else
		r = n;
	r = r  % 10;
	
	_putchar('0' + r);
	return (r);
}

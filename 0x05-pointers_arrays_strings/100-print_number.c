#include "holberton.h"

/**
 * print_number - prints an int
 * @n: int to print
 *
 * Return: void just print
 */

void print_number(int n)
{
	int c, max;

	max = 1000000000;
	if (n < 0)
		_putchar('-');
	c = 0;
	while (max != 1)
	{
		if (c != n / max)
		{
			c = n / max;
			if (c < 0)
			{
				c *= -1;
				n *= -1;
			}
			_putchar('0' + c);
		}
		else
		{
			c = n / max;
		}
		n %= max;
		max /= 10;
	}
	_putchar('0' + n);
}

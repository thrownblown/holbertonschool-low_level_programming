#include "holberton.h"
/**
 * print_square - draws a n x n square of hashtags
 * @n: reps the num of lines and characters to print
 * Return: void.
 *
 */
void print_square(int n)
{
	int r = 0;
	int c;

	while (r++ < n)
	{
		c = 0;
		while (c++ <  n)
			_putchar('#');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}

#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: reps the num of lines to print
 * Return: void.
 *
 */
void print_diagonal(int n)
{
	int i;
	int j = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (j++ < n)
		{
			i = 1;
			while (i++ <  j)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}

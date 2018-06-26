#include "holberton.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the max
 * Return - void
 */
void print_times_table(int n)
{
	int i = 0;
	int j = 0;
	int p;

	if (n < 16 && n > 0)
	{
		while (i <= n)
		{
			while (j <= n)
			{
				p = i * j;
				if (p <= 99 && p > 9)
				{
					_putchar('0' + p / 10);
					_putchar('0' + p % 10);
				}
				else if (p > 9)
				{
					_putchar('0' + p / 100);
					_putchar('0' + (p / 10) % 10);
					_putchar('0' + p % 10);
				}
				else
				{
					_putchar('0' + p);
				}
				if (j == n)
				{
					_putchar('\n');
				}
				else if ((j + 1) * i  > 99)
				{
					_putchar(',');
					_putchar(' ');
				}
				else if ((j + 1) * i  > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				j++;
			}
			i++;
			j = 0;
		}
	}
}

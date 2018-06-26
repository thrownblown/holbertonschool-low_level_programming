#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return - void
 */
void times_table(void)
{
	int i = 0;
	int j = 0;
	int p;

	while (i < 10)
	{
		while (j < 10)
		{
			p = i * j;
			if (p > 9)
			{
				_putchar('0' + p / 10);
				_putchar('0' + p % 10);
			}
			else
			{
				_putchar('0' + p);
			}
			if (j == 9)
			{
				_putchar('$');
				_putchar('\n');
			}
			else if ((j + 1) * i > 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			j++;
		}
		i++;
		j = 0;
	}
}

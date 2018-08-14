#include "holberton.h"
/**
 *print_binary- prints the bin of an int
 *@n: unsigned long int to be bin printed
 *Return: nope just print
 */

void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int i, chr;

	if (n == 0)
		_putchar ('0');

	for (i = 0, tmp = n; tmp > 0; i++)
		tmp = tmp >> 1;

	while (i--)
	{
		chr = n >> i;
		_putchar((chr & 1) + '0');
	}
}

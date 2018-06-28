#include "holberton.h"
/**
 * print_line - print n number of '_' chars
 * @n: reps the num of _ to print
 * Return: void.
 *
 */
void print_line(int n)
{
	while (n-- > 0)
		_putchar('_');
	_putchar('\n');
}

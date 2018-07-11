#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diags of a sq matrix of integers
 * @a: matrix to be summed p
 * @size: how big it be
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int row, col, val;

	row = 0;
	col = 0;
	val = 0;
	for (row = 0; row < size; row++, col++)
	{
		val += *(a + col + row * size);
	}
	printf("%i, ", val);
	val = 0;
	for (; row > 0; --row, --col)
	{
		val += *(a - col + row * size);
	}
	printf("%i\n", val);
}

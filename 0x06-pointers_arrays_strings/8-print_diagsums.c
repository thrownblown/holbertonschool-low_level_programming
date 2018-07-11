#include "holberton.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard.
 * @a: matrix repping the board
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

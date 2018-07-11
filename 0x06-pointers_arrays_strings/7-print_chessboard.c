#include "holberton.h"
/**
 * print_chessboard - prints the chessboard.
 * @a: matrix repping the board
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int col_len, row, col;

	col_len = sizeof(a[0]) / sizeof(a[0][0]);

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < col_len; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}

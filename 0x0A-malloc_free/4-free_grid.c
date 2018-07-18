#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free up our matrix
 * @grid: pointer to matrix seeking freedom
 * @height: number of rows in said matrix
 *
 * Return: nada
 */

void free_grid(int **grid, int height)
{
	while (height--)
		free(grid[height]);
	free(grid);
}

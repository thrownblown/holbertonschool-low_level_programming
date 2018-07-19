#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: int to start range
 * @max: int t0 stop
 *
 * Return: pointer to our array
 */

int *array_range(int min, int max)
{
	int *bigb, i;

	if (min > max)
		return (NULL);

	bigb = malloc((max - min + 1) * sizeof(int));
	if (!bigb)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		bigb[i] = min;

	return (bigb);
}

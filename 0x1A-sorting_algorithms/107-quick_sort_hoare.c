#include "sort.h"

/**
 * partition - recursive helper
 * @array: array to sort
 * @lo: sort start position
 * @hi: sort end position
 * @size: size of the entire array so we can print it
 * Return: position of the pivot point for the array segment
 */
size_t partition(int *array, ssize_t lo, ssize_t hi, size_t size)
{
	ssize_t i, j;
	int tmp, pivot;

	i = lo;
	j = hi;
	pivot = array[lo];

	while (1)
	{
		while (array[i] < pivot)
			i++;

		while (array[j] > pivot)
			j--;

		if (i >= j)
			return (j);

		if (array[i] != array[j])
		{
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			print_array(array, size);
		}
		else if (pivot < array[i])
			return (hi - 1);
		else
			return (lo);
	}
}

/**
 * quicksort - recursive helper
 * @array: array to sort
 * @start: sort start position
 * @end: sort end position
 * @size: size of the entire array so we can print it
 * Return: Nothing just sorts
 */

void quicksort(int *array, ssize_t start, ssize_t end, size_t size)
{
	size_t pivot;

	if (!array)
		return;

	if (start < end)
	{
		pivot = partition(array, start, end, size);
		quicksort(array, start, pivot, size);
		quicksort(array, pivot + 1, end, size);
	}
}

/**
 * quick_sort_hoare - sorts an array of integers in ascending order
 * @array: array argument
 * @size: size of the array
 * Return: Nothing
 */
void quick_sort_hoare(int *array, size_t size)
{
	size_t start = 0;
	size_t end = size - 1;

	if (array && size > 1)
		quicksort(array, start, end, size);
}

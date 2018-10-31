#include "sort.h"

/**
 * partition - recursive helper
 * @array: array to sort
 * @lo: sort start position
 * @hi: sort end position
 * @size: size of the entire array so we can print it
 * Return: position of the pivot point for the array segment
 */
size_t partition(int *array, size_t lo, size_t hi, size_t size)
{
	size_t i, j;
	int tmp, pivot = array[hi];

	i = lo;
	for (j = lo; j < hi; j++)
	{

		if (array[j] < pivot)
		{
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
			i++;
		}
	}
	tmp = array[i];
	array[i] = array[hi];
	array[hi] = tmp;
	print_array(array, size);
	return (i);
}

/**
 * quicksort - recursive helper
 * @array: array to sort
 * @lo: sort start position
 * @hi: sort end position
 * @size: size of the entire array so we can print it
 * Return: Nothing just sorts
 */

void quicksort(int *array, size_t lo, size_t hi, size_t size)
{
	size_t pivot;

	if (lo < hi)
	{
		pivot = partition(array, 0, hi, size);
		if (pivot)
			quicksort(array, lo, pivot - 1, size);
		quicksort(array, pivot + 1, hi, size);
	}

}

/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: array argument
 * @size: size of the array
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	quicksort(array, 0, size - 1, size);
}

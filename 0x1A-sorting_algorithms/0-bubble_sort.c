#include "sort.h"
/**
 * bubble_sort - Runs a bubble sort on an array
 * @array: pointer to an array of ints
 * @size: size of the array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp;
	int swapped = 1;

	if (!array)
		return;

	while (swapped)
	{
		swapped = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				swapped = 1;
				print_array(array, size);
			}
		}
	}
}

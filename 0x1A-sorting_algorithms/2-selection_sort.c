#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: array argument
 * @size: size of the array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k;
	int tmp;

	if (!array && !size)
		return;
	i = 0;
	while (i < size)
	{
		j = i;
		/* Find the min */
		k = i;
		while (j < size)
		{
			if (array[j] < array[k])
				k = j;
			j++;
		}
		if (i != k)
		{
			tmp = array[i];
			array[i] = array[k];
			array[k] = tmp;
			print_array(array, size);
		}
		i++;
	}
}

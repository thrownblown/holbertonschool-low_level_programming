#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - gives the index of the first true element
 * @array: arr to iterate over
 * @size: size of array
 * @cmp: test func
 *
 * Return: index of first passing element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i <	size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}

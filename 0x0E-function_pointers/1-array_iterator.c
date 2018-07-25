#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - for each elem in arr applu func
 * @array: arr to iterate over
 * @size: size of array
 * @action: func to apply to each
 *
 * Return: nope
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i <	size; i++)
		{
			action(array[i]);
		}
	}
}

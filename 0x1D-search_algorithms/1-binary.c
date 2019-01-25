#include "search_algos.h"

/**
 * print_array - prints a specified number of character from an array
 *
 * @a: array
 * @n: size of array
 * Return: void just prints
 */
void print_array(int *a, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		printf("%i", a[i++]);
		if (i < n)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in an array of integers
 * using the binary search algorithm
 *
 * @array: list of ints to search
 * @size: len of arr
 * @value: int to be found
 *
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	size_t h;
	int ret;

	if (!array)
		return (-1);
	printf("Searching in array: ");
	print_array(array, size);

	if (size == 1 && *array != value)
		return (-1);

	h = size / 2;

	if (array[h] == value)
		return (h);
	if (h - 1 && array[h] > value)
		return (binary_search(array, h, value));
	if (array[h] < value)
	{
		ret = binary_search(&array[h], size - h, value);
		if (ret != -1)
			return (ret + h);
	}

	return (-1);
}

#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints a specified number of character from an array
 * @a: array to print
 * @n: number of characters to print
 *
 * Return: void just prints
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n - 2)
		printf("%i, ", a[i++]);
	printf("%i\n", a[i]);
}

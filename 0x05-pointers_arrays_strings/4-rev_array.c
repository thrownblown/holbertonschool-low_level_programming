#include "holberton.h"

/**
 * reverse_array - reverses array
 * @a: an array of integers
 * @n: the length of the array?
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	i = 0;

	while (n > i)
	{
		temp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = temp;
		i++;
		n--;
	}
}

#include "holberton.h"
/**
 * swap_int - swaps valuse for the supplied pointers
 * @a: first pointer to swap
 * @b: second pointer to swap
 *
 * Return: void nada
 */
void swap_int(int *a, int *b)
{
	int val;

	val = *a;
	*a = *b;
	*b = val;
}

#include "holberton.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: The number to evaluate.
 *
 * Return: abs val of n
 *
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (n * -1);
	return (0);
}

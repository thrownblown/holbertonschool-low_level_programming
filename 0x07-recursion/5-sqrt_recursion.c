#include "holberton.h"
/**
 * _curse - recallable sqrt generator
 * @base: place to start
 * @power: goal
 *
 * Return: sqrt or -1
 */

int _curse(int base, int power)
{
	if (base * base == power)
		return (base);
	else if (base * base > power)
		return (-1);
	return (_curse(base + 1, power));
}

/**
 * _sqrt_recursion - cals the naty sqrt of num
 * @n: num to sqrt
 *
 * Return: int sqrt or -1 er
 */

int _sqrt_recursion(int n)
{
	int base;

	base = 0;
	if (n < 0)
		return (-1);
	return (_curse(base, n));
}

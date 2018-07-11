#include "holberton.h"
/**
 * factorial - adds up till gone
 * @n: number to add
 *
 * Return: the value of the factorial of n
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}

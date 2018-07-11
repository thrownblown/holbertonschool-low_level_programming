#include "holberton.h"
/*
 * factorial - adds up till gone
 * @n: number to add
 * Return: the value of the factorial of n
*/
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}

#include "holberton.h"

/**
 *set_bit- bit setter at index to 1
 *@n: num to be bit set
 *@index: index to be bit set
 *Return: -1 if err else 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > sizeof(n) * 8)
		return (-1);

	*n = *n | 1 << index;
	return (1);
}

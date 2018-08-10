#include "holberton.h"

/**
 *get_bit- returns value of a bit at a given index
 *@n: number to be indexed
 *@index: position to get
 *Return: bit val at index or -1 if err
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	while (index--)
	{
		if (n >> 1 == 0)
			return (0);
		n = n >> 1;
	}
	return (n & 1);
}

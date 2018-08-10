#include "holberton.h"

/**
* clear_bit - sets bit at index to 0
* @n: num to be cleared of bit
* @index: bit position to switch
* Return: -1 if err else 1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index  > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

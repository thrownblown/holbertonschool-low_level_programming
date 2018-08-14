#include"holberton.h"

/**
 *flip_bits- returns the num of bits to be flipped to switch nums
 *@n: num to changed
 *@m: comp num
 *Return: num diff bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned int flips = 0;

	diff = n ^ m;

	while (diff)
	{
		flips += (diff & 1);
		diff = diff >> 1;
	}

	return (flips);
}

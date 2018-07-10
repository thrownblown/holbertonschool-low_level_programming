#include "holberton.h"

/**
 * _memset - fills mem with constanat byte
 * @s: where to start filling
 * @b: value to fill
 * @n: number of bytes
 *
 * Return: pointer to begining of mem area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}

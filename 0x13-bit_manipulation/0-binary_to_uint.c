#include "holberton.h"
#include <stdlib.h>

/**
 *binary_to_uint- converts a binary nuber to an unsigned int
 *@b: str of  0 & 1 chars
 *Return: unt int or 0 if b is null or contains non bin chars
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int x2 = 1;
	unsigned int retval = 0;

	if (b == NULL || b[0] == '\0')
		return (0);

	for (i = 0 ; b[i] != '\0' ; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	while (i--)
	{
		retval += (b[i] - '0') * x2;
		x2 *= 2;
	}
	return (retval);
}

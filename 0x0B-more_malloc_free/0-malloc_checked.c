#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates mem
 * @b: how much mem to malloc
 *
 * Return: pointer to our mem
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *bigb;

	bigb = malloc(b);
	if (bigb == NULL)
		exit(98);
	return (bigb);
}

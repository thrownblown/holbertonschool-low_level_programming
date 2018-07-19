#include "holberton.h"
#include <stdlib.h>

/**
 *
 *
 */

void *malloc_checked(unsigned int b)
{
    unsigned int *bigb;

	bigb = malloc(b);
	if (!bigb)
		exit(98);
	return (bigb);
}

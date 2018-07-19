#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - function allocates memory for an array of nmemb elements
 * @nmemb: how much mem to malloc
 * @size: size of elems
 *
 * Return: pointer to our mem
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *bigb;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
    
	bigb = malloc(nmemb * size);
	if (!bigb)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		bigb[i] = 0;

	return (bigb);
}

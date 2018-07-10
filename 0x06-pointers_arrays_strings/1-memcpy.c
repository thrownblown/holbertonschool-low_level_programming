#include "holberton.h"

/**
 * _memcpy - fills mem with values from src
 * @dest: where to start filling
 * @src: values to fill
 * @n: number of bytes
 *
 * Return: pointer to begining of mem area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}

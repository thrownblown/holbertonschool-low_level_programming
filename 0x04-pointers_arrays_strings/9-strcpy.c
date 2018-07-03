#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints a specified number of character from an array
 * @a: array to print
 * @n: number of characters to print
 *
 * Return: void just prints
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

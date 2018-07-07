#include "holberton.h"
/**
 * _strncpy - copies 1 str to an a dest.
 * @dest: target buffer
 * @src: source string to be appended
 * @n: number of bytes to copy
 *
 * Return: pointer to the dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	if (src[j] == '\0')
		while (j < n)
			dest[j++] = '\0';

	return (dest);
}

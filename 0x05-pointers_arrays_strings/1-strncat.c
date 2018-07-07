#include "holberton.h"
/**
 * _strncat - cat n chars of two strings towgether.
 * @dest: target for appemdment
 * @src: source string to be appended
 * @n: number of chars to cat
 *
 * Return: pointer to the dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < n)
		dest[i++] = src[j++];
	if (dest[i++] != '\0')
		dest[i] = '\0';
	return (dest);
}

#include "holberton.h"
/**
 * _strcat - cat two strings towgether.
 * @dest: target for appemdment
 * @src: source string to be appended
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
	while (src[j] != '\0' && j <= n)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

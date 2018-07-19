#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concats 2 strs only n bytes of s2
 * @s1: start str
 * @s2: str to cat to s1
 * @n: amount of s2 to cat
 *
 * Return: pointer to new str or 0 if err
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;

	while (s1[i] != '\0')
		i++;

	j = 0;
	while (s2[j] != '\0')
		j++;

	if (j > n)
		j = n;
	ar = malloc(i + j + 1);
	if (ar == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		ar[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2[j] != '\0' && j < n)
	{
		ar[i] = s2[j];
		i++;
		j++;
	}

	ar[i] = '\0';

	return (ar);
}

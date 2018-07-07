#include "holberton.h"
/**
 * _strcmp - compares two strings.
 * @s1: one string
 * @s2: two string
 *
 * Return: pointer to the dest
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;

	while (s1[i] != '\0')
	{
		i++;
	}

	j = 0;

	while  (j < i)
	{
		if (s1[j] == s2[j])
			j++;
		else
			return (s1[j] - s2[j]);
	}

	if (s1[j] == s2[j] && s1[j] == '\0')
		return (0);

	return (s1[j] - s2[j]);
}

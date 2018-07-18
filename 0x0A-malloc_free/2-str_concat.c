#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concats 2 strs
 * @s1: start str
 * @s2: str to cat to s1
 *
 * Return: pointer to new str or 0 if err
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;
	int i, j;

	i = 0;

	while (s1[i] != '\0')
		i++;

	j = 0;
	while (s2[j] != '\0')
		j++;

	ar = malloc(i + j + 1);

	i = 0;
	while (s1[i] != '\0')
	{
		ar[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		ar[i] = s2[j];
		i++;
		j++;
	}

	ar[i] = '\0';

	return (ar);
}

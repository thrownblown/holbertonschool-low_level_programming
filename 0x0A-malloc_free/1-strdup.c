#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copies a string
 * @str: str to cpy
 *
 * Return: pointer to new str or 0 if err
 */

char *_strdup(char *str)
{
	char *ar;
	int size;

	if (str == NULL)
		return (NULL);

	size = 0;
	while (str[size] != '\0')
		size++;

	if (!size)
		return (NULL);
	ar = malloc(size + 1);

	if (!ar)
		return (NULL);

	for (; size >= 0; size--)
		ar[size] = str[size];

	return (ar);
}

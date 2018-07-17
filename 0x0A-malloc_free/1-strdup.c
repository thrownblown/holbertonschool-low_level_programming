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
		int i, size;

		size = sizeof(str) / sizeof(str[0]);

		ar = malloc(sizeof(char) * size);

		if (!ar)
			return (0);

		for (i = 0; i <= size; i++)
		{
			ar[i] = str[i];
		}

		return (ar);
}

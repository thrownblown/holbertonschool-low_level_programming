#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and inits with char.
 * @size: length of array
 * @c: val for init
 *
 * Return: pointer to new array or null if err
 */

char *create_array(unsigned int size, char c)
{
		char *ar;
		unsigned int i;

		if (!size)
			return (0);

		ar = malloc(sizeof(char) * size);

		if (!ar)
			return (0);

		for (i = 0; i < size; i++)
		{
			ar[i] = c;
		}

		return (ar);
}

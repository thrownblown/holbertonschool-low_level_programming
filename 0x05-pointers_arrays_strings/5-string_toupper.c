#include "holberton.h"

/**
 * string_toupper - uppercases an array of characters
 * @s: a string to uppity
 *
 * Return: string now upper
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return (s);
}

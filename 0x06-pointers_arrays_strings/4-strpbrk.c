#include "holberton.h"

/**
 * _strpbrk -searches a string for any of a set of bytes.
 * @s: string to look at
 * @accept: string of acceptable chars
 *
 * Return: number of bytes in init seg that consist of bytes only from accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
				return (&s[i]);
			j++;
		}
		i++;
	}
	return (0);
}

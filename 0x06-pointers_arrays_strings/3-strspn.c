#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to look at
 * @accept: string of acceptable chars
 *
 * Return: number of bytes in init seg that consist of bytes only from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, match;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		match = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
				match = 1;
			j++;
		}
		if (!match)
			return (i);
		i++;
	}
	return (i);
}

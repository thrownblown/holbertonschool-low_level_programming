#include "holberton.h"

/**
 * cap_string - uppercases the first letter of every word
 * @s: a string to uppity
 *
 * Return: string now upper
 */
char *cap_string(char *s)
{
	int i;

	i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;

	while (s[i] != '\0')
	{
		switch (s[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
			default:
				i++;
		}
	}
	return (s);
}

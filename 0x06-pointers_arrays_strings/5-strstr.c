#include "holberton.h"

/**
 * _strstr -locates a substring
 * @haystack: string to search
 * @needle: string to find
 *
 * Return: a pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, match;

	i = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		match = 0;
		while (needle[j] != '\0')
		{
			if (needle[j] == haystack[i + j])
				match = 1;
			else
				match = 0;
			j++;
		}
		if (match)
			return (&haystack[i]);
		i++;
	}
	return (0);
}

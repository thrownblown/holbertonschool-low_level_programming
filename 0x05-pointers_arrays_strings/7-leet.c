#include "holberton.h"

/**
 * leet - changes a string to leetspeak
 * @s: a string to leet
 *
 * Return: string now leeted
 */
char *leet(char *s)
{
	int i, j;

	char let[] = { 'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L' };
	char num[] = { '4', '3', '0', '7', '1', '4', '3', '0', '7', '1' };

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 9)
		{
			if (s[i] == let[j])
				s[i] = num[j];
			j++;
		}
		i++;
	}
	return (s);
}

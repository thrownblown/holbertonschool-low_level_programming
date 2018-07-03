#include "holberton.h"
#include "2-strlen.c"
/**
 * rev_string - reverses a strings characters in a memory
 * @s: string to print
 *
 * Return: void just prints
 */

void rev_string(char *s)
{
	int i, j;
	char val;

	i = _strlen(s) - 1;
	j = 0;

	while (i >= j)
	{
		val = s[j];
		s[j] = s[i];
		s[i] = val;
		i--;
		j++;
	}
}

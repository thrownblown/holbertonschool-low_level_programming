#include "holberton.h"
/**
 * _strlen - calcs the len of a str
 * @s: pointer to the string to calc
 *
 * Return: the length of the str
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

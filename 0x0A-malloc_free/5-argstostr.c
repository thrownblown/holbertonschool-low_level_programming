#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - concats 2 strs
 * @s1: start str
 * @s2: str to cat to s1
 *
 * Return: pointer to new str or 0 if err
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;

	while (s1[i] != '\0')
		i++;

	j = 0;
	while (s2[j] != '\0')
		j++;

	ar = malloc(i + j + 1);
	if (ar == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		ar[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		ar[i] = s2[j];
		i++;
		j++;
	}

	ar[i] = '\0';

	return (ar);
}

/**
 * argstostr - concats the argvs
 * @argc: num of argvs
 * @argv: arr of args
 *
 * Return: pointer to a char
 */

char *argstostr(int argc, char **argv)
{
	int i, s, c;
	char *retval;

	if (argc == 0)
		return (0);

	s = 0;
	for (i = 1; i < argc; i++)
	{
		for (c = 0; argv[i][c] != '\0'; c++)
			s++;
	}
	retval = malloc(s + 2);

	retval = argv[1];
	for (i = 2; i < argc; i++)
	{
		retval = str_concat(retval, "\n");
		retval = str_concat(retval, argv[i]);
	}
	retval = str_concat(retval, "\n");

	return (retval);
}

#include "holberton.h"
#include <stdio.h>
/**
 * rot13 - rotates an alpha char by 13 spaces
 * @s: a string to rot
 *
 * Return: string now rotten
 */
char *rot13(char *s)
{
	int i, j;
	char *abc = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;

	while (s[i] != '\0')
	{
		for (j = 0; abc[j] != '\0'; j++)
		{
			if (s[i] == abc[j])
			{
				s[i] = rot[j];
				break;
			}
		}
		i++;
	}
	return (s);
}

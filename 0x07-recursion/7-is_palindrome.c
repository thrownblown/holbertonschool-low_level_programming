#include "holberton.h"

/**
 * _curse - compares two chars in a str
 * @s: string to compare
 * @end: end of str
 *
 * Return: 1 if palindrome
 */

int _curse(char *s, int end)
{
	if (end <= 1)
		return (1);
	if (s[0] != s[end])
		return (0);
	return (_curse(s + 1, end - 2));
}

/**
 * is_palindrome - makes sure the str is coming and going the same way
 * @s: str to test
 *
 * Return: 1 if palin or 0
 */

int is_palindrome(char *s)
{
	int end;

	end = 0;
	while (s[end] != '\0')
		end++;
	return (_curse(s, end - 1));
}

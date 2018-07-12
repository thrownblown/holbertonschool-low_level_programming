#include "holberton.h"
#include <stdio.h>

/**
 * _curse - test for prime or composition
 * @base: place to start
 * @prime: subject to be tested
 *
 * Return: sqrt or -1
 */

int _curse(char *s, int end)
{
	printf("%c %c\n", s[0], s[end]);
	if (end <= 1)
		return (1);
	if (s[0] != s[end])
		return (0);
	return (_curse(s + 1, end - 2));
}

/**
 * is_prime_number - is this number divisable only by its self and one?
 * @n: num to test
 *
 * Return: 1 if prime or 0
 */

int is_palindrome(char *s)
{
	int end;

	end = 0;
	while (s[end] != '\0')
	{
		printf("%c", s[end]);
		end++;
	}
	printf("\n");
	return (_curse(s, end - 1));
}

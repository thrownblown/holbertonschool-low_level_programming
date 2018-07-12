#include "holberton.h"
/**
 * _curse - test for prime or composition
 * @base: place to start
 * @prime: subject to be tested
 *
 * Return: sqrt or -1
 */

int _curse(int base, int prime)
{
	if (prime == base)
		return (1);
	if (prime < base)
		return (0);
	if (!(prime % base))
		return (0);
	return (_curse(base + 1, prime));
}

/**
 * is_prime_number - is this number divisable only by its self and one?
 * @n: num to test
 *
 * Return: 1 if prime or 0
 */

int is_prime_number(int n)
{
	int base;

	base = 2;

	if (n <= 0)
		return (0);
	return (_curse(base, n));
}

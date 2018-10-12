#include "hash_tables.h"

/**
 * hash_djb2 - djb2 hashing algorithm
 * @str: key to be hashed out
 *
 * Return: numeric hash of string
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int c;

	while (c = *str++)
		hash = ((hash << 5) + hash) + c;

	return (hash);
}

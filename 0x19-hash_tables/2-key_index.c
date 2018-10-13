#include "hash_tables.h"

/**
 * key_index - provides an index to key after hashing
 * @key: key to be hashed out into into index
 * @size: size of the hash array
 *
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (!key || !size)
		return (0);

	hash = hash_djb2(key);
	return (hash % size);

}

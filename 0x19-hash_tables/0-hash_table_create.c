#include "hash_tables.h"

/**
 * hash_table_create - makes a hash table of size
 * @size: size of table
 *
 * Return: prtr to table else NULL if error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(*ht->array) * size);
	if (!ht)
	{
		free(ht);
		return (NULL);
	}
	while (size--)
		ht->array[size] = NULL;

	return (ht);
}

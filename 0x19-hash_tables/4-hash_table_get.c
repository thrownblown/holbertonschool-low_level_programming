#include "hash_tables.h"

/**
 * hash_table_get - get value by key from hash table
 * @ht: hash table
 * @key: key to get
 *
 * Return: value, else NULL if no key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash;
	hash_node_t *node = NULL;

	if (!ht || !key || *key == 0)
		return (NULL);
	hash = key_index((const unsigned char *) key, ht->size);
	for (node = ht->array[hash]; node; node = node->next)
		if (!strcmp(node->key, key))
			return (node->value);
	return (NULL);

}

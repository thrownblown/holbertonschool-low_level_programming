#include "hash_tables.h"

/**
 * hash_table_set - provides an index to key after hashing
 * @ht: hash table to search
 * @key: key to set
 * @value: value to use
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash;
	hash_node_t *node = NULL;

	if (!ht || !key || *key == 0)
		return (0);
	hash = key_index((unsigned char *)key, ht->size);
	node = ht->array[hash];
	while (node)
	{

		if (!strcmp(node->key, key))
		{
			if (node->value)
				free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->value = strdup(value);
	node->key = strdup(key);
	if (!node->key || !node->value)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (0);
	}
	node->next = ht->array[hash];
	ht->array[hash] = node;
	return (1);
}

#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *tmp = NULL;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node)
			{
				free(node->value);
				free(node->key);
				tmp = node;
				node = node->next;
				free(tmp);
			}
		}
		free(ht->array);
		free(ht);
	}
}

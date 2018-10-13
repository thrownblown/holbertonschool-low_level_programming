#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table's contents
 * @ht: hash table to print
 * Return: nope just print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node = NULL;
	int printed = 0;

	printf("{");
	for (i = 1; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (printed)
				printf(", '%s': '%s'", node->key, node->value);
			else
			{
				printf("'%s': '%s'", node->key, node->value);
				printed = 1;
			}
			node = node->next;
		}
	}
	printf("}\n");
}

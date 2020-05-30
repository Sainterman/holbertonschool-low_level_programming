#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieve the value of a key in a hasth table
 * @ht: Address to hash table
 * @key: element to search
 * Return: Value paired to key, null if unexisting
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int hashKey;

	hashKey = key_index((const unsigned char *) key, ht->size);
	node = ht->array[hashKey];
	if (node)
	{
		while (node)
		{
			if (strcmp(node->key, key) == 0)
				return (node->value);
			node = node->next;
		}
	}
	return (NULL);
}

#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: addtress of the hash table
 * @key: key in the hash table
 * @value: Value for key
 *
 * Return: 1 if succesful else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int hashKey;

	if (!key || !ht || !value)
		return (0);
	hashKey = key_index((const unsigned char *) key, ht->size);
	node = ht->array[hashKey];
	if (node)
	{
		while (node)
		{
			if (strcmp(node->key, key) == 0)
			{
				node->value = strdup(value);
				return (1);
			}
			node = node->next;
		}
	}
	node = NULL;
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	if (ht->array[hashKey])
		node->next = ht->array[hashKey];
	ht->array[hashKey] = node;
	return (1);
}

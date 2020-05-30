#include "hash_tables.h"

/**
 * hash_table_delete - Delete hash table
 * @ht: address to hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (ht->array[i])
		{
			node = ht->array[i];
			ht->array[i] = ht->array[i]->next;
			free(node->key);
			free(node->value);
			free(node);
		}
	}
	free(ht->array);
	free(ht);
}

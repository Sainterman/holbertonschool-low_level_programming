#include "hash_tables.h"

/**
 * hash_table_create -
 *
 * Return: 
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i = 0;

	if (size < 1)
	{
		return (NULL);
	}
	new_table = malloc(sizeof(hash_table_t) * 1);
	if (!new_table)
	{
		return (NULL);
	}
	new_table->size = size;
	new_table->array = calloc(size, sizeof(hash_node_t *));
	if (!new_table->array)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}
	return (new_table);
}
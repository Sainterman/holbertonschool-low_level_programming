#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in a hash table
 * @key: String to search for
 * @size:  The size of the array of the hash table
 * Return: Index at which the key/value pair should be
 *  stored in array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int  hash, index;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}

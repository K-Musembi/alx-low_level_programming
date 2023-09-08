#include "hash_tables.h"

/**
 * key_index - generate the index of a key
 * @key: the key string
 * @size: size of array of the hash table
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, value;

	value = hash_djb2(key);
	index = value % size;

	return (index);
}

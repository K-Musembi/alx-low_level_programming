#include "hash_tables.h"

/**
 * hash_table_set - add element to hash table
 * @ht: hash table
 * @key: element key
 * @value: element value
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node = malloc(sizeof(hash_node_t));
	hash_node_t *temp;

	if (node == NULL)
		return (0);
	if (key == NULL)
	{
		free(node);
		return (0);
	}

	node->key = (char *)key;
	node->value = malloc(strlen(value) + 1);
	if (node->value == NULL)
		return (0);
	strcpy(node->value, value);
	node->next = NULL;

	idx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = node;
	}
	else
	{
		temp = ht->array[idx];
		node->next = temp;
		ht->array[idx] = node;
	}
	return (1);
}

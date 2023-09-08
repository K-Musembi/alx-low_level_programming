#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of hash table
 *
 * Return: pointer to table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *map = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (map == NULL)
		return (NULL);

	map->size = size;
	map->array = malloc(sizeof(hash_table_t *) * size);
	if (map->array == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		map->array[i] = NULL;
		i++;
	}
	return (map);
}

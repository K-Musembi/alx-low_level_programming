#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: the hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];

		if (temp == NULL)
			free(temp);
		else
		{
			while (temp)
			{
				node = temp;
				temp = temp->next;
				free(node->value);
				free(node);
			}
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}

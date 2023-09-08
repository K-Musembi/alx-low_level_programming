#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	int i, last_index = -1;

	printf("{");
	for (i = 0; (unsigned long int)i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
			last_index = i;
	}
	for (i = 0; i <= last_index; i++)
	{
		if (ht->array[i] == NULL)
			continue;

		temp = ht->array[i];
		while (temp->next != NULL)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			printf(", ");
			temp = temp->next;
		}
		printf("'%s': '%s'", temp->key, temp->value);

		if (i != last_index)
			printf(", ");
	}
	printf("}\n");
}

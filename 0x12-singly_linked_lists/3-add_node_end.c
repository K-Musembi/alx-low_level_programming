#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - add node at end of list
* @head: input
* @str: input
*
* Return: pointer to last element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp;
	char *new_str;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(node);
		return (NULL);
	}

	node->str = new_str;
	node->len = strlen(new_str);
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node;
	}
	return (node);
}

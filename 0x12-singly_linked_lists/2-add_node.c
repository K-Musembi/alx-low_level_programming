#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
* add_node - add node a start
* @head: input
* @str: input
*
* Return: pointer
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
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
	node->next = *head;

	*head = node;
	return (*head);
}


#include "lists.h"

/**
* add_nodeint - add node at start
* @head: input
* @n: input
*
* Return: pointer to node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node, *temp;

	temp = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = temp;

	*head = node;

	return (node);
}

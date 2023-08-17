#include "lists.h"

/**
 * add_dnodeint - add node at the beginning
 * @head: head pointer
 * @n: data
 *
 * Return: address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(int) * n);

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	if (*head == NULL)
	{
		node->next = NULL;
		*head = node;
	}
	else
	{
		node->next = *head;
		*head = node;
	}
	return (node);
}

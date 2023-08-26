#include "lists.h"

/**
 * insert_dnodeint_at_index - insert at given position
 * @h: head pointer
 * @idx: index
 * @n: node data
 *
 * Return: address or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = malloc(sizeof(int) * n);
	dlistint_t *temp = *h, *nxt;
	unsigned int count = 0;

	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		if ((*h) != NULL)
			(*h)->prev = node;
		node->prev = NULL;
		node->next = (*h);
		(*h) = node;
		return (node);
	}
	while (temp)
	{
		if (count == idx)
		{
			nxt = temp->prev;
			node->prev = nxt;
			nxt->next = node;
			temp->prev = node;
			node->next = temp;
			return (node);
		}
		else if (temp->next == NULL && idx == (count + 1))
		{
			node->next = NULL;
			temp->next = node;
			node->prev = temp;
			return (node);
		}
		count += 1;
		temp = temp->next;
	}
	free(node);
	return (NULL);
}


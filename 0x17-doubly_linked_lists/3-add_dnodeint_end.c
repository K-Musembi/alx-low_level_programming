#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 * @head: head pointer
 * @n: data
 *
 * Return: address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(int) * n);
	dlistint_t *temp = *head;

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		while (temp != NULL)
		{
			if (temp->next == NULL)
			{
				temp->next = node;
				node->prev = temp;
				break;
			}
			temp = temp->next;
		}
	}
	return (node);
}

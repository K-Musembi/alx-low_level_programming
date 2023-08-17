#include "lists.h"

/**
 * get_dnodeint_at_index - get nth node
 * @head: head pointer
 * @index: nth index
 *
 * Return: node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	while (temp != NULL)
	{
		if (index == count)
			return (temp);
		count += 1;
		temp = temp->next;
	}
	return (NULL);
}

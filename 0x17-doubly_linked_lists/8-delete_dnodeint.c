#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head pointer
 * @index: index of node
 *
 * Return: 1 on success, else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		if (temp->next != NULL)
			temp->next->prev = NULL;
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (count == index)
			break;
		temp = temp->next;
		count++;
	}
	
	if (temp == NULL)
		return (-1);

	temp->prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	free(temp);
	return (1);
}

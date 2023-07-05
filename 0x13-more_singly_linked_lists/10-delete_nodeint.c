#include "lists.h"

/**
* delete_nodeint_at_index - delete node
* @head: input
* @index: input
*
* Return: 1 if success, -1 if failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *prev, *node, *nxt;

	if (*head == NULL)
		return (-1);

	count = f_count(*head);
	if (index >= count)
		return (-1);

	if (index == 0)
	{
		node = *head;
		*head = node->next;
	}
	else if (index == count - 1)
	{
		node = node_pos(*head, index);
		prev = node_pos(*head, index - 1);
		prev->next = NULL;
	}
	else
	{
		node = node_pos(*head, index);
		prev = node_pos(*head, index - 1);
		nxt = node_pos(*head, index + 1);
		prev->next = nxt;
	}
	
	free(node);

	return (1);
}
/**
* f_count - count elements
* @h: input
*
* Return: total
*/
int f_count(listint_t *h)
{
	listint_t *temp = h;
	unsigned int total;

	while (temp->next != NULL)
	{
		total++;
		temp = temp->next;
	}
	total += 1;

	return (total);
}
/**
* node_pos - node position
* @h: input
* @i: input
*
* Return: pointer
*/
listint_t *node_pos(listint_t *h, unsigned int i)
{
	listint_t *temp = h;
	unsigned int j;

	for (j = 0; j < i; j++)
		temp = temp->next;

	return (temp);
}

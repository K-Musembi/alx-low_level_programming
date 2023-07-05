#include "lists.h"

/**
* insert_nodeint_at_index - insert new node
* @head: input
* @idx: input
* @n: input
*
* Return: pointer
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *tmp, *tmp2;
	unsigned int count;

	if (*head == NULL && idx > 0)
		return (NULL);
	count = fn_count(*head);
	if (idx >= count)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	if (*head == NULL)
	{
		node->next = NULL;
		*head = node;
	}
	else if (idx == 0 && *head != NULL)
	{
		tmp = (*head)->next;
		node->next = tmp;
		*head = node;
	}
	else if (idx == (count - 1))
	{
		tmp = node_last(*head);
		node->next = NULL;
		tmp->next = node;
	}
	else
	{
		tmp = node_btn(*head, idx - 1);
		tmp2 = node_btn(*head, idx);
		node->next = tmp2;
		tmp->next = node;
	}
	return (node);
}
/**
* fn_count - return count
* @h: pointer
*
* Return: int
*/
int fn_count(listint_t *h)
{
	unsigned int i;
	listint_t *temp = h;

	while (temp->next != NULL)
	{
		i++;
		temp = temp->next;
	}
	i++;
	return (i);
}
/**
* node_btn - nth node
* @h: input
* @i: input
*
* Return: pointer
*/
listint_t *node_btn(listint_t *h, unsigned int i)
{
	listint_t *temp = h;
	unsigned int j;

	for (j = 0; j < i; j++)
	{
		temp = temp->next;
	}
	return (temp);
}
/**
* node_last - last node
* @h: input
*
* Return: pointer
*/
listint_t *node_last(listint_t *h)
{
	listint_t *temp = h;

	while (temp->next != NULL)
		temp = temp->next;

	return (temp);
}


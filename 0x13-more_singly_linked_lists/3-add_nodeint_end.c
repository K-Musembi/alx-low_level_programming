#include "lists.h"

/**
* add_nodeint_end - add node at the end
* @head: input
* @n: input
*
* Return: pointer to node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *temp;

	temp = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = node;
	}
	return (node);
}

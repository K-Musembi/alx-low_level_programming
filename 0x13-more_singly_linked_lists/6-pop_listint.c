#include "lists.h"

/**
* pop_listint - delete head node
* @head: input
*
* Return: nothing
*/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		data = temp->n;

		free(temp);
	}
	return (data);
}

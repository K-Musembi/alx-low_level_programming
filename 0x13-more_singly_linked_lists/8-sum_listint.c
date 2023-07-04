#include "lists.h"

/**
* sum_listint - sum of all data in list
* @head: input
*
* Return: total
*/
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp->next != NULL)
	{
		total += temp->n;
		temp = temp->next;
	}

	total += temp->n;

	return (total);
}

#include "lists.h"

/**
 * sum_dlistint - sum of data in list
 * @head: head pointer
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int value, sum = 0;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		value = temp->n;
		sum += value;
		temp = temp->next;
	}
	return (sum);
}

#include "lists.h"

/**
* print_listint - print list elements
* @h: input
*
* Return: count of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp;

	temp = h;

	while (temp->next != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	printf("%d\n", temp->n);
	count++;

	return (count);
}

#include "lists.h"

/**
 * print_dlistint - print list elements
 * @h: head pointer
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t total = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		total += 1;
		temp = temp->next;
	}
	return (total);
}

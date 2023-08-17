#include "lists.h"

/**
 * dlistint_len - number of elements
 * @h: head pointer
 *
 * Return: number
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t total = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		total += 1;
		temp = temp->next;
	}
	return (total);
}

#include "lists.h"

/**
* listint_len - returns number of elements
* @h: input
*
* Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp;

	temp = h;

	while (temp->next != NULL)
	{
		count++;
		temp = temp->next;
	}
	count++;

	return (count);
}

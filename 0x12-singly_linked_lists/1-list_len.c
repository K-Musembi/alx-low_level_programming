#include <stddef.h>
#include "lists.h"

/**
* list_len - returns number of elements
* @h: input
*
* Return: number of elements
*/
size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t num = 0;

	temp = h;
	while (temp != NULL)
	{
		num++;
		temp = temp->next;
	}
	return (num);
}

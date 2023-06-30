#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
* print_list - print list elements
* @h: input
*
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t num = 0;

	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		num++;
	}
	return (num);
}

#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
* free_list - frees a list
* @head: input
*
* Return: nothing
*/
void free_list(list_t *head)
{
	list_t *temp, *nxt;

	temp = head;

	while (temp)
	{
		nxt = temp;
		temp = temp->next;
		free(nxt);
	}
}

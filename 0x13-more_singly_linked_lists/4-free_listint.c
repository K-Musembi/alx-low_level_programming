#include "lists.h"

/**
* free_listint - free list
* @head: input
*
* Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *temp, *nxt;

	if (head != NULL)
	{
		temp = head;

		while (temp != NULL)
		{
			nxt = temp;
			temp = temp->next;
			free(nxt);
		}
	}
}

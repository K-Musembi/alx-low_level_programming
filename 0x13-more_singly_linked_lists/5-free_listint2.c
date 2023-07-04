#include "lists.h"

/**
* free_listint2 - free liast
* @head: input
*
* Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *temp, *nxt;

	if (*head != NULL)
	{
		temp = *head;

		while (temp->next != NULL)
		{
			nxt = temp;
			temp = temp->next;
			free(nxt);
		}
		free(temp);
		*head = NULL;
	}
}

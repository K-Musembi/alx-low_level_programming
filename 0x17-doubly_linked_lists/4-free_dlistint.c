#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: head pointer
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nxt, *temp = head;

	while (temp != NULL)
	{
		nxt = temp;
		temp = temp->next;
		free(nxt);
	}
}

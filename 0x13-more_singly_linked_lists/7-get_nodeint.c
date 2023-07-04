#include "lists.h"

/**
* get_nodeint_at_index - return nth node
* @head: input
* @index: input
*
* Return: pointer
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i, count = 0;
	listint_t *temp, *nxt;

	if (head != NULL)
	{
		temp = head;
		while (temp->next != NULL)
		{
			count++;
			temp = temp->next;
		}

		count += 1;

		if (index >= count)
			return (NULL);

		nxt = head;
		for (i = 0; i < index; i++)
			nxt = nxt->next;
	}
	return (nxt);
}

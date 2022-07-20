#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	if (!(*head))
		return (-1);

	while (*head && i < index - 1)
	{
		*head = (*head)->next;
		i++;
	}

	temp = ((*head)->next)->next;
	free((*head)->next);
	(*head)->next = temp;
	
	return (1);
}


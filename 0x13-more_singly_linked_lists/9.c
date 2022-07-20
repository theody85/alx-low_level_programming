#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node;
	listint_t *temp;

	new_node = malloc(sizeof(listint_t));
	if(!new_node)
		return (NULL);

	new_node->n = n;

	while(*head && i < idx)
	{
		*head = (*head)->next;
		i++;
	}

	if(i == idx)
	{
		temp = *head;
		*head = new_node;
		new_node->next = temp;

		return (new_node);
	}
	return (NULL);
}



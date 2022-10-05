#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    unsigned int i = 0;
    dlistint_t *temp = (*head);

    if(!index)
    {
        (*head) = temp->next;
        if (temp->next)
            temp->next->prev = NULL;
        temp->next = NULL;
        free(temp);
        
        return (1);

    }

    while (temp && i < index)
    {
        temp = temp->next;
        i++;

    }
    if(temp)
    {
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev; 
        
        free(temp);
        return (1);

    }
    return (-1);

}

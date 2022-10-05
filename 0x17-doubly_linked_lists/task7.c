#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n){
    unsigned int i = 0;

    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if(!new_node)
        return (NULL);
    
    

    while (*h && i < idx)
    {
        i++;
        *h = (*h)->next;
    }
    
    if (*h){
        new_node->next = (*h)->next;
        (*h)->next = new_node;
        new_node->prev = (*h);
        new_node->n = n;

        return (new_node);

    }
    return (NULL);

}

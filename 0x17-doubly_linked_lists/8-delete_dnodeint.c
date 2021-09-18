#include "lists.h"

/**
 * delete_dnodeint_at_index: Delete a node in a specific position
 *@header: Pointer to the header.
 *@index: Position of the node a delete
 * Return: -1 if faled, 1 if succes
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *x = *head;
    unsigned int z = 0;

    if (x == NULL)
    {
        return (-1);
    }

    if (index == 0)
    {
        *head = x->next;

        if (x->next != NULL)
        {
            x->next->prev = NULL;
        }

        free(x);

        return (1);
    }

    for (z = 0; z < index; z++)
    {
        if (x->next == NULL)
        {
            return (-1);
        }

        x = x->next;
    }

    x->prev->next = x->next;

    if (x->next != NULL)
    {
        x->next->prev = x->prev;
    }

    free(x);

    return (1);
}
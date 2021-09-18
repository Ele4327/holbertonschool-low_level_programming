#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node in specific position
 * @h: Pointer to the header.
 * @idx: Specific node added.
 * @n: Number.
 * Return:  Null = Error, failed. Otherwise, direction of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

    dlistint_t *z = NULL;
    dlistint_t *node_x = NULL;

    z = *h;

    if (idx == 0)
    {
        return (add_dnodeint(h, n));
    }

    for (idx = 0; idx != 1; idx--)
    {
        z = z->next;

        if (z == NULL)
        {
            return (NULL);
        }
    }

    if (z->next == NULL)
    {
        return (add_dnodeint_end(h, n));
    }

    node_x = malloc(sizeof(dlistint_t));

    if (node_x == NULL)
    {
        return (NULL);
    }

    node_x->n = n;
    node_x->prev = z;
    node_x->next = z->next;
    z->next->prev = node_x;
    z->next = node_x;

    return (node_x);
}
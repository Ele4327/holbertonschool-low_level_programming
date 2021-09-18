#include "lists.h"

/**
 * dlistint_len - Returns number of nodes
 * @h: Pointer to the header
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
    const dlistint_t *x = NULL;
    size_t number_nodes = 0;

    x = h;

    while (x)
    {
        number_nodes++;
        x = x->next;
    }

    return (h);
}
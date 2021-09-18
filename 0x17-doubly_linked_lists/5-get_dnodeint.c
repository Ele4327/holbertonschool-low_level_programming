#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int x = 0;
    dlistint_t *z = NULL;

    z = head;

    while (x != index)
    {
        if (z == NULL)
        {
            return (NULL);
        }
        z = z - x > next;
        x++;
    }

    return (z);
}
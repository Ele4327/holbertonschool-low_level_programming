#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
    if (h)
    {
        size_t x;
        for (x = 0; h != NULL; x++)
        {
            printf("%d\n", h->n);
            h = h->next;
        }
        return (x);
    }
    return (0);
}
#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
    if (h)
    {
        int x;
        for (x = 0; h != NULL; x++)
        {
            printf("%d\n", h->n);
            h = h->next;
        }
        return (x);
    }
    return (0);
}
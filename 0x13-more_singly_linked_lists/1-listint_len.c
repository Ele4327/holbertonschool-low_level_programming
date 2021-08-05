#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer
 * Return - Data type size_t
 */

size_t listint_len(const listint_t *h)
{
    size_t x;

    while (h != NULL)
    {
        x++;
        h = h->next;
    }

    return (x);
}

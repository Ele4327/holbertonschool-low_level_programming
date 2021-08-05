#include "lists.h"

/**
 * add_nodeint_end - returns the number of elements in a linked list
 * @head: double pointer
 * @n: constant
 * Return - Data type linstint_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *nw = (listint_t *)malloc(sizeof(listint_t));
    listint_t *ult = *head;

    if (nw == NULL)
    {
        return (NULL);
    }

    nw->n = n;
    nw->next = NULL;

    if (*head == NULL)
    {
        *head = nw;
        return (nw);
    }

    while (ult->next != NULL)
    {
        ult = ult->next;
    }

    ult->next = nw;

    return (ult->next);
}

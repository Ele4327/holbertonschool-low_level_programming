#include "lists.h"

/**
 * free_dlistint - Free a list.
 * @head: Pointer to header.
 * Return: Always 0
 */

void free_dlistint(dlistint_t *head)
{
    if (head != NULL)
    {
        dlistint_t *z = NULL;
        z = head;

        while (z->next != NULL)
        {
            z = head->next;
            free(head);
            head = z;
        }

        free(z);
    }
}
#include "lists.h"

/**
 * get_dnodeint_at_index - Return a Node of a linked list.
 * @head: Pointer to header.
 * @index: Number of node what get value.
 * Return: Pointer to node.
 */

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
		z = z->next;
		x++;
	}

	return (z);
}

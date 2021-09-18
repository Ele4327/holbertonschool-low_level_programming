#include "lists.h"

/**
 * add_dnodeint_end - Add a node at the end
 * @head: Pointer to the header.
 * @n: Number.
 * Return: Pointer new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node_x = NULL;
	dlistint_t *z = NULL;

	z = *head;
	node_x = malloc(sizeof(dlistint_t));

	if (node_x == NULL)
	{
		return (NULL);
	}

	node_x->n = n;
	node_x->next = NULL;

	if (*head == NULL)
	{
		node_x->prev = NULL;
		*head = node_x;
		return (node_x);
	}

	while (z->next != NULL)
	{
		z = z->next;
	}

	z->next = node_x;
	node_x->prev = z;

	return (node_x);
}

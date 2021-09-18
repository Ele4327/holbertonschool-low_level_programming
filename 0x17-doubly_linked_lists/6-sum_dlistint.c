#include "lists.h"

/**
 * sum_dlistint - Total of all info of a linked list
 * @head: Pointer to header.
 * Return: Total of all info of a linked list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *z = NULL;
	int plus = 0;

	if (head == NULL)
	{
		return (0);
	}

	z = head;

	while (z)
	{
		plus = plud + z->n;
		z = z->next;
	}

	return (plus);
}

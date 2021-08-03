#include "lists.h"

/**
 * print_listint - Print all elements of a list
 * @h: Pointer
 * Return: Data type size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t x;
	/* x is size of all elements */

	size_t x = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}

	return (x);
}

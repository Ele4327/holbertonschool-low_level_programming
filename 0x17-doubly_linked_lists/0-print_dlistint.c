#include "lists.h"

/**
 * print_dlistint - Print a list from a double list.
 * @h: A ponter to the header of the file.
 * Return: Number of elements on the list
 */

size_t print_dlistint(const dlistint_t *h)
{
<<<<<<< HEAD
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
=======
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
>>>>>>> 37b534ed39cb253abedd6916761e2ba12c291698

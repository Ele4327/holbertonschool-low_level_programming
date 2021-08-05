#include "lists.h"

/**
 * free_listint - returns the number of elements in a linked list
 * @head: pointer
 * Return: Always 0
 */

void free_listint(listint_t *head)
{
	listint_t *anthr_head;

	while (head != NULL)
	{
		anthr_head = head;
		head = head->next;
		free(anthr_head);
	}
}

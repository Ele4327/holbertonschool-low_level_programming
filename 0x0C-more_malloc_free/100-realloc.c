
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

/**
 * _realloc - Realloc memory
 * @ptr: Pointer to realloc memory malloc
 * @old_size: Old size of the memory
 * @new_size: New size of the memory
 * Return: A new space in memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		void *ptrmmry;

		ptrmmry = (void *)malloc(new_size);
		return (ptrmmry);
	}

	if (new_size > old_size)
	{
		void *ptrmmry;

		ptrmmry = (void *)malloc(old_size + new_size);

		if (ptrmmry == NULL)
		{
			free(ptr);
			return (NULL);
		}
		else
		{
			free(ptr);
			return (ptrmmry);
		}
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		return (NULL);
	}
}

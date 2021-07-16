#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - Function that allocates memory using malloc.
 * @b: Size of the memory cells to return.
 * Return: Returns a pointer to the allocated memory
 * If malloc fails, the malloc_checked function should cause normal
 * process termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = (void *)malloc(b);

	if (!ptr)
	{

		exit(98);
	}
	return (ptr);
}

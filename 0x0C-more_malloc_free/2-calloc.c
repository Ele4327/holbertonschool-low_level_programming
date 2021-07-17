#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"

void *_calloc(unsigned int nmemb, unsigned int size);

/**
* _calloc - Function that allocates memory for an array, using malloc
* @nmemb: n elements of "size"
* @size: String 2
* Return: Always 0
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x = 0;
	char *z;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	z = malloc(nmemb * size);

	if (z == 0)
	{
		return (NULL);
	}

	while (x < (nmemb * size))
	{
		z[x] = 0;
		x++;
	}

	return (z);
}

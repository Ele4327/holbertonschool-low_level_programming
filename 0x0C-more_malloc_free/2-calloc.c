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
	unsigned int x;
	char *z;

	z = malloc(nmemb * size);
	x = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	if (z == 0)
	{
		return (NULL);
	}

	for (; x < (nmemb * size); x++)
	{
		z[x] = 0;
		x++;
	}

	return (z);
}

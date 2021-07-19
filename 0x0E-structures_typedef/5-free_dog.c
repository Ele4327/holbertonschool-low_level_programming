#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - Free the dogs!
 * @d: Variable of data type
 * Return: Always 0
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
	}
}

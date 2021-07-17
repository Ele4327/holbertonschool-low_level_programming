#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"

int *array_range(int min, int max);

/**
* array_range - Function that creates an array of integers
* @min: Value min
* @max: Value max
* Return: Int Array Values
*/

int *array_range(int min, int max)
{
	int *x;
	int z;

	if (min > max)
	{
		return (NULL);
	}

	x = malloc(sizeof(int) * (max - min + 1));

	if (x == NULL)
	{
		return (NULL);
	}

	z = 0;
	while (min <= max)
	{
		z++;
		x[z] = min;
		min++;
	}
	return (x);
}

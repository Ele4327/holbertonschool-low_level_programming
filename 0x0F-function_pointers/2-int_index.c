#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: Array with determinate values
 * @size: Size of the array
 * @cmp: Pointer to a functions
 * Return: Data type value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if ((array != NULL) && size != 0 && cmp != NULL)
	{

		int x;
		int z;

		for (x = 0; x < size; x++)
		{
			z = cmp(array[x]);
			if (z == 1)
			{
				return (x);
			}
		}

		if (z <= 0)
		{
			return (-1);
		}
	}
	return (-1);
}

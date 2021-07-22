#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function given as a parameter on each element of an array
 * @array: Array with determinates values
 * @size: Size of the Array
 * @action: Pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if ((array != NULL) && (size != 0) && (action != NULL))
	{
		size_t x;

		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}

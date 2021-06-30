#include <stdio.h>
#include "holberton.h"

/**
* print_array - Function that calculate half of a string
* @a: Pointer that point a place of the string
* @n: Value of lenght of the array, number of the values
* return: 0;
*/

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);

		if ((x + 1) != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}

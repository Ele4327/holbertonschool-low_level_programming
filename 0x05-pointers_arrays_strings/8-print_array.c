#include <stdio.h>
#include "holberton.h"

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != n)
		{
			printf(", ");
		}
		printf("%d", a[x]);
	}
	printf("\n");
}

#include <stdio.h>

/**
* swap_int - function print a triangle with certains values.
* @a: Vale of the first variable
* @b: Vale of the second variable
* Return: 0.
*/

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

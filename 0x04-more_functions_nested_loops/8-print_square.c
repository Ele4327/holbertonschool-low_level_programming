#include "holberton.h"

/**
* print_square - tests function that prints a square
* @size: Value of rows and columns of the square
* Return: 0
*/

void print_square(int size)
{
	int x;
	int y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}

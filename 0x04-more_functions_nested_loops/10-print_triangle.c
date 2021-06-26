#include "holberton.h"

/**
* print_triangle - function print a triangle with certains values.
* @size: size of the triangle a print.
* Return: 0.
*/

void print_triangle(int size)
{

	int x;
	int y;
	int z;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = size; y > x; y--)
			{
				_putchar(' ');
			}
			for (z = 1; z < y; z++)
			{
				_putchar('#');
			}

			_putchar('#');
			_putchar('\n');
		}
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}

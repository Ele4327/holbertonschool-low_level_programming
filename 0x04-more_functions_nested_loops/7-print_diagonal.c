#include "holberton.h"

/**
* print_diagonal - tests function that prints a ceraintly way of a line
* @n: Value of spaces an rows
* Return: 0
*/

void print_diagonal(int n)
{
	int x;
	int y;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

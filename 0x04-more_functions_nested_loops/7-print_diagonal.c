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

	x = 1;

	if (n > 0)
	{

		for (x = 1; x <= n; x++)
		{
			for (y = 1; y <= x; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

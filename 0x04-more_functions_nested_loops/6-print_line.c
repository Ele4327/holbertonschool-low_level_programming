#include "holberton.h"

/**
* print_line - tests function that prints a ceraintly way of a line
* @n: Value of spaces who make the line
* Return: 0
*/

void print_line(int n)
{

	int x;

	x = 0;

	while (n > x)
	{
		x++;
		_putchar('_');
	}

	_putchar('\n');
}

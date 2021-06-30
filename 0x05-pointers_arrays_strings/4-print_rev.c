#include <stdio.h>
#include "holberton.h"

/**
* print_rev - function print a string in reverse.
* @s: A string
* Return: 0.
*/

void print_rev(char *s)
{
	int x;
	int y;

	y = 0;
	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	x--;
	while (x >= y)
	{
		_putchar(s[x]);
		x--;
	}
	_putchar('\n');
}

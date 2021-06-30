#include <stdio.h>
#include "holberton.h"

/**
* puts2 - tests function that prints a string every other value
* @str: pointer of str.
* Return: 0
*/

void puts2(char *str)
{

	int x;

	x = 0;
	while (x < str)
	{
		x++;
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}

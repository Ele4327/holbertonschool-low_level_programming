#include <stdio.h>
#include "holberton.h"

/**
* puts2 - tests function that prints a string every other value
* @str: pointer of str.
* Return: 0
*/

void puts2(char *str)
{

	int len, x;

	x = 0;
	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	while (x < len)
	{
		_putchar(str[x]);
		x += 2;
	}
	_putchar('\n');
}

#include <stdio.h>
#include "holberton.h"

/**
* puts2 - tests function that prints a string every other value
* @str: pointer of str.
* Return: 0
*/

int len(char *str)
{

	char *ptrinit = str;

	while (*str++)
		;

	return ((--str) - ptrinit);
}

void puts2(char *str)
{

	int x;

	x = 0;
	while (x < 8)
	{
		x++;
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}

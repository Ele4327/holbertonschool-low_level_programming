#include "holberton.h"

/**
* puts_half - Function that calculate half of a string
* @str: Pointer that point a place of the string
* return: 0;
*/

void puts_half(char *str)
{
	int len, x, y;

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	if ((len % 2) == 0)
	{
		x = (len / 2);
		for (y = x; y < len; y++)
		{
			_putchar(str[y]);
		}
	}
	else
	{
		x = ((len - 1) / 2);
		for (y = x + 1; y < len; y++)
		{
			_putchar(str[y]);
		}
	}
	_putchar('\n');
}

#include <stdio.h>
#include "holberton.h"

/**
* _puts - function print a string.
* @str: A string
* Return: 0.
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

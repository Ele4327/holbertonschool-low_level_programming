#include <stdio.h>
#include "holberton.h"

/**
* print_rev - function print a string in reverse.
* @s: A string
* Return: 0.
*/

void print_rev(char *s)
{

	char *ptrinit;

	ptrinit = s;

	while (*s != '\0')
	{
		s++;
	}

	s--;
	while ((s != ptrinit) && (s != NULL))
	{
		_putchar(*s);
		s--;
	}
	_putchar(*s);
	_putchar('\n');
}

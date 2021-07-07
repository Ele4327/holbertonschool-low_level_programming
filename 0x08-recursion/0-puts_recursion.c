#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: String base
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		return (_puts_recursion(++s));
	}
}

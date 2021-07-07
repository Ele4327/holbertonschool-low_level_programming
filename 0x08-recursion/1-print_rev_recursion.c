#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: String base
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		(_print_rev_recursion(s + 1));
		if (*s != '\0')
		{
			_putchar(*s);
		}
	}
}

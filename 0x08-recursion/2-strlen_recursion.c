#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

int strrecursion(char *x, int z);

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: String base
 * Return: A variable type int.
 */

int _strlen_recursion(char *s)
{
	return (strrecursion(s, 0));
}

/**
 * strrecursion - function that calculates the length of a string.
 * @x: Pointer to a String
 * @z: A container, to determine the lenght
 * Return: A variable type int.
 */

int strrecursion(char *x, int z)
{
	if (*x == '\0')
	{
		return (z);
	}
	else
	{
		return (strrecursion(++x, ++z));
	}
}

#include <stdio.h>
#include "holberton.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: String base
 * @accept: string that accepts
 * Return: a variable type char.
 */

char *_strpbrk(char *s, char *accept)
{
	char *x = accept;

	while (*s)
	{

		if (*accept && (*accept != *s))
		{
			accept++;
		}
		else if (!(*accept))
		{
			accept = x, s++;
		}
		else if (*accept == *s)
		{
			break;
		}
	}

	return ((*s) ? s : NULL);
}

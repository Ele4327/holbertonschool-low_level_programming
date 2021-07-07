#include <stdio.h>
#include "holberton.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: Array
 * @c: Character
 * Return: a variable type char.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else if (*s == c)
		{
			break;
		}
	}
	return ((*s || !(c)) ? s : NULL);
}

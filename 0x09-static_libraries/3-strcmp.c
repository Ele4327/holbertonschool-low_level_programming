#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - function what compares one string and another
 * @s1: String a
 * @s2: String b
 * Return: Variable type int.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
		{
			return (*s1 - *s2);
		}
	}
	return (0);
}

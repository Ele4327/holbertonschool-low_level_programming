#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - function changes all lowercase letters to uppercase.
 * @lttr: letter to convert
 * Return: A variable type char.
 */

char *string_toupper(char *lttr)
{
	char *strt = lttr;

	while (*lttr)
	{
		if (*lttr >= 'a' && *lttr <= 'z')
		{
			*lttr++ += ('A' - 'a');
		}
		else
		{
			lttr++;
		}
	}

	return (strt);
}

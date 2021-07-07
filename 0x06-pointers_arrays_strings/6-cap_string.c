#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all words of a string.
 * @rtrn: Result of string capitalized
 * Return: A variable type char.
 */

char *cap_string(char *rtrn)
{
	int x;

	if (rtrn[0] >= 'a' && rtrn[0] <= 'z')
	{
		rtrn[0] = rtrn[0] - 32;
	}

	for (x = 1; rtrn[x] != '\0'; x++)
	{
		if ((rtrn[x] == ' ' || rtrn[x] == '\t' ||
		     rtrn[x] == '\n' || rtrn[x] == ',' || rtrn[x] == ';' ||
		     rtrn[x] == '.' || rtrn[x] == '!' || rtrn[x] == '?' ||
		     rtrn[x] == '"' || rtrn[x] == '(' || rtrn[x] == ')' ||
		     rtrn[x] == '{' || rtrn[x] == '}') &&
		    (rtrn[x + 1] > 'a' && rtrn[x + 1] < 'z'))
		{
			rtrn[x + 1] -= 32;
		}
	}

	return (rtrn);
}

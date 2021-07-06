#include <stdio.h>
#include "holberton.h"

/**
 * _memset - function to set string
 * @s: String type char who returns
 * @b: String type char who take the value set
 * @n: Cantity of values
 * Return: S.
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}

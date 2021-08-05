#include <stdio.h>
#include "holberton.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: Initial segment
 * @accept: only value of the bytes
 * Return: a variable type int.
 */

unsigned int _strspn(char *s, char *accept)
{
	int x;
	int z;
	int a;
	int b;

	x = 0;
	a = 0;

	while (s[x] != '\0')
	{
		b = 0;
		z = 0;
		while (accept[z] != '\0')
		{
			if (s[x] == accept[z])
			{
				a++;
				b = 1;
				break;
			}

			z++;
		}
		if (b == 0)
		{
			break;
		}
		x++;
	}
	return (a);
}

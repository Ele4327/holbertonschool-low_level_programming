#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - function to copy one string to another
 * @dest: String destiny
 * @src: String source
 * @n: Numbers of character who takes string who returns
 * Return: Variable type char.
 */

char *_strncpy(char *dest, char *src, int n)
{

	char *start = dest;
	char *incln = dest + n;

	while ((dest < incln) && n)
	{
		if (*src && n)
		{
			*dest++ = *src++, n--;
		}
		else
		{
			*dest++ = '\0';
		}
	}
	return (start);
}

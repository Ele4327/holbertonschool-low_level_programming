#include <stdio.h>
#include "holberton.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: String type char who returns
 * @src: String source
 * @n: Cantity of values bytes who takes source to destiny.
 * Return: a variable type char.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		dest[n] = src[n];
	}
	return (dest);
}

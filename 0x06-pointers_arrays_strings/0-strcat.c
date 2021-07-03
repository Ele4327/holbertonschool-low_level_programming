#include <stdio.h>
#include "holberton.h"

/**
 * *_strcat - Pointer of string a+b
 * @dest: pointer od string a
 * @src: pointer od string b
 * Return: a Char variable.
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, x = 0;

	for (; dest[x] != '\0'; x++)
	{
	}

	while (src[index] != '\0')
	{
		dest[x] = src[index];
		x++;
		index++;
	}

	return (dest);
}

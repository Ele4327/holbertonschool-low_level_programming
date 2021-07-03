#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - String who returns strings a+ b
 * @dest: String a
 * @src: String b
 * @n: Numbers of character who takes string who returns
 * Return: Varaible type char.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, x;

	for (x = 0; dest[x]; x++)
	{
	}

	while (src[index] && index < n)
	{
		dest[x] = src[index];
		x++;
		index++;
	}

	return (dest);
}

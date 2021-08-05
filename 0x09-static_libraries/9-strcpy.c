#include <stdio.h>
#include "holberton.h"

/**
* _strcpy - Function that calculate half of a string
* @dest: Value where take every character of string and return
* @src: String base
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}

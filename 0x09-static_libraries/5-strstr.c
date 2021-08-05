#include <stdio.h>
#include "holberton.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: Place where locate
 * @needle: What is located
 * Return: a variable type char.
 */

char *_strstr(char *haystack, char *needle)
{
	signed int cntdr = 0;
	char *tmp = needle;

	while (*haystack)
	{
		if (!(*needle))
		{
			break;
		}
		else if (*needle != *haystack)
		{
			needle = tmp, haystack++, cntdr = 0;
		}
		else if (*needle == *haystack)
		{
			cntdr--, needle++, haystack++;
		}
	}

	return (!(*needle) ? haystack + cntdr : NULL);
}

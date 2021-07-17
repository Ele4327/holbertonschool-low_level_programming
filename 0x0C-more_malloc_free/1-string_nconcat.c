#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"

/**
* string_nconcat - Function that concatenates two strings with malloc
* @s1: String 1
* @s2: String 2
* @n: Size of the bytes to take
* Return: String total, the string concatenated
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t sizeStr1, sizeStr2;
	char *strConcat;
	size_t stringLen;

	if (s1 == NULL)
	{
		sizeStr1 = 0;
	}
	else
	{
		sizeStr1 = strlen(s1);
	}

	if (s2 == NULL)
	{
		sizeStr2 = 0;
	}
	else
	{
		if (n >= strlen(s2))
		{
			sizeStr2 = strlen(s2);
		}
		else
		{
			sizeStr2 = n;
		}
	}

	stringLen = sizeStr1 + sizeStr2 + 1;

	strConcat = malloc(stringLen);
	if (strConcat != NULL)
	{
		memset(strConcat, '\0', (stringLen));

		memcpy(strConcat, s1, sizeStr1);

		memcpy((strConcat + sizeStr1), s2, sizeStr2);
	}

	return (strConcat);
}

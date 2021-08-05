#include <stdio.h>

/**
* _strlen - function print lenght of string.
* @s: Vale of the string
* Return: 0.
*/

int _strlen(char *s)
{
	int y;

	for (y = 0; *s != '\0'; y++)
	{
		(s++);
	}

	return (y);
}

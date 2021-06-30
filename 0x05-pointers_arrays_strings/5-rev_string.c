#include <stdio.h>
#include "holberton.h"

/**
* swap - function that swap values.
* @tempzero: first value swap
* @tempone: second value swap
* Return: 0.
*/

void swap(char *tempzero, char *tempone)
{

	int temp = *tempzero;

	*tempzero = *tempone;
	*tempone = temp;
}

/**
* len - function that calculates lenght of a string.
* @s: A string
* Return: 0.
*/

int len(char *s)
{

	char *ptrinit = s;

	while (*s++)
		;

	return ((--s) - ptrinit);
}

/**
* rev_string - function that print a string in reverse.
* @s: A string
* Return: 0.
*/

void rev_string(char *s)
{

	char *temp = s + len(s);

	temp--;

	for (; temp > s; s++, temp--)
	{

		swap(s, temp);
	}
}

#include "holberton.h"

/**
* _isupper - tests function that prints if integer uppercase or lowercase
* @c: incognit variable assign by main
* Return: 0
*/

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

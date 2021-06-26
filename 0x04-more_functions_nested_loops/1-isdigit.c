#include "holberton.h"

/**
* _isdigit - tests function that prints if integer is a digit
* @c: incognit variable assigned by main
* Return: 0
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

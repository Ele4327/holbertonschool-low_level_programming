#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: A given number to find out the factorial.
 * Return: A variable type int.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

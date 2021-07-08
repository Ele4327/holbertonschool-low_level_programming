#include "holberton.h"
#include <stdio.h>

/**
 * functionx - Intersystem that calculates how work a function precursion
 * @x: Number Base.
 * @y: Exponent.
 * Return: A variable type int.
 */

int functionx(int x, int y)
{
	int sqr;

	sqr = y * y;
	if (sqr == x)
		return (y);
	else if (sqr < x)
		return (functionx(x, y + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - Function precursion returns natural square root
 * @n: Value that returns.
 * Return: A variable type int.
 */

int _sqrt_recursion(int n)
{
	return (functionx(n, 1));
}

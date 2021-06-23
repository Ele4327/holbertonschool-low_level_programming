#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 *
 * @x: Value of the incognit. And then absolute of the incognit.
 *
 * Return: Always 0.
 */

int print_last_digit(int x)

{

	if (x > 0)
	{
		x = (x * 1);
	}
	else if (x < 0)
	{
		x = (x * -1);
	}

	x = x % 10;

	_putchar(x + 48);
}

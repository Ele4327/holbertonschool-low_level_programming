#include "holberton.h"

/**
 * _abs - check the code for Holberton School students.
 *
 * @x: Value of the incognit.
 * @y: Value of the absolute of the incognit.
 *
 * Return: Always 0.
 */

int _abs(int x, int y)
{

	if (x > 0)
	{
		y = (x * 1);
		return (y);
	}
	else if (x < 0)
	{
		y = (x * -1);
		return (y);
	}
}

#include "holberton.h"

/**
 * _abs - check the code for Holberton School students.
 *
 * @x: Value of the incognit.
 * @y: Value of the absolute of the incognit.
 *
 * Return: Always 0.
 */

int _abs(int r)
{

	if (r > 0)
	{
		r = (r * 1);
		return (r);
	}
	else if (r < 0)
	{
		r = (r * -1);
		return (r);
	}
	return (0);
}

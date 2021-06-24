#include "holberton.h"

/**
 * times_table - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int x, y, z, a, b, c, d;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (y = 1; y < 9; y++)
		{
			z = (x * y);
			a = (z % 10);
			b = ((z - a) / 10);

			if (z > 9)
			{
				_putchar(b + 48);
			}
			else
			{
				_putchar(' ');
			}
			_putchar(a + 48);
			_putchar(',');
			_putchar(' ');
		}
		z = (9 * x);
		c = (z % 10);
		d = ((z - c) / 10);
		if (z > 9)
		{
			_putchar(d + 48);
		}
		else
		{
			_putchar(' ');
		}
		_putchar(c + 48);
		_putchar('\n');
	}
}

#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 *
 * @x: Value of the incognit. And then absolute of the incognit.
 *
 * Return: Always 0.
 */

int main(int x)

{
	x = x % 10;

	if (x < 0)
	{
		x = (x * -1);
	}

	putchar(x + 48);

	return (x);
}

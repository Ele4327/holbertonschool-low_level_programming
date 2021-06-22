#include "holberton.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{

	int x;
	int a;

	for (x = 1; x <= 10; x++)
	{
		for (a = 0; a <= 25; a++)
		{
			_putchar(a + 97);
		}
		_putchar('\n');
	}
}

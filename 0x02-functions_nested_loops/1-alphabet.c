#include "holberton.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{

	int x;

	for (x = 0; x <= 25; x++)
	{
		_putchar(x + 97);
	}
	_putchar('\n');
}

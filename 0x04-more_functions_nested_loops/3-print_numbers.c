#include "holberton.h"

/**
* print_numbers - tests function that prints a list of numbers
* Return: 0
*/

void print_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x != 50 && x != 52)
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}

#include "holberton.h"

/**
* print_most_numbers - tests function that prints a list of numbers, some not
* Return: 0
*/

void print_most_numbers(void)
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

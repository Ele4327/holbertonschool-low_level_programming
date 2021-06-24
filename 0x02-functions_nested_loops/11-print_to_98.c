#include "holberton.h"

/**
 * print_to_98 - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_to_98(int n);
{
	int y;

	y = n;

	if (y < 98)
	{
		for (; y <= 98; y++)
		{
			if (y != 98)
			{
				printf("%d, ", y);
			}
			else
			{
				printf("%d", y);
			}
		}
	}
	else if (y > 98)
	{
		for (; y >= 98; y--)
		{
			if (y != 98)
			{
				printf("%d, ", y);
			}
			else
			{
				printf("%d", y);
			}
		}
	}
	else
	{
		printf("%d", y);
	}
	printf("\n");
}

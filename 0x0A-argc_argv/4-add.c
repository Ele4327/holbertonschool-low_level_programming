#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - Add two positive numbers
 * @argc: Counter
 * @argv: Vector
 * Return: If the number passed: no number = 0, symbiol = 1 - Error.
 */

int main(int argc, char **argv)
{
	int x;
	int y;
	int z;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] < '\0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		z + atoi(argv[c]);
	}

	printf("%d\n", z);
	return (0);
}

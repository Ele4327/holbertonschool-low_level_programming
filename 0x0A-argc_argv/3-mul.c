#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - Multiply two numbers
 * @argc: Counter
 * @argv: Vector
 * Return: 0, 1 Error.
 */

int main(int argc, char **argv)
{
	int x;
	int y;
	int z;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	z = (x * y);

	printf("%i\n", z);

	return (0);
}

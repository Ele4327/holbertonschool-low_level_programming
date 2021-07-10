#include <stdio.h>
#include "holberton.h"

/**
 * main - Print number of arguments
 * @argc: Counter
 * @argv: Vector
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int x;

	(void)argv;

	for (x = 0; x <= argc; x++)
	{
	}

	printf("%d\n", x - 2);

	return (0);
}

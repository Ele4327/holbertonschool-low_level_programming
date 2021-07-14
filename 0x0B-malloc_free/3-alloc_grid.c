#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * init - function that initialize.
 * @argv: Argument Vector
 * @width: Width of the array 2d
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */

void init(int **argv, int width)
{

	int copywidth = 0;

	while (*argv)
	{

		if (copywidth < width)
		{

			(*argv)[copywidth++] = 0;
		}
		else if (copywidth == width)
		{

			copywidth = 0;
			argv++;
		}
	}
}

void Free(int **argv)
{
	int **temp = argv;

	while (*argv)
	{

		free(*argv);
		argv++;
	}
	free(temp);
}

/**
 * alloc_grid - function that converse a grid of aa 2 dimensional pointer.
 * @width: Width of the array 2d
 * @height: Height of the array 2d
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */

int **alloc_grid(int width, int height)
{

	int **argv;
	int **argv1;

	if (width <= 0 && height <= 0)
	{
		return NULL;
	}

	argv = (int **)malloc(sizeof(int *) * (height + 1));

	if (!argv)
	{
		free(argv);
		return (NULL);
	}

	argv[height] = NULL;
	argv1 = argv;

	for (; height; --height)
	{

		*argv = (int *)malloc(sizeof(int) * width);

		if (!*argv)
		{
			Free(argv1);
			return (NULL);
		}

		argv++;
	}

	init(argv1, width);

	return (argv1);
}

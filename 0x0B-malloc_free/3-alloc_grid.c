#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * print_grid - function that print a grid of aa 2 dimensional pointer.
 * @grid: The grid of the array
 * @width: Width of the array 2d
 * @height: Height of the array 2d
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */

void print_grid(int **grid, int width, int height)
{
	int w;
	int h;

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			printf("%d ", grid[h][w]);
			w++;
		}
		printf("%s", "\n");
		h++;
	}
}

/**
 * init - function that initialize.
 * @argv: Argument Vector
 * @width: Width of the array 2d
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */

int init(int **argv, int width)
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

	argv = (int **)malloc(sizeof(int *) * (height + 1));
	argv[height] = NULL;
	argv1 = argv;

	for (; height; --height)
	{

		*argv = (int *)malloc(sizeof(int) * width);

		if (*argv == NULL)
		{

			return (NULL);
		}

		argv++;
	}

	init(argv1, width);

	return (argv1);
}

/**
 * main - function main.
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */

int main(void)
{
	int **grid;

	grid = alloc_grid(6, 4);
	if (grid == NULL)
	{
		return (1);
	}
	print_grid(grid, 6, 4);
	grid[0][3] = 98;
	grid[3][4] = 402;
	printf("%s", "\n");

	print_grid(grid, 6, 4);
	return (0);
}

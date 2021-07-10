#include <stdio.h>
#include "holberton.h"

/**
 * main - Print ALL arguments
 * @argc: Counter
 * @argv: Vector
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
    int x;

    for (x = 0; x < argc; x++)
    {
        printf("%s\n", argv[x]);
    }
    return (0);
}

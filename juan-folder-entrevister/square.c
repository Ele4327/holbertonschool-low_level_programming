#include <stdlib.h>
#include <stdio.h>

void print_square(int size)
{
    int x;
    int y;

    for (x = 0; x < size; x++)
    {
        for (y = 0; y < size; y++)
        {
            putchar('#');
        }
        putchar('\n');
    }
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}

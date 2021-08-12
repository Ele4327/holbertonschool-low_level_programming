#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void _print_rev_recursion(char *s)
{

    int x;
    int y;

    x = 0;
    y = 0;

    while (s[x] != '\0')
    {
        x++;
        /* putchar(s[x]); */
    }
    x--;

    while (x >= y)
    {
        putchar(s[x]);
        x--;
    }
}

if (x )
{
    /* code */
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}

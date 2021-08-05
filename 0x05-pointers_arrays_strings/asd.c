#include <stdio.h>

int main(void)
{
    int len, x, y;

    char *str = "Holberton 123456789";

    for (len = 0; str[len] != '\0'; len++)
    {
        if ((len % 2) == 0)
        {
            putchar(str[len]);
        }
    }

    /*for (y = 0; y < len; y += 2)
    {
        putchar(str[y]);
    }*/
    putchar('\n');

    return (0);
}
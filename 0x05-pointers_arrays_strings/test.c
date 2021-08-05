#include <stdio.h>

int main(void)
{
    int len, x, y;

    char *str = "Hola que tal como estas";

    for (len = 0; str[len] != '\0'; len++)
    {
    }

    if (len % 2 == 1)
    {
        x = (len / 2);
        for (y = x; y < len; y++)
        {
            putchar(str[x]);
        }
        putchar('\n');
    }

    return (0);
}

for (len = 0; str[len] != '\0'; len++)
{
}
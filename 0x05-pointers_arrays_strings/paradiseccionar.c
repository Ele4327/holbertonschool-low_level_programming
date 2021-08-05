#include <stdio.h>
#include "holberton.h"

/**
* puts2 - tests function that prints a string every other value
* @str: pointer of str.
* Return: 0
*/

void puts2(char *str)
{

    int len, x;

    x = 0;
    len = 0;

    while (str[len] != '\0')
    {
        len++;

        if ((len % 2) == 0)
        {
            _putchar(str[len]);
        }
    }

    while (x < len)
    {
        x++;
        _putchar(str[len]);
        x = x + 2;
    }
    _putchar('\n');
}

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

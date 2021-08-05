#include <stdio.h>
#include "holberton.h"

void print_rev(char *s)
{

    char *ptrinit;

    ptrinit = s;

    while (*s != '\0')
    {
        s++;
    }

    while (s != ptrinit)
    {
        _putchar(*s);
        s--;
    }
    _putchar(*s);
    _putchar('\n');
}

/* No hacer: 
    while (*s != '\n')
    {
        s++;
        _putchar(*s);
    }

    PORQUE HAY UNA PUTA N!!!!!!!!

    */
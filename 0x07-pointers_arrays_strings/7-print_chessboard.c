#include <stdio.h>
#include "holberton.h"
#define cmp 8

void print_chessboard(char (*a)[8])
{
    unsigned char xchrctr, mod1, mod2, mod3;
    signed char clmn;
    unsigned char ln;

    mod1 = mod2 = mod3 = 1;
    clmn = ln = cmp;
    xchrctr = 0;

    while (ln || xchrctr == '\n')
        if ((clmn >= 0) && (mod1))
        {
            xchrctr = (*a)
                [cmp - clmn--];
            mod1 = 0;
        }
        else if ((clmn == -1) && mod2)
        {
            clmn = cmp, ln--;
            xchrctr = '\n', mod2 = 0, a++;
        }
        else
            putchar(xchrctr), mod2 = mod1 = 1, xchrctr = 0;
}

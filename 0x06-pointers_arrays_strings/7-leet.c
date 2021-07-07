#include "holberton.h"
#include <stdio.h>

/**
 * leet - function that encodes a string into 1337.
 * @rtrn: Result of string capitalized
 * Return: A variable type char.
 */

char *leet(char *rtrn)
{
    int x;
    int z;

    char *bs = "aAeEoOtTlL";
    char *encryptd = "4433007711";

    for (x = 0; rtrn[x] != '\0'; x++)
    {
        for (z = 0; bs[z] != '\0'; z++)
        {
            if (rtrn[x] == bs[z])
            {
                rtrn[x] = encryptd[z];
            }
        }
    }

    return (rtrn);
}

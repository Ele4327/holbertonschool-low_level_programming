#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: Start value
 * @n: Size of the array
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
    if (n)
    {
        int temp, *ultm;

        ultm = a, ultm += (n - 1);

        while (a < ultm)
        {
            temp = *ultm;
            *ultm-- = *a;
            *a++ = temp;
        }
    }
}

#include <stdlib.h>
#include <stdio.h>

char *_strcpy(char *dest, char *src)
{

    int x;

    for (x = 0; src[x] != '\0'; x++)
    {
        dest[x] = src[x];
    }
    printf("\n");
    dest[x] = '\0';
    return (dest);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}

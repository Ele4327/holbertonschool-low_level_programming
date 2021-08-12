#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void _puts(char *str)
{
    write(1, str, 1024);
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}

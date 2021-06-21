#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	char xz;

	for (x = 48; x < 58; x++)

	{
		putchar(x);
	}

	for (xz = 'a'; xz <= 'f'; xz++)
	{
		putchar(xz);
	}

	putchar('\n');
	return (0);
}

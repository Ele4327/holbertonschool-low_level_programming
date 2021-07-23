#include "variadic_functions.h"

/**
 * print_numbers - Function that sumates all arguments
 * @separator: String who contains ","
 * @n: Number of values
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	unsigned int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(args, int));
		if (x != (n - 1))
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
}

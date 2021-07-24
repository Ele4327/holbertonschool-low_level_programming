#include "variadic_functions.h"

/**
 * print_strings - Function that print a chain of strings
 * @separator: String who contains ", "
 * @n: Number of the values who are strings
 * Return: Always 0;
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int x;
	char *aux;
	va_list args;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		aux = va_arg(args, char *);
		if (aux == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", aux);
		}
		if (x != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);

	printf("\n");
}

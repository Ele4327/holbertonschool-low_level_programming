#include "variadic_functions.h"

/**
 * sum_them_all - Function that sumates all arguments
 * @n: Number of arguments
 * Return: Value type int
 */

int sum_them_all(const unsigned int n, ...)
{
	int old;
	int new;
	unsigned int x;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	old = 0;
	new = 0;

	for (x = 0; x < n; x++)
	{
		old = va_arg(args, int);
		new = old + new;
	}
	va_end(args);
	return (new);
}

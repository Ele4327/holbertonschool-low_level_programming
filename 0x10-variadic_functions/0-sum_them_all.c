#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Function that sumates all arguments
 * @n: Number of arguments
 * Return: Value type int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (NULL);
	}

	int old;
	int new;
	int x;

	old = 0;
	new = 0;

	for (x = 0; x < n; x++)
	{
		old = va_arg(args, int);
		new = old + new;
	}
}
return (ttl);
}

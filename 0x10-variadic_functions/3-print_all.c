#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_all - Function that prints anything
 * @format: Type of data - Clasification
 * Return: Always 0.
 */

void print_all(const char *const format, ...)
{

	char *sprtr = ", ";
	int x = 0;
	int z = 0;
	char *ptr;

	va_list list;

	va_start(list, format);

	while (format && format[x])
		x++;
	while (format && format[z])
	{
		if (z == (x - 1))
		{
			sprtr = "";
		}
		switch (format[z])
		{
		case 'c':
			printf("%c%s", va_arg(list, int), sprtr);
			break;
		case 's':
			ptr = va_arg(list, char *);
			if (ptr == NULL)
				ptr = "(nil)";
			printf("%s%s", ptr, sprtr);
			break;
		case 'i':
			printf("%d%s", va_arg(list, int), sprtr);
			break;
		case 'f':
			printf("%f%s", va_arg(list, double), sprtr);
			break;
		}
		z++;
	}
	printf("\n");
	va_end(list);
}

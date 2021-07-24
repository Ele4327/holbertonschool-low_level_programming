#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - Function that prints anything
 * @format: Type of data - Clasification
 * Return: Always 0.
 */

void print_all(const char *const format, ...)
{
	char *ptr = NULL;
	const char *fmt = (const char *)format;
	const char *fmt1 = (const char *)format + strlen(format) - 1;
	int len = strlen(format) - 1;
	va_list list;

	va_start(list, format);
	while (fmt && *fmt)
	{
		switch (*fmt)
		{
		case 'c':
			printf("%c", va_arg(list, int)), fmt++;
			break;
		case 's':
			ptr = va_arg(list, char *);
			if (ptr == NULL)
				ptr = "(nil)";
			printf("%s", ptr), fmt++;
			break;
		case 'i':
			printf("%d", va_arg(list, int)), fmt++;
			break;
		case 'f':
			printf("%f", va_arg(list, double)), fmt++;
			break;
		}
		while (*fmt)
		{
			if ((*fmt == 'c' || *fmt == 's' || *fmt == 'i' || *fmt == 'f') &&
			    (fmt <= fmt1) && (len > 1))
			{
				printf(", ");
				break;
			}
			fmt++;
		}
	}
	printf("\n");
	va_end(list);
}

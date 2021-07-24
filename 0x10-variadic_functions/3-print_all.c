#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

void print_c(va_list list_arg);
void print_f(va_list list_arg);
void print_i(va_list list_arg);
void print_s(va_list list_arg);

/**
 * print_all - Function that prints anything
 * @format: Type of data - Clasification
 * Return: Always 0.
 */

void print_all(const char *const format, ...)
{

	int x = 0, z = 0;
	char *str = "";

	print_all_t array[] = {
	    {"c", print_c},
	    {"f", print_f},
	    {"i", print_i},
	    {"s", print_s},
	    {NULL, NULL}};

	va_list list_arg;

	va_start(list_arg, format);

	while (format && format[x])
	{
		z = 0;
		while (array[z].format)
		{
			if (*(array[z].format) == format[x])
			{
				printf("%s", str);
				array[z].f(list_arg);
				str = ", ";
				break;
			}
			z++;
		}
		x++;
	}
	va_end(list_arg);
	printf("\n");
}

/**
 * print_c - Function that prints type data Char
 * @list_arg: List of Arguments in Entry Point
 * Return: Always 0.
 */

void print_c(va_list list_arg)
{
	printf("%c", va_arg(list_arg, int));
}

/**
 * print_s - Function that prints type data Char (Strings)
 * @list_arg: List of Arguments in Entry Point
 * Return: Always 0.
 */

void print_s(va_list list_arg)
{
	char *str = va_arg(list_arg, char *);

	if (str == NULL)
	{
		printf("(nill)");
	}
	else
	{
		printf("%s", str);
	}
}

/**
 * print_f - Function that prints type data Float
 * @list_arg: List of Arguments in Entry Point
 * Return: Always 0.
 */

void print_f(va_list list_arg)
{
	printf("%f", va_arg(list_arg, double));
}

/**
 * print_i - Function that prints type data Integer
 * @list_arg: List of Arguments in Entry Point
 * Return: Always 0.
 */

void print_i(va_list list_arg)
{
	printf("%d", va_arg(list_arg, int));
}

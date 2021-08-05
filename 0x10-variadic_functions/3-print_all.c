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
		printf("(nil)");
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

// /**

// /**
//  * struct print - print type with corresponding print function
//  * @t: print type
//  * @f: print function
//  */
// typedef struct print
// {
//     char *t;
//     void (*f)(va_list);
// } print_t;

// #include <stdarg.h>
// #include <stdio.h>
// #include "variadic_functions.h"

// /**
//  * print_c - print a char
//  * @c: char to print
//  *
//  * Return: void
//  */
// void print_c(va_list c)
// {
//     printf("%c", va_arg(c, int));
// }

// /**
//  * print_s - prints a string
//  * @s: string to print
//  *
//  * Return: void
//  */
// void print_s(va_list s)
// {
//     char *str = va_arg(s, char *);

//     if (str == NULL)
//         str = "(nil)";
//     printf("%s", str);
// }

// /**
//  * print_i - prints an int
//  * @i: int to print
//  *
//  * Return: void
//  */
// void print_i(va_list i)
// {
//     printf("%d", va_arg(i, int));
// }

// /**
//  * print_f - prints a float
//  * @f: float to print
//  *
//  * Return: void
//  */
// void print_f(va_list f)
// {
//     printf("%f", va_arg(f, double));
// }

// /**
//  * print_all - prints anything
//  * @format: list of argument types passed to the function
//  *
//  * Return: void
//  */
// void print_all(const char * const format, ...)
// {
//     unsigned int i, j;
//     print_t p[] = {
//         {"c", print_c},
//         {"s", print_s},
//         {"i", print_i},
//         {"f", print_f},
//         {NULL, NULL}
//     };
//     va_list valist;
//     char *separator = "";

//     va_start(valist, format);
//     i = 0;
//     while (format && format[i])
//     {
//         j = 0;
//         while (p[j].t != NULL)
//         {
//             if (*(p[j].t) == format[i])
//             {
//                 printf("%s", separator);
//                 p[j].f(valist);
//                 separator = ", ";
//                 break;
//             }
//             j++;
//         }
//         i++;
//     }
//     va_end(valist);
//     printf("\n");
// }

// /**
//  * struct print - print type with corresponding print function
//  * @t: print type
//  * @f: print function
//  */
// typedef struct print
// {
//     char *t;
//     void (*f)(va_list);
// } print_t;

// #include <stdarg.h>
// #include <stdio.h>
// #include "variadic_functions.h"

// /**
//  * print_c - print a char
//  * @c: char to print
//  *
//  * Return: void
//  */
// void print_c(va_list c)
// {
//     printf("%c", va_arg(c, int));
// }

// /**
//  * print_s - prints a string
//  * @s: string to print
//  *
//  * Return: void
//  */
// void print_s(va_list s)
// {
//     char *str = va_arg(s, char *);

//     if (str == NULL)
//         str = "(nil)";
//     printf("%s", str);
// }

// /**
//  * print_i - prints an int
//  * @i: int to print
//  *
//  * Return: void
//  */
// void print_i(va_list i)
// {
//     printf("%d", va_arg(i, int));
// }

// /**
//  * print_f - prints a float
//  * @f: float to print
//  *
//  * Return: void
//  */
// void print_f(va_list f)
// {
//     printf("%f", va_arg(f, double));
// }

// /**
//  * print_all - prints anything
//  * @format: list of argument types passed to the function
//  *
//  * Return: void
//  */
// void print_all(const char * const format, ...)
// {
//     unsigned int i, j;
//     print_t p[] = {
//         {"c", print_c},
//         {"s", print_s},
//         {"i", print_i},
//         {"f", print_f},
//         {NULL, NULL}
//     };
//     va_list valist;
//     char *separator = "";

//     va_start(valist, format);
//     i = 0;
//     while (format && format[i])
//     {
//         j = 0;
//         while (p[j].t != NULL)
//         {
//             if (*(p[j].t) == format[i])
//             {
//                 printf("%s", separator);
//                 p[j].f(valist);
//                 separator = ", ";
//                 break;
//             }
//             j++;
//         }
//         i++;
//     }
//     va_end(valist);
//     printf("\n");
// }

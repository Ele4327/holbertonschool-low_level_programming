#include "3-calc.h"

/**
 * get_op_func - function that choose correct function.
 * @s: Pointer to string.
 * Return: Value type Int
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	    {"+", op_add},
	    {"-", op_sub},
	    {"*", op_mul},
	    {"/", op_div},
	    {"%", op_mod},
	    {NULL, NULL}};

	int x = 0;

	while (ops[x].op && s[1] == '\0')
	{

		if (*(ops[x].op) == *s)
		{
			return (ops[x].f);
		}

		x++;
	}
	return (NULL);
}

#include "3-calc.h"

/**
 * main - Main Function
 * @argc: Count the arguments.
 * @argv: Shows the vectors of the arguments.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		int (*f)(int a, int b);
		int number2;

		f = get_op_func(&*argv[2]);
		if (f == NULL)
		{
			printf("Error\n");
			exit(99);
		}
		number2 = atoi(*(argv + 3));
		if (number2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
		{
			printf("Error\n");
			exit(100);
		}
		else
		{
			printf("%d\n", f(atoi(*(argv + 1)), number2));
		}
	}

	return (0);
}

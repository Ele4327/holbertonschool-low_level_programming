#include "holberton.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: Array of counters
 * @av: Size of Array of counters
 * Return: Always 0.
 */

char *argstostr(int ac, char **av)
{

	if (ac && av)
	{
		int result = 0;
		char *Buffer = NULL;
		int temp = ac;
		char **temp1 = av;

		while (ac--)
		{

			result += strlen(*av++);
			result++;
		}
		result++;

		Buffer = (char *)malloc(sizeof(char) * result);
		ac = temp;

		return (Buffer);
	}
	else
	{
		return (NULL);
	}
}

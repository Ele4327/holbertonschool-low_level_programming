#include <stdlib.h>
#include <string.h>
#include "holberton.h"

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: Array of counters
 * @av: Size of Array of counters
 * Return: Always 0.
 */

void copy(char *Buffer, char **av, int ac)
{

	while (ac--)
	{

		while (**av != '\0')
		{
			*Buffer++ = *((*av)++);
		}
		*Buffer++ = '\n';
		av++;
	}
	*Buffer = '\0';
}

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

		if (Buffer)
			copy(Buffer, temp1, temp);

		return Buffer;
	}
	else
	{
		return NULL;
	}
}
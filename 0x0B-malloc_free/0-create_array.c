#include <stdio.h>
#include <stdlib.h>
void array(char *ptrarray, char o, unsigned int size);

/**
 * *create_array - Creation of a Array
 * @c: A specific character
 * @size: Value to mide the array
 * Return: The value stored
 */

char *create_array(unsigned int size, char c)
{
	char *x;

	x = (char *)malloc(sizeof(char) * size);
	array(x, c, size);

	if (x == NULL)
	{
		printf("failed to allocate memory");
		return (x);
	}
	if (size == 0)
	{
		return (NULL);
	}

	return (x);
}

/**
 * array - Creation of a Array
 * @ptrarray: Pointer of the array
 * @o: A char value
 * @size: Size determined of the string
 * return: Always 0
 */

void array(char *ptrarray, char o, unsigned int size)
{
	while (ptrarray && size--)
	{
		*ptrarray++ = o;
	}
}

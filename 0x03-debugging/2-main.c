#include <stdio.h>
#include "holberton.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
	int a, b, c;
	int largest;

	a = 20;
	b = 20;
	c = 5;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}

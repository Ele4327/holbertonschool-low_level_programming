#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	/* Size of evaluates the size of a variable */
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu bytes(s)\n", sizeof(int));
	printf("Size of long int: %zu bytes(s)\n", sizeof(long int));
	printf("Size of long long int: %zu bytes(s)\n", sizeof(double));
	printf("Size of float: %zu bytes(s)\n", sizeof(float));

	return (0);
}

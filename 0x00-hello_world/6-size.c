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
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu bytes(s)\n", sizeof(intType));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(long int Type));
	printf("Size of a long long int: %zu bytes(s)\n", sizeof(double Type));
	printf("Size of a float: %zu bytes(s)\n", sizeof(float Type));

	return (0);
}

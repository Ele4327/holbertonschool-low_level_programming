#include "holberton.h"
#include <stdio.h>

/**
 * search - Intersystem that calculates if the input integer is a prime number
 * @srchx: Value to search
 * @nmbr: Value to compare if is a prime
 * Return: A variable type int.
 */

int search(int srchx, int nmbr)
{
	if (srchx <= nmbr)
	{
		if ((srchx == nmbr) && (!(nmbr % srchx)))
		{
			return (1);
		}
		else if (nmbr <= 0)
		{
			return (0);
		}
		else if ((srchx == nmbr) && (!(nmbr % srchx)))
		{
			return (0);
		}
		else
		{
			return (search(srchx + 1, nmbr));
		}
	}
	else
	{
		return (0);
	}
}

/**
 * is_prime_number - Intersystem calculates if input integer is prime number
 * @n: Number to evaluate if is a prime.
 * Return: A variable type int.
 */

int is_prime_number(int n)
{
	int search(int a, int b);
	{
		return (search(2, n));
	}
}

#include "holberton.h"

/**
 * factorial - factorial of a given number
 * @n: number
 *
 * Return: result
 */

int factorial(int n)
{
	int fact;

	if (n == 0)
	{
		fact = 1;
	}
	else if (n > 0)
	{
		fact = n * factorial(n - 1);
	}
	else
	{
		fact = -1;
	}
	return (fact);
}

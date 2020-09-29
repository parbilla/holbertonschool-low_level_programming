#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print elements of an array * @str: parameter
 * @a: array
 * @n: parameter
 *
 * Return: always (Success)
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", *(a + i));
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}

#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - print to 98
 * @n: parameter
 *
 * Return: Always (Success)
 */

void print_to_98(int n)
{
	int count;

	if (n <= 98)
	{
		for (count = n; count < 99; count++)
		{
			printf("%i", count);
			if (count != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (count = n; count > 97; count--)
		{
			printf("%i", count);
			if (count != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}

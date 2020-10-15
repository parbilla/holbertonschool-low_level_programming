#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
	{
		return (0);
	}
	p = malloc((max - min + 1) * sizeof(int));
	if (p == 0)
	{
		return (0);
	}
	for (i = 0; i <= max - min; i++)
	{
		p[i] = i + min;
	}
	return (p);
}

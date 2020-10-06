#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints diagonal sums
 * @a: pointer
 * @size: size
 *
 * Return: always
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	for (i = 0; (i * size + i) < (size * size); i++)
	{
		sum1 = sum1 + a[(i * size + i)];
		sum2 = sum2 + a[((size * i) + size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}

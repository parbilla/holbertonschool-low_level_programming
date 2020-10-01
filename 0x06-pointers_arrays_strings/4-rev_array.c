#include "holberton.h"

/**
 * reverse_array - reverse array of numbers
 * @a: array of integers
 * @n: number of elements
 *
 * Return: always
 */

void reverse_array(int *a, int n)
{
	int i, aux;

	i = 0;
	while (i < n - 1)
	{
		aux = a[i];
		a[i] = a[n - 1];
		a[n - 1] = aux;
		i++;
		n--;
	}
}

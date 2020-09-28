#include "holberton.h"

/**
 * swap_int - swap the values of two integers
 * @a: first parameter
 * @b: second parameter
 *
 * Return: always (Success)
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

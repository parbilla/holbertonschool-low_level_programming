#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - returns pointer
 * @b: length
 *
 * Return: pointed to dest
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == 0)
	{
		exit(98);
	}
	return (p);
}

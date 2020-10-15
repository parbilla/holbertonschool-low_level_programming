#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - array of chars
 * @size: size of string
 * @c: intializer
 *
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}

	p = (char *) malloc(size * sizeof(char));

	if (p == 0)
	{
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}

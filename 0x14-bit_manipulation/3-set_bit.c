#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @index:index
 * @n: number
 * Return: void.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n | (1 << index);
	return (1);
}

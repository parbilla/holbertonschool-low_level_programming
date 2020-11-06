#include "holberton.h"

/**
 * get_bit - the value of a bit at a given index.
 * @index:index
 * @n: number
 * Return: void.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	n = n >> index;
	if (n & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

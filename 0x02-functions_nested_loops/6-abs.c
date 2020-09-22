#include "holberton.h"

/**
 * _abs - define absolut value
 * @i: parameter
 *
 * Return: i (Success)
 */

int _abs(int i)
{
	if (i < 0)
	{
		i = (-1) * i;
	}
	return (i);
}

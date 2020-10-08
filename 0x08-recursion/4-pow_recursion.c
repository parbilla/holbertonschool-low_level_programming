#include "holberton.h"

/**
 * _pow_recursion - x raised to y
 * @x: number
 * @y: power
 *
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	int res;

	if (y == 0)
	{
		res = 1;
	}
	else if (y > 0)
	{
		y--;
		res = x * _pow_recursion(x, y);
	}
	else
	{
		res = -1;
	}
	return (res);
}

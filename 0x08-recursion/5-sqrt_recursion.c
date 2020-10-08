#include "holberton.h"

/**
 * _sqrt_recursion - returns natural square root
 * @n: number
 *
 * Return: result
 */

int _sqrt_recursion(int n)
{
	int res, div;

	if (n == 1)
	{
		res = 1;
	}
	else if (n > 3)
	{
		if (n / div == div)
		{
			res = div;
		}
		else
		{
			div--;
			_sqrt_recursion
		}
	}
	else
	{
		res = -1;
	}
	return (res);
}

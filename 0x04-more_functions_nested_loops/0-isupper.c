#include "holberton.h"

/**
 * _isupper - define uppercase
 * @c: parameter
 *
 * Return: 1 (Success)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "holberton.h"

/**
 * _isdigit - define digit
 * @c: parameter
 *
 * Return: 1 (Success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

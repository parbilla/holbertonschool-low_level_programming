#include "holberton.h"

/**
 * _islower - define lowercase
 * @c: parameter
 *
 * Return: 1 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

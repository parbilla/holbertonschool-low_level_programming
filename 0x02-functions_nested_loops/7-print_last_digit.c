#include "holberton.h"

/**
* print_last_digit - print last digit
* @i: parameter
*
* Return: n (Success)
*/

int print_last_digit(int i)
{
	int n;

	n = i % 10;
	if (n < 0)
	{
		n = (-1) * n;
	}
	_putchar ('0' + n);
	return (n);
}
